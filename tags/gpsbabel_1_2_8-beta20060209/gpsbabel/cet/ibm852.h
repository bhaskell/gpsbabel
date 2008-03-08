/*

    Data automatically generated from recode output:

        'recode -lf "IBM852" 2>/dev/null'


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

#ifndef ibm852_h
#define ibm852_h

#define cet_cs_name_ibm852 "IBM852"

const char *cet_cs_alias_ibm852[] = 
{
	"IBM852/CR-LF", "852/CR-LF", "CP852/CR-LF", "pcl2", 
	"pclatin2", NULL
};

#define cet_ucs4_ofs_ibm852 128
#define cet_ucs4_cnt_ibm852 128

const int cet_ucs4_map_ibm852[cet_ucs4_cnt_ibm852] =
{
	0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x016f, 0x0107, 0x00e7, 
	0x0142, 0x00eb, 0x0150, 0x0151, 0x00ee, 0x0179, 0x00c4, 0x0106, 
	0x00c9, 0x0139, 0x013a, 0x00f4, 0x00f6, 0x013d, 0x013e, 0x015a, 
	0x015b, 0x00d6, 0x00dc, 0x0164, 0x0165, 0x0141, 0x00d7, 0x010d, 
	0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x0104, 0x0105, 0x017d, 0x017e, 
	0x0118, 0x0119, 0x00ac, 0x017a, 0x010c, 0x015f, 0x00ab, 0x00bb, 
	0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x00c1, 0x00c2, 0x011a, 
	0x015e, 0x2563, 0x2551, 0x2557, 0x255d, 0x017b, 0x017c, 0x2510, 
	0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0102, 0x0103, 
	0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x00a4, 
	0x0111, 0x0110, 0x010e, 0x00cb, 0x010f, 0x0147, 0x00cd, 0x00ce, 
	0x011b, 0x2518, 0x250c, 0x2588, 0x2584, 0x0162, 0x016e, 0x2580, 
	0x00d3, 0x00df, 0x00d4, 0x0143, 0x0144, 0x0148, 0x0160, 0x0161, 
	0x0154, 0x00da, 0x0155, 0x0170, 0x00fd, 0x00dd, 0x0163, 0x00b4, 
	0x00ad, 0x02dd, 0x02db, 0x02c7, 0x02d8, 0x00a7, 0x00f7, 0x00b8, 
	0x00b0, 0x00a8, 0x02d9, 0x0171, 0x0158, 0x0159, 0x25a0, 0x00a0
};

#define cet_ucs4_to_ibm852_ct 128

const cet_ucs4_link_t cet_ucs4_to_ibm852_links[cet_ucs4_to_ibm852_ct] =
{
	 {0x00a0, 0xff} /* space */,
	 {0x00a4, 0xcf} /* sign */,
	 {0x00a7, 0xf5} /* sign */,
	 {0x00a8, 0xf9} /* diaeresis */,
	 {0x00ab, 0xae} /* double angle quotation mark */,
	 {0x00ac, 0xaa} /* sign */,
	 {0x00ad, 0xf0} /* hyphen */,
	 {0x00b0, 0xf8} /* sign */,
	 {0x00b4, 0xef} /* accent */,
	 {0x00b8, 0xf7} /* cedilla */,
	 {0x00bb, 0xaf} /* double angle quotation mark */,
	 {0x00c1, 0xb5} /* capital letter a with acute */,
	 {0x00c2, 0xb6} /* capital letter a with circumflex */,
	 {0x00c4, 0x8e} /* capital letter a with diaeresis */,
	 {0x00c7, 0x80} /* capital letter c with cedilla */,
	 {0x00c9, 0x90} /* capital letter e with acute */,
	 {0x00cb, 0xd3} /* capital letter e with diaeresis */,
	 {0x00cd, 0xd6} /* capital letter i with acute */,
	 {0x00ce, 0xd7} /* capital letter i with circumflex */,
	 {0x00d3, 0xe0} /* capital letter o with acute */,
	 {0x00d4, 0xe2} /* capital letter o with circumflex */,
	 {0x00d6, 0x99} /* capital letter o with diaeresis */,
	 {0x00d7, 0x9e} /* sign */,
	 {0x00da, 0xe9} /* capital letter u with acute */,
	 {0x00dc, 0x9a} /* capital letter u with diaeresis */,
	 {0x00dd, 0xed} /* capital letter y with acute */,
	 {0x00df, 0xe1} /* small letter sharp s (german) */,
	 {0x00e1, 0xa0} /* small letter a with acute */,
	 {0x00e2, 0x83} /* small letter a with circumflex */,
	 {0x00e4, 0x84} /* small letter a with diaeresis */,
	 {0x00e7, 0x87} /* small letter c with cedilla */,
	 {0x00e9, 0x82} /* small letter e with acute */,
	 {0x00eb, 0x89} /* small letter e with diaeresis */,
	 {0x00ed, 0xa1} /* small letter i with acute */,
	 {0x00ee, 0x8c} /* small letter i with circumflex */,
	 {0x00f3, 0xa2} /* small letter o with acute */,
	 {0x00f4, 0x93} /* small letter o with circumflex */,
	 {0x00f6, 0x94} /* small letter o with diaeresis */,
	 {0x00f7, 0xf6} /* sign */,
	 {0x00fa, 0xa3} /* small letter u with acute */,
	 {0x00fc, 0x81} /* small letter u with diaeresis */,
	 {0x00fd, 0xec} /* small letter y with acute */,
	 {0x0102, 0xc6} /* capital letter a with breve */,
	 {0x0103, 0xc7} /* small letter a with breve */,
	 {0x0104, 0xa4} /* capital letter a with ogonek */,
	 {0x0105, 0xa5} /* small letter a with ogonek */,
	 {0x0106, 0x8f} /* capital letter c with acute */,
	 {0x0107, 0x86} /* small letter c with acute */,
	 {0x010c, 0xac} /* capital letter c with caron */,
	 {0x010d, 0x9f} /* small letter c with caron */,
	 {0x010e, 0xd2} /* capital letter d with caron */,
	 {0x010f, 0xd4} /* small letter d with caron */,
	 {0x0110, 0xd1} /* capital letter d with stroke */,
	 {0x0111, 0xd0} /* small letter d with stroke */,
	 {0x0118, 0xa8} /* capital letter e with ogonek */,
	 {0x0119, 0xa9} /* small letter e with ogonek */,
	 {0x011a, 0xb7} /* capital letter e with caron */,
	 {0x011b, 0xd8} /* small letter e with caron */,
	 {0x0139, 0x91} /* capital letter l with acute */,
	 {0x013a, 0x92} /* small letter l with acute */,
	 {0x013d, 0x95} /* capital letter l with caron */,
	 {0x013e, 0x96} /* small letter l with caron */,
	 {0x0141, 0x9d} /* capital letter l with stroke */,
	 {0x0142, 0x88} /* small letter l with stroke */,
	 {0x0143, 0xe3} /* capital letter n with acute */,
	 {0x0144, 0xe4} /* small letter n with acute */,
	 {0x0147, 0xd5} /* capital letter n with caron */,
	 {0x0148, 0xe5} /* small letter n with caron */,
	 {0x0150, 0x8a} /* capital letter o with double acute */,
	 {0x0151, 0x8b} /* small letter o with double acute */,
	 {0x0154, 0xe8} /* capital letter r with acute */,
	 {0x0155, 0xea} /* small letter r with acute */,
	 {0x0158, 0xfc} /* capital letter r with caron */,
	 {0x0159, 0xfd} /* small letter r with caron */,
	 {0x015a, 0x97} /* capital letter s with acute */,
	 {0x015b, 0x98} /* small letter s with acute */,
	 {0x015e, 0xb8} /* capital letter s with cedilla */,
	 {0x015f, 0xad} /* small letter s with cedilla */,
	 {0x0160, 0xe6} /* capital letter s with caron */,
	 {0x0161, 0xe7} /* small letter s with caron */,
	 {0x0162, 0xdd} /* capital letter t with cedilla */,
	 {0x0163, 0xee} /* small letter t with cedilla */,
	 {0x0164, 0x9b} /* capital letter t with caron */,
	 {0x0165, 0x9c} /* small letter t with caron */,
	 {0x016e, 0xde} /* capital letter u with ring above */,
	 {0x016f, 0x85} /* small letter u with ring above */,
	 {0x0170, 0xeb} /* capital letter u with double acute */,
	 {0x0171, 0xfb} /* small letter u with double acute */,
	 {0x0179, 0x8d} /* capital letter z with acute */,
	 {0x017a, 0xab} /* small letter z with acute */,
	 {0x017b, 0xbd} /* capital letter z with dot above */,
	 {0x017c, 0xbe} /* small letter z with dot above */,
	 {0x017d, 0xa6} /* capital letter z with caron */,
	 {0x017e, 0xa7} /* small letter z with caron */,
	 {0x02c7, 0xf3} /* caron */,
	 {0x02d8, 0xf4} /* breve */,
	 {0x02d9, 0xfa} /* above */,
	 {0x02db, 0xf2} /* ogonek */,
	 {0x02dd, 0xf1} /* acute accent */,
	 {0x2500, 0xc4} /* drawings light horizontal */,
	 {0x2502, 0xb3} /* drawings light vertical */,
	 {0x250c, 0xda} /* drawings light down and right */,
	 {0x2510, 0xbf} /* drawings light down and left */,
	 {0x2514, 0xc0} /* drawings light up and right */,
	 {0x2518, 0xd9} /* drawings light up and left */,
	 {0x251c, 0xc3} /* drawings light vertical and right */,
	 {0x2524, 0xb4} /* drawings light vertical and left */,
	 {0x252c, 0xc2} /* drawings light down and horizontal */,
	 {0x2534, 0xc1} /* drawings light up and horizontal */,
	 {0x253c, 0xc5} /* drawings light vertical and horizontal */,
	 {0x2550, 0xcd} /* drawings heavy horizontal */,
	 {0x2551, 0xba} /* drawings heavy vertical */,
	 {0x2554, 0xc9} /* drawings heavy down and right */,
	 {0x2557, 0xbb} /* drawings heavy down and left */,
	 {0x255a, 0xc8} /* drawings heavy up and right */,
	 {0x255d, 0xbc} /* drawings heavy up and left */,
	 {0x2560, 0xcc} /* drawings heavy vertical and right */,
	 {0x2563, 0xb9} /* drawings heavy vertical and left */,
	 {0x2566, 0xcb} /* drawings heavy down and horizontal */,
	 {0x2569, 0xca} /* drawings heavy up and horizontal */,
	 {0x256c, 0xce} /* drawings heavy vertical and horizontal */,
	 {0x2580, 0xdf} /* half block */,
	 {0x2584, 0xdc} /* half block */,
	 {0x2588, 0xdb} /* block */,
	 {0x2591, 0xb0} /* shade */,
	 {0x2592, 0xb1} /* shade */,
	 {0x2593, 0xb2} /* shade */,
	 {0x25a0, 0xfe} /* square */
};

