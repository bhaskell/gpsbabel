/*
    Common utilities for XML-based formats.

    Copyright (C) 2004 Robert Lipe, robertlipe@usa.net

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111 USA

 */

#include "defs.h"
#include "xmlgeneric.h"

#ifndef NO_EXPAT
	#include <expat.h>
	static XML_Parser psr;
#endif

static vmem_t current_tag;
static vmem_t cdatastr;
static FILE *ifd;
static xg_tag_mapping *xg_tag_tbl;

#define MY_CBUF 4096

#define MYNAME "XML Reader"

void
write_xml_header(FILE *ofd)
{
	fprintf(ofd, "<?xml version=\"1.0\"?>\n");
}

void
write_xml_entity(FILE *ofd, const char *indent,
                 const char *tag, const char *value)
{
        char *tmp_ent = xml_entitize(value);
        fprintf(ofd, "%s<%s>%s</%s>\n", indent, tag, tmp_ent, tag);
        xfree(tmp_ent);
}

void
write_optional_xml_entity(FILE *ofd, const char *indent,
                          const char *tag, const char *value)
{
        if (value && *value)
                write_xml_entity(ofd, indent, tag, value);
}

void
write_xml_entity_begin0(FILE *ofd, const char *indent,
							  const char *tag)
{
    fprintf(ofd, "%s<%s>\n", indent, tag);
}

void
write_xml_entity_begin1(FILE *ofd, const char *indent,
							  const char *tag, const char *attr,
							  const char *attrval)
{
    fprintf(ofd, "%s<%s %s=\"%s\">\n", indent, tag, attr, attrval);
}

void
write_xml_entity_begin2(FILE *ofd, const char *indent,
							  const char *tag, const char *attr1,
							  const char *attrval1, const char *attr2,
							  const char *attrval2)
{
    fprintf(ofd, "%s<%s %s=\"%s\" %s=\"%s\">\n", indent, tag, attr1, attrval1, attr2, attrval2);
}

void
write_xml_entity_end(FILE *ofd, const char *indent,
					 const char *tag)
{
    fprintf(ofd, "%s</%s>\n", indent, tag);
}

void
xml_fill_in_time(char *time_string, const time_t timep, int long_or_short)
{
	struct tm *tm = gmtime(&timep);
	char *format;
	
	if (!tm)
		return;
	
	if (long_or_short == XML_LONG_TIME)
		format = "%02d-%02d-%02dT%02d:%02d:%02dZ";
	else
		format = "%02d%02d%02dT%02d%02d%02dZ";
	sprintf(time_string, format,
		tm->tm_year+1900, 
		tm->tm_mon+1, 
		tm->tm_mday, 
		tm->tm_hour, 
		tm->tm_min, 
		tm->tm_sec);
}

void
xml_write_time(FILE *ofd, const time_t timep, char *elname)
{
	char time_string[64];
	xml_fill_in_time(time_string, timep, XML_LONG_TIME);
	fprintf(ofd, "<%s>%s</%s>\n",
		elname,
		time_string,
		elname
	);

}

/***********************************************************************
 * These implement a simple interface for "generic" XML that
 * maps reasonably close to  1:1 between XML tags and internal data
 * structures.   
 * 
 * It doesn't work well for formats (like GPX) that really are "real"
 * XML with extended namespaces and such, but it handles many simpler
 * xml strains and insulates us from a lot of the grubbiness of expat.
 */

xg_callback *
xml_tbl_lookup(const char *tag, xg_cb_type cb_type)
{
	xg_tag_mapping *tm;
        for (tm = xg_tag_tbl; tm->tag_cb != NULL; tm++) {
		if (0 == strcmp(tm->tag_name, tag) && (cb_type == tm->cb_type)) {
			return tm->tag_cb;
		}
	}
	return NULL;
}


static void
xml_start(void *data, const char *el, const char **attr)
{
	char *e;
	char *ep;
	xg_callback *cb;

	vmem_realloc(&current_tag, strlen(current_tag.mem) + 2 + strlen(el));

	e = current_tag.mem;
        ep = e + strlen(e);
        *ep++ = '/';
        strcpy(ep, el);

	memset(cdatastr.mem, 0, cdatastr.size);

	cb = xml_tbl_lookup(e, cb_start);
	if (cb) {
		(*cb)(NULL, attr);
	}
}

static void
xml_cdata(void *dta, const XML_Char *s, int len)
{
	char *estr;
	xg_callback *cb;

	vmem_realloc(&cdatastr,  1 + len + strlen(cdatastr.mem));
	estr = (char *) cdatastr.mem + strlen(cdatastr.mem);
	memcpy(estr, s, len);
	estr[len]  = 0;

	cb = xml_tbl_lookup(current_tag.mem, cb_cdata);
	if (cb) {
		(*cb)(estr, NULL);
	}
}

static void
xml_end(void *data, const char *el)
{
	char *s = strrchr(current_tag.mem, '/');
	xg_callback *cb;

	if (strcmp(s + 1, el)) {
		fprintf(stderr, "Mismatched tag %s\n", el);
	}

	cb = xml_tbl_lookup(current_tag.mem, cb_end);
	if (cb) {
		(*cb)(el, NULL);
	}
	*s = 0;
}

void xml_read(void)
{
	int len;
	char buf[MY_CBUF];
	
	while ((len = fread(buf, 1, sizeof(buf), ifd))) {
		if (!XML_Parse(psr, buf, len, feof(ifd))) {
			fatal(MYNAME ":Parse error at %d: %s\n",
				XML_GetCurrentLineNumber(psr),
				XML_ErrorString(XML_GetErrorCode(psr)));
		}
	}
	XML_ParserFree(psr);
	
}

void xml_readstring( char *str ) 
{
	int len = strlen(str);
	if (!XML_Parse(psr, str, len, 1)) {
		fatal( MYNAME ":Parse error at %d: %s\n",
				XML_GetCurrentLineNumber(psr),
				XML_ErrorString(XML_GetErrorCode(psr)));
	}
	XML_ParserFree(psr);
}

void
xml_init(const char *fname, xg_tag_mapping *tbl, const char *encoding)
{
	if (fname) {
		ifd = xfopen(fname, "r", MYNAME);
	}

	current_tag = vmem_alloc(1,0);
	*((char *)current_tag.mem) = '\0';

	psr = XML_ParserCreate((const XML_Char *)encoding);
	if (!psr) {
		fatal(MYNAME ": Cannot create XML Parser\n");
	}

	cdatastr = vmem_alloc(1, 0);
	*((char *)cdatastr.mem) = '\0';

	xg_tag_tbl = tbl;

	XML_SetElementHandler(psr, xml_start, xml_end);
	XML_SetCharacterDataHandler(psr, xml_cdata);
}

void
xml_deinit(void)
{
	vmem_free(&current_tag);
	vmem_free(&cdatastr);
	if (ifd) {
		fclose(ifd);
		ifd = NULL;
	}
}

/******************************************/