/*
#define cet_ucs4_to_ibm852_extra_ct 0
const cet_ucs4_link_t cet_ucs4_to_ibm852_extra[cet_ucs4_to_ibm852_extra_ct] = {};
*/

cet_cs_vec_t cet_cs_vec_ibm852 =	/* defined in cet.h */
{	
	cet_cs_name_ibm852,		/* name of character set	*/
	cet_cs_alias_ibm852,		/* alias table			*/

	NULL,				/* ... to UCS-4 converter (multi-byte) */
	NULL,				/* UCS-4 to ... converter (multi-byte) */

	cet_ucs4_map_ibm852,		/* char to UCS-4 value table	*/
	cet_ucs4_ofs_ibm852,		/* first non standard character	*/
	cet_ucs4_cnt_ibm852,		/* number of values in table	*/

	cet_ucs4_to_ibm852_links,	/* UCS-4 to char links		*/
	cet_ucs4_to_ibm852_ct,		/* number of links		*/

	NULL,				/* hand made UCS-4 links	*/
	0,				/* number of extra links	*/

	NULL	/* for internal use */
};


/*
const int ibm852_ucs4_full_map[] =
{
	0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 
	0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e, 0x000f, 
	0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016, 0x0017, 
	0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e, 0x001f, 
	0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027, 
	0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f, 
	0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037, 
	0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f, 
	0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047, 
	0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f, 
	0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057, 
	0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f, 
	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067, 
	0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f, 
	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077, 
	0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x007f, 
	0x00c7, 0x00fc, 0x00e9, 0x00e2, 0x00e4, 0x016f, 0x0107, 0x00e7, 
	0x0142, 0x00eb, 0x0150, 0x0151, 0x00ee, 0x0179, 0x00c4, 0x0106, 
	0x00c9, 0x0139, 0x013a, 0x00f4, 0x00f6, 0x013d, 0x013e, 0x015a, 
	0x015b, 0x00d6, 0x00dc, 0x0164, 0x0165, 0x0141, 0x00d7, 0x010d, 
	0x00e1, 0x00ed, 0x00f3, 0x00fa, 0x0104, 0x0105, 0x017d, 0x017e, 
	0x0118, 0x0119, 0x00ac, 0x017a, 0x010c, 0x015f, 0x00ab, 0x00bb, 
	0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x00c1, 0x00c2, 0x011a, 
	0x015e, 0x2563, 0x2551, 0x2557, 0x255d, 0x017b, 0x017c, 0x2510, 
	0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x0102, 0x0103, 
	0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x00a4, 
	0x0111, 0x0110, 0x010e, 0x00cb, 0x010f, 0x0147, 0x00cd, 0x00ce, 
	0x011b, 0x2518, 0x250c, 0x2588, 0x2584, 0x0162, 0x016e, 0x2580, 
	0x00d3, 0x00df, 0x00d4, 0x0143, 0x0144, 0x0148, 0x0160, 0x0161, 
	0x0154, 0x00da, 0x0155, 0x0170, 0x00fd, 0x00dd, 0x0163, 0x00b4, 
	0x00ad, 0x02dd, 0x02db, 0x02c7, 0x02d8, 0x00a7, 0x00f7, 0x00b8, 
	0x00b0, 0x00a8, 0x02d9, 0x0171, 0x0158, 0x0159, 0x25a0, 0x00a0
};
*/

#endif