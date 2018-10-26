# include "cc.h"
# include "c2.h"

/*

	C Compiler
	Phase P: Parser
	Section 4: Parsing Tables

	Copyright (c) 1977 by Alan Snyder

*/

extern int mtype, btype, in_type_def, strlev, *parml;
extern int val, line, *pv, *pl;

ar6 ()
	{afdef(pv[1],pv[2]);}

ar7 ()
	{val=afdcl(1);}

ar8 ()
	{val=afdcl(0);}

ar9 ()
	{val=pv[2];}

ar10 ()
	{afpdcl();}

ar11 ()
	{afpdcl();}

ar12 ()
	{val=pv[3];}

ar13 ()
	{val=pv[2];}

ar16 ()
	{aidecl();}

ar17 ()
	{aidecl();}

ar18 ()
	{adeclr(maktyp());}

ar24 ()
	{inz(i_int,pv[1]);}

ar25 ()
	{inz(i_int,-pv[2]);}

ar26 ()
	{inz(i_float,pv[1]);}

ar27 ()
	{inz(i_negfloat,pv[2]);}

ar28 ()
	{inz(i_idn,pv[1]);}

ar29 ()
	{inz(i_idn,pv[2]);}

ar30 ()
	{inz(i_string,pv[1]);}

ar31 ()
	{inz(i_int,pv[1]);}

ar37 ()
	{attrib(-1,pv[1]);}

ar38 ()
	{attrib(pv[1],pv[2]);}

ar39 ()
	{attrib(pv[2],pv[1]);}

ar42 ()
	{val=TINT;}

ar43 ()
	{val=TCHAR;}

ar44 ()
	{val=TFLOAT;}

ar45 ()
	{val=TDOUBLE;}

ar46 ()
	{val=TINT;}

ar47 ()
	{val=TINT;}

ar48 ()
	{val=TINT;}

ar49 ()
	{val=TINT;}

ar50 ()
	{val=TDOUBLE;}

ar51 ()
	{val=TINT;}

ar52 ()
	{val=TINT;}

ar53 ()
	{val=astruct(NULL,pv[3]);}

ar54 ()
	{val=astruct(pv[2],pv[4]);}

ar55 ()
	{val=aostruct(pv[2]);}

ar56 ()
	{val=c_auto;}

ar57 ()
	{val=c_static;}

ar58 ()
	{val=c_extern;}

ar59 ()
	{val=c_auto;}

ar60 ()
	{val=c_typedef;}

ar63 ()
	{val=adeclr(maktyp());}

ar64 ()
	{val=adeclr(afield(pv[1],pv[3]));}

ar65 ()
	{val=adeclr(afield(-1,pv[2]));}

ar66 ()
	{aiinz(adeclr(maktyp()));}

ar67 ()
	{val=adclr(pv[2],MPTR);}

ar68 ()
	{val=adclr(pv[1],MFUNC);}

ar69 ()
	{val=adclr(pv[1],MARRAY,1);}

ar70 ()
	{val=adclr(pv[1],MARRAY,pv[3]);}

ar71 ()
	{val=adclr(0,0);}

ar72 ()
	{val=pv[2];}

ar73 ()
	{val=adclr(pv[2],MPTR);}

ar74 ()
	{val=adclr(pv[1],MFUNC);}

ar75 ()
	{val=adclr(pv[1],MARRAY,1);}

ar76 ()
	{val=adclr(pv[1],MARRAY,pv[3]);}

ar77 ()
	{val=adclr(adclr(0,0),MFUNC);
							parml=0;}

ar78 ()
	{val=adclr(adclr(0,0),MFUNC);
							parml=pv[3];}

ar79 ()
	{val=pv[2];}

ar80 ()
	{val=push(pv[1]);}

ar81 ()
	{push(pv[3]);}

ar88 ()
	{in_type_def=0;
						val=pv[2];}

ar89 ()
	{in_type_def=1;
						attrib(-1,pv[1]);}

ar91 ()
	{val=astmtl(pv[1],pv[2]);}

ar92 ()
	{val=aexprstmt(pv[1]);}

ar94 ()
	{val=aif(pv[3],pv[5],0);}

ar95 ()
	{val=aif(pv[3],pv[5],pv[7]);}

ar96 ()
	{val=awhile(pv[3],pv[5]);}

ar97 ()
	{val=afor(pv[3],pv[5],pv[7],pv[9]);}

ar98 ()
	{val=ado(pv[2],pv[5]);}

ar99 ()
	{val=aswitch(pv[3],pv[5]);}

ar100 ()
	{val=acase(pv[2],pv[4]);}

ar101 ()
	{val=adefault(pv[3]);}

ar102 ()
	{val=abreak();}

ar103 ()
	{val=acontinue();}

ar104 ()
	{val=areturn(0);}

ar105 ()
	{val=areturn(pv[2]);}

ar106 ()
	{val=agoto(pv[2]);}

ar107 ()
	{val=alabel(pv[1],pv[3]);}

ar108 ()
	{val=aentry(pv[2],pv[4]);}

ar109 ()
	{val=anull();}

ar111 ()
	{val=0;}

ar113 ()
	{val=aelist(pv[1],pv[3]);}

ar114 ()
	{val=node(n_times,pv[1],pv[3]);}

ar115 ()
	{val=node(n_div,pv[1],pv[3]);}

ar116 ()
	{val=node(n_mod,pv[1],pv[3]);}

ar117 ()
	{val=node(n_plus,pv[1],pv[3]);}

ar118 ()
	{val=node(n_minus,pv[1],pv[3]);}

ar119 ()
	{val=node(n_ls,pv[1],pv[3]);}

ar120 ()
	{val=node(n_rs,pv[1],pv[3]);}

ar121 ()
	{val=node(n_lt,pv[1],pv[3]);}

ar122 ()
	{val=node(n_gt,pv[1],pv[3]);}

ar123 ()
	{val=node(n_le,pv[1],pv[3]);}

ar124 ()
	{val=node(n_ge,pv[1],pv[3]);}

ar125 ()
	{val=node(n_eq,pv[1],pv[3]);}

ar126 ()
	{val=node(n_ne,pv[1],pv[3]);}

ar127 ()
	{val=node(n_band,pv[1],pv[3]);}

ar128 ()
	{val=node(n_bxor,pv[1],pv[3]);}

ar129 ()
	{val=node(n_bior,pv[1],pv[3]);}

ar130 ()
	{val=node(n_tv_and,pv[1],pv[3]);}

ar131 ()
	{val=node(n_tv_or,pv[1],pv[3]);}

ar132 ()
	{val=node(n_qmark,pv[1],node(n_colon,pv[3],pv[5]));}

ar133 ()
	{val=node(n_assign,pv[1],pv[3]);}

ar134 ()
	{val=node(n_ars+pv[2],pv[1],pv[3]);}

ar135 ()
	{val=node(n_comma,pv[1],pv[3]);}

ar138 ()
	{val=aidn(alidn(pv[1]));}

ar140 ()
	{val=aidn(afidn(pv[1]));}

ar141 ()
	{val=atidn(pv[1]);}

ar142 ()
	{val=node(n_inca,pv[1]);}

ar143 ()
	{val=node(n_deca,pv[1]);}

ar144 ()
	{val=node(n_star,pv[2]);}

ar145 ()
	{val=node(n_addr,pv[2]);}

ar146 ()
	{val=node(n_uminus,pv[2]);}

ar147 ()
	{val=node(n_tvnot,pv[2]);}

ar148 ()
	{val=node(n_bnot,pv[2]);}

ar149 ()
	{val=node(n_incb,pv[2]);}

ar150 ()
	{val=node(n_decb,pv[2]);}

ar151 ()
	{val=node(n_sizeof,pv[2]);}

ar152 ()
	{val=node(n_int,1);}

ar153 ()
	{val=pv[4];}

ar154 ()
	{val=asubscript(pv[1],pv[3]);}

ar155 ()
	{val=acall(pv[1],pv[3]);}

ar156 ()
	{val=acall(pv[1],0);}

ar157 ()
	{val=adot(pv[1],pv[3]);}

ar158 ()
	{val=aptr(pv[1],pv[3]);}

ar159 ()
	{val=aidn(aeidn(pv[1]));}

ar160 ()
	{val=node(n_int,pv[1]);}

ar161 ()
	{val=node(n_float,pv[1]);}

ar162 ()
	{val=node(n_string,pv[1]);}

ar163 ()
	{val=pv[2];}

ar172 ()
	{apshw();}

ar173 ()
	{apshd();}

ar174 ()
	{apshf();}

ar175 ()
	{apshs();}

ar176 ()
	{strlev++;}

ar177 ()
	{val=astridn(pv[1]);}

ar178 ()
	{abegin();}

ar179 ()
	{aend();}

ar180 ()
	{val=pv[1]*pv[3];}

ar181 ()
	{val=pv[1]/pv[3];}

ar182 ()
	{val=pv[1]%pv[3];}

ar183 ()
	{val=pv[1]+pv[3];}

ar184 ()
	{val=pv[1]-pv[3];}

ar185 ()
	{val=pv[1]<<pv[3];}

ar186 ()
	{val=pv[1]>>pv[3];}

ar187 ()
	{val=pv[1]<pv[3];}

ar188 ()
	{val=pv[1]>pv[3];}

ar189 ()
	{val=pv[1]<=pv[3];}

ar190 ()
	{val=pv[1]>=pv[3];}

ar191 ()
	{val=pv[1]==pv[3];}

ar192 ()
	{val=pv[1]!=pv[3];}

ar193 ()
	{val=pv[1]&pv[3];}

ar194 ()
	{val=pv[1]^pv[3];}

ar195 ()
	{val=pv[1]|pv[3];}

ar196 ()
	{val=pv[1]&&pv[3];}

ar197 ()
	{val=pv[1]||pv[3];}

ar198 ()
	{val=(pv[1]?pv[3]:pv[5]);}

ar200 ()
	{val= -pv[2];}

ar201 ()
	{val= !pv[2];}

ar202 ()
	{val= ~pv[2];}

ar204 ()
	{val=pv[2];}

int (*act[])() {
	0, 0, 0, 0, 0, 0, ar6, ar7, ar8, ar9,
	ar10, ar11, ar12, ar13, 0, 0, ar16, ar17, ar18, 0,
	0, 0, 0, 0, ar24, ar25, ar26, ar27, ar28, ar29,
	ar30, ar31, 0, 0, 0, 0, 0, ar37, ar38, ar39,
	0, 0, ar42, ar43, ar44, ar45, ar46, ar47, ar48, ar49,
	ar50, ar51, ar52, ar53, ar54, ar55, ar56, ar57, ar58, ar59,
	ar60, 0, 0, ar63, ar64, ar65, ar66, ar67, ar68, ar69,
	ar70, ar71, ar72, ar73, ar74, ar75, ar76, ar77, ar78, ar79,
	ar80, ar81, 0, 0, 0, 0, 0, 0, ar88, ar89,
	0, ar91, ar92, 0, ar94, ar95, ar96, ar97, ar98, ar99,
	ar100, ar101, ar102, ar103, ar104, ar105, ar106, ar107, ar108, ar109,
	0, ar111, 0, ar113, ar114, ar115, ar116, ar117, ar118, ar119,
	ar120, ar121, ar122, ar123, ar124, ar125, ar126, ar127, ar128, ar129,
	ar130, ar131, ar132, ar133, ar134, ar135, 0, 0, ar138, 0,
	ar140, ar141, ar142, ar143, ar144, ar145, ar146, ar147, ar148, ar149,
	ar150, ar151, ar152, ar153, ar154, ar155, ar156, ar157, ar158, ar159,
	ar160, ar161, ar162, ar163, 0, 0, 0, 0, 0, 0,
	0, 0, ar172, ar173, ar174, ar175, ar176, ar177, ar178, ar179,
	ar180, ar181, ar182, ar183, ar184, ar185, ar186, ar187, ar188, ar189,
	ar190, ar191, ar192, ar193, ar194, ar195, ar196, ar197, ar198, 0,
	ar200, ar201, ar202, 0, ar204, -1};



int r1[] {
	0, 1, 2, 2, 3, 3, 4, 5, 5, 6,
	7, 7, 8, 8, 9, 9, 10, 10, 10, 11,
	11, 11, 12, 12, 13, 13, 13, 13, 13, 13,
	13, 14, 14, 15, 15, 16, 16, 17, 17, 17,
	18, 18, 19, 19, 19, 19, 19, 19, 19, 19,
	19, 19, 19, 19, 19, 19, 20, 20, 20, 20,
	20, 21, 21, 22, 22, 22, 23, 24, 24, 24,
	24, 24, 24, 25, 25, 25, 25, 25, 25, 25,
	26, 26, 27, 27, 28, 28, 29, 29, 30, 31,
	32, 32, 33, 33, 33, 33, 33, 33, 33, 33,
	33, 33, 33, 33, 33, 33, 33, 33, 33, 33,
	34, 34, 35, 35, 36, 36, 36, 36, 36, 36,
	36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
	36, 36, 36, 36, 36, 36, 36, 37, 37, 38,
	38, 39, 40, 40, 40, 40, 40, 40, 40, 40,
	40, 40, 40, 40, 40, 40, 40, 40, 40, 40,
	40, 40, 40, 40, 41, 42, 42, 42, 42, 42,
	42, 42, 43, 44, 45, 46, 47, 48, 49, 50,
	51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
	51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
	52, 52, 52, 52, 52, -1};

int r2[] {
	0, 2, 2, 0, 1, 1, 2, 2, 1, 2,
	1, 0, 4, 3, 1, 3, 2, 1, 1, 1,
	3, 4, 1, 3, 1, 2, 1, 2, 1, 2,
	1, 1, 1, 1, 2, 3, 2, 1, 2, 2,
	1, 1, 1, 1, 1, 1, 1, 2, 1, 2,
	2, 1, 2, 4, 5, 2, 1, 1, 1, 1,
	1, 1, 3, 1, 3, 2, 1, 2, 3, 3,
	4, 1, 3, 2, 3, 3, 4, 3, 4, 3,
	1, 3, 1, 2, 1, 2, 1, 2, 3, 1,
	1, 2, 2, 1, 5, 7, 5, 9, 7, 5,
	4, 3, 2, 2, 2, 3, 3, 3, 4, 1,
	1, 0, 1, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 5, 3, 3, 3, 1, 1, 1, 1,
	1, 1, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 4, 4, 4, 4, 3, 3, 3, 1,
	1, 1, 1, 3, 2, 0, 2, 5, 2, 3,
	4, 3, 1, 1, 1, 1, 1, 1, 1, 1,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 5, 1,
	2, 2, 2, 1, 3, -1};

int g[] {
	0, 0, 2, 0, 19, 0, 20, 0, 21, 0,
	40, 0, 41, 41, 72, 0, 142, 0, 53, 92,
	180, 0, 54, 0, 101, 0, 184, 56, 102, 0,
	185, 286, 338, 0, 186, 0, 114, 73, 115, 114,
	201, 0, 22, 2, 23, 0, 116, 2, 24, 26,
	60, 73, 24, 114, 24, 0, 42, 2, 25, 73,
	25, 114, 25, 118, 202, 224, 202, 0, 43, 24,
	58, 0, 26, 0, 78, 47, 79, 153, 263, 0,
	55, 0, 56, 47, 80, 48, 82, 49, 83, 75,
	82, 76, 83, 153, 80, 0, 57, 2, 27, 4,
	32, 23, 51, 49, 32, 92, 181, 116, 181, 0,
	31, 0, 69, 0, 44, 44, 74, 0, 45, 110,
	197, 0, 108, 38, 70, 63, 109, 108, 196, 110,
	109, 197, 196, 0, 46, 0, 47, 114, 200, 0,
	143, 143, 229, 149, 260, 199, 289, 200, 229, 221,
	299, 300, 345, 301, 346, 344, 360, 352, 363, 355,
	366, 369, 373, 376, 377, 0, 144, 354, 365, 371,
	375, 0, 333, 0, 325, 118, 205, 126, 214, 127,
	216, 218, 298, 224, 205, 231, 303, 232, 304, 233,
	305, 234, 306, 235, 307, 236, 308, 237, 309, 238,
	310, 239, 311, 240, 312, 241, 313, 242, 314, 243,
	315, 244, 316, 245, 317, 246, 318, 247, 319, 248,
	320, 249, 321, 250, 322, 251, 323, 252, 324, 253,
	326, 256, 328, 259, 331, 261, 334, 262, 335, 348,
	361, 349, 362, 353, 364, 354, 334, 371, 334, 0,
	145, 0, 217, 0, 146, 0, 28, 119, 206, 120,
	207, 121, 208, 122, 209, 123, 210, 124, 211, 125,
	212, 138, 225, 294, 343, 347, 343, 0, 147, 224,
	302, 0, 203, 291, 340, 292, 341, 0, 293, 0,
	148, 0, 149, 0, 150, 0, 151, 0, 29, 0,
	65, 0, 73, 200, 290, 0, 227, 52, 90, 62,
	107, 84, 156, 85, 157, 104, 193, 136, 222, 161,
	265, 162, 266, 163, 267, 164, 268, 165, 269, 166,
	270, 167, 271, 168, 272, 169, 273, 170, 274, 171,
	275, 172, 276, 173, 277, 174, 278, 175, 279, 176,
	280, 177, 281, 178, 282, 179, 283, 336, 356, 342,
	359, 0, 187, 86, 158, 87, 159, 88, 160, 182,
	160, 0, 91, -1};

int pg[] {
	0, 0, 1, 3, 5, 7, 9, 11, 13, 17,
	19, 23, 25, 27, 31, 35, 37, 43, 47, 57,
	69, 73, 75, 81, 83, 97, 111, 113, 115, 119,
	123, 135, 137, 141, 167, 173, 175, 251, 253, 255,
	257, 279, 283, 289, 291, 293, 295, 297, 299, 301,
	303, 307, 363, -1};

int nbpw {16};

int nwpbt {5};

int a[] {
	0, 0, 0, 117, 195, 71, 106, 62, 66, 118,
	52, 92, 257, 179, 119, 120, 121, 176, 175, 163,
	162, 122, 123, 164, 250, 168, 169, 124, 125, 172,
	173, 170, 171, 166, 167, 258, 251, 177, 178, 0,
	5, 6, 7, 8, 9, 10, 11, 12, 126, 127,
	128, 369, 129, 130, 131, 132, 133, 134, 135, 136,
	137, 13, 138, 14, 15, 16, 17, 0, 0, 0,
	0, 0, 0, 0, 0, 113, 139, 140, 141, 12291,
	20481, 0, 0, 65280, 40960, 7, 4097, 16384, 4105, 8195,
	4117, 8196, 4171, 8210, 0, 4105, 8195, 4117, 8196, 4171,
	8222, 0, 12330, 12331, 12332, 12333, 12464, 12344, 12345, 12346,
	12347, 4136, 8225, 4138, 8226, 12334, 4136, 8227, 12336, 4136,
	8228, 12339, 12348, 4105, 8229, 12429, 12290, 12293, 20481, 0,
	0, 7936, 32768, 3, 4157, 8230, 4171, 8231, 12299, 12292,
	4105, 8240, 4106, 8244, 4117, 8241, 4171, 8242, 0, 20481,
	0, 0, 57344, 8192, 4, 12325, 4099, 8251, 12329, 20481,
	0, 0, 7936, 32768, 3, 4171, 8231, 0, 4103, 8254,
	4105, 8253, 12296, 12328, 4101, 8255, 4171, 8256, 0, 4105,
	8229, 0, 4103, 8254, 4104, 8258, 4105, 8253, 0, 4103,
	8254, 4105, 8253, 12361, 12335, 12338, 12337, 12340, 4104, 8259,
	4171, 8260, 0, 20481, 0, 0, 7936, 32768, 3, 4171,
	8231, 0, 12429, 12294, 4101, 8263, 0, 12377, 12329, 20481,
	0, 0, 7936, 32768, 3, 4157, 8230, 4171, 8231, 12298,
	12370, 12372, 4105, 8267, 4106, 8244, 4117, 8268, 4171, 8269,
	0, 4105, 8240, 4117, 8241, 4171, 8273, 0, 4105, 8240,
	4117, 8241, 4171, 8273, 0, 4105, 8229, 4106, 8276, 12359,
	4099, 12306, 4103, 8254, 4105, 8253, 4107, 12306, 12295, 4105,
	8277, 4110, 8278, 4111, 8279, 4118, 8280, 4172, 8281, 0,
	4099, 8285, 4107, 8284, 0, 12302, 12305, 4101, 8286, 4112,
	8287, 4118, 8288, 4171, 8289, 4172, 8290, 4173, 8291, 4174,
	8292, 0, 4099, 12351, 4103, 8296, 4105, 8295, 4107, 12351,
	12354, 12327, 12324, 12326, 4104, 8297, 0, 4102, 8298, 4105,
	8277, 4110, 8278, 4111, 8279, 4118, 8280, 4172, 8281, 0,
	20481, 0, 0, 7936, 32768, 3, 4171, 8231, 0, 4101,
	12465, 12343, 4101, 8302, 0, 12367, 12365, 12368, 4104, 8303,
	4107, 8304, 0, 12373, 12466, 12297, 20481, 49704, 6241, 65280,
	65527, 30727, 0, 12371, 4105, 8267, 4117, 8268, 4171, 8344,
	0, 4106, 8276, 12359, 4099, 8346, 4107, 8345, 0, 12349,
	4103, 8296, 4105, 8295, 12351, 4105, 8229, 12359, 4103, 8296,
	4104, 8347, 4105, 8295, 0, 4103, 8296, 4105, 8295, 12355,
	4105, 8277, 4110, 8278, 4111, 8279, 4118, 8280, 4172, 8281,
	0, 12491, 20481, 8192, 59038, 103, 0, 0, 4112, 8366,
	4117, 8353, 4118, 8357, 12353, 12487, 4105, 8240, 4106, 8244,
	4117, 8241, 4171, 8242, 0, 12323, 4105, 8277, 4110, 8278,
	4111, 8279, 4112, 8287, 4118, 8374, 4171, 8289, 4172, 8375,
	4173, 8291, 4174, 8292, 0, 4171, 8380, 0, 4172, 8381,
	4173, 8382, 0, 12316, 12312, 12314, 12318, 12304, 12307, 4104,
	8383, 0, 4102, 8384, 4105, 8277, 4110, 8278, 4111, 8279,
	4118, 8280, 4172, 8281, 0, 12362, 12363, 20481, 8192, 59038,
	103, 0, 0, 4102, 8386, 4112, 8366, 4117, 8353, 4118,
	8357, 0, 20481, 16, 0, 7936, 32768, 3, 4171, 8231,
	0, 12374, 12366, 4171, 8390, 0, 4105, 12428, 4106, 8391,
	4117, 12429, 4141, 12429, 4142, 12429, 4143, 12429, 4157, 12429,
	4162, 12429, 4171, 12429, 12447, 20481, 49704, 6241, 65280, 65527,
	30727, 0, 12321, 4105, 8240, 4106, 8244, 4117, 8241, 4171,
	8242, 0, 12397, 20481, 49664, 6241, 7936, 49152, 28675, 4171,
	8396, 0, 20481, 49664, 6241, 0, 16384, 28672, 4171, 8396,
	0, 20481, 49664, 6241, 0, 16384, 28672, 4099, 8405, 4171,
	8396, 0, 20481, 49664, 6241, 0, 16384, 28672, 4171, 8407,
	0, 4105, 8410, 0, 12463, 4099, 8411, 0, 4099, 8412,
	0, 12460, 12461, 12462, 4106, 8413, 0, 4171, 8415, 0,
	20481, 49152, 6241, 0, 16384, 28672, 4105, 8416, 4171, 8396,
	0, 12448, 12449, 12450, 12381, 20481, 49704, 6241, 0, 24567,
	28672, 4100, 8418, 4171, 8420, 0, 12378, 4099, 8422, 4107,
	8444, 4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115,
	8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4120,
	8442, 4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127,
	8432, 4128, 8433, 4129, 8428, 4130, 8429, 4132, 8443, 4133,
	8439, 4134, 8440, 0, 4105, 8445, 0, 4103, 8448, 4105,
	12427, 4108, 8449, 4123, 8446, 4124, 8447, 4131, 8450, 12424,
	4105, 8451, 0, 20481, 49704, 6241, 0, 24567, 28672, 4171,
	8420, 0, 4105, 8453, 0, 4105, 8454, 0, 12359, 4105,
	8267, 4106, 8244, 4117, 8268, 4171, 8269, 0, 12376, 12360,
	20481, 8192, 59038, 103, 0, 0, 4112, 8366, 4117, 8353,
	4118, 8357, 12352, 20481, 8192, 59038, 103, 0, 0, 4104,
	8456, 4112, 8366, 4117, 8353, 4118, 8357, 0, 12490, 12489,
	12488, 12303, 4103, 8254, 4105, 8253, 12306, 4105, 8277, 4110,
	8278, 4111, 8279, 4118, 8280, 4172, 8476, 4173, 8382, 0,
	4100, 12312, 4107, 12312, 12491, 4100, 8477, 4107, 8478, 0,
	12320, 12310, 20481, 8192, 59038, 103, 0, 0, 4112, 8366,
	4117, 8353, 4118, 8357, 12319, 12317, 12313, 12315, 12356, 12357,
	20481, 8192, 59038, 103, 0, 0, 4102, 8479, 4112, 8366,
	4117, 8353, 4118, 8357, 0, 12364, 12341, 12375, 20481, 0,
	0, 7936, 32768, 3, 4100, 8480, 4171, 8231, 0, 12369,
	20481, 49704, 6241, 0, 24567, 28672, 4100, 8418, 4171, 8420,
	0, 12322, 4105, 8483, 4117, 8484, 12453, 4104, 8486, 0,
	4105, 12428, 12447, 4104, 8487, 4107, 8444, 4109, 8441, 4112,
	8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117,
	8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122,
	8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129,
	8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 0,
	4103, 8448, 4105, 12427, 4108, 8449, 4123, 8446, 4124, 8447,
	4131, 8450, 12436, 4103, 8448, 4105, 12427, 4108, 8449, 4123,
	8446, 4124, 8447, 4131, 8450, 12435, 4103, 8448, 4105, 12427,
	4108, 8449, 4123, 8446, 4124, 8447, 4131, 8450, 12433, 4103,
	8448, 4105, 12427, 4108, 8449, 4123, 8446, 4124, 8447, 4131,
	8450, 12432, 4103, 8448, 4105, 12427, 4108, 8449, 4123, 8446,
	4124, 8447, 4131, 8450, 12434, 4103, 8448, 4105, 12427, 4108,
	8449, 4123, 8446, 4124, 8447, 4131, 8450, 12437, 4103, 8448,
	4105, 12427, 4108, 8449, 4123, 8446, 4124, 8447, 4131, 8450,
	12438, 12392, 4099, 8488, 4107, 8444, 4109, 8441, 4112, 8436,
	4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423,
	4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122, 8431,
	4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428,
	4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 0, 4099,
	12426, 4105, 12428, 12447, 4107, 8444, 4109, 8441, 4112, 8436,
	4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423,
	4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122, 8431,
	4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428,
	4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 12425, 4099,
	8489, 0, 20481, 49664, 6241, 0, 16384, 28672, 4171, 8396,
	0, 12390, 12391, 20481, 8192, 59038, 103, 0, 0, 4106,
	8492, 4112, 8366, 4117, 8353, 4118, 8357, 0, 4106, 8493,
	0, 20481, 49664, 6241, 7936, 49152, 28675, 4171, 8396, 0,
	4103, 8448, 4105, 12427, 4108, 8449, 4123, 8446, 4124, 8447,
	4131, 8450, 12439, 12467, 12301, 4105, 12428, 4106, 8391, 12447,
	12379, 12380, 20481, 49664, 6241, 0, 16384, 28672, 4104, 8519,
	4171, 8396, 0, 12430, 12431, 4171, 8521, 0, 4171, 8522,
	0, 4151, 8524, 0, 20481, 49664, 6241, 0, 16384, 28672,
	4171, 8396, 12399, 12350, 12492, 12468, 12469, 12470, 4115, 8355,
	4116, 8354, 4117, 8353, 12471, 4115, 8355, 4116, 8354, 4117,
	8353, 12472, 20481, 0, 152, 0, 0, 0, 4117, 8353,
	4118, 8357, 12473, 20481, 0, 152, 0, 0, 0, 4117,
	8353, 4118, 8357, 12474, 20481, 0, 152, 6, 0, 0,
	4117, 8353, 4118, 8357, 12475, 20481, 0, 152, 6, 0,
	0, 4117, 8353, 4118, 8357, 12476, 20481, 0, 152, 6,
	0, 0, 4117, 8353, 4118, 8357, 12477, 20481, 0, 152,
	6, 0, 0, 4117, 8353, 4118, 8357, 12478, 20481, 0,
	34456, 7, 0, 0, 4117, 8353, 4118, 8357, 12479, 20481,
	0, 34456, 7, 0, 0, 4117, 8353, 4118, 8357, 12480,
	20481, 0, 59032, 7, 0, 0, 4117, 8353, 4118, 8357,
	12481, 20481, 0, 59032, 7, 0, 0, 4112, 8366, 4117,
	8353, 4118, 8357, 12482, 20481, 0, 59036, 7, 0, 0,
	4112, 8366, 4117, 8353, 4118, 8357, 12483, 20481, 0, 59038,
	7, 0, 0, 4112, 8366, 4117, 8353, 4118, 8357, 12484,
	20481, 0, 59038, 39, 0, 0, 4112, 8366, 4117, 8353,
	4118, 8357, 12485, 20481, 8192, 59038, 103, 0, 0, 4106,
	8528, 4112, 8366, 4117, 8353, 4118, 8357, 0, 4100, 12313,
	4107, 12313, 12491, 12308, 4100, 8529, 4105, 8277, 4110, 8278,
	4111, 8279, 4112, 8287, 4118, 8374, 4171, 8289, 4172, 8375,
	4173, 8291, 4174, 8292, 0, 12358, 12342, 12395, 12300, 4104,
	8531, 4105, 8483, 4117, 8484, 12453, 4105, 8483, 4117, 8484,
	12453, 4103, 8534, 12452, 12451, 12393, 12394, 4104, 8536, 4107,
	8444, 4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115,
	8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4120,
	8442, 4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127,
	8432, 4128, 8433, 4129, 8428, 4130, 8429, 4132, 8443, 4133,
	8439, 4134, 8440, 0, 12389, 4104, 8539, 0, 12402, 12403,
	12404, 4115, 8425, 4116, 8424, 4117, 8423, 12405, 4115, 8425,
	4116, 8424, 4117, 8423, 12406, 4115, 8425, 4116, 8424, 4117,
	8423, 4118, 8427, 4119, 8426, 12407, 4115, 8425, 4116, 8424,
	4117, 8423, 4118, 8427, 4119, 8426, 12408, 4115, 8425, 4116,
	8424, 4117, 8423, 4118, 8427, 4119, 8426, 4129, 8428, 4130,
	8429, 12409, 4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427,
	4119, 8426, 4129, 8428, 4130, 8429, 12410, 4115, 8425, 4116,
	8424, 4117, 8423, 4118, 8427, 4119, 8426, 4129, 8428, 4130,
	8429, 12411, 4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427,
	4119, 8426, 4129, 8428, 4130, 8429, 12412, 4115, 8425, 4116,
	8424, 4117, 8423, 4118, 8427, 4119, 8426, 4121, 8430, 4122,
	8431, 4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429, 12413,
	4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426,
	4121, 8430, 4122, 8431, 4127, 8432, 4128, 8433, 4129, 8428,
	4130, 8429, 12414, 4115, 8425, 4116, 8424, 4117, 8423, 4118,
	8427, 4119, 8426, 4121, 8430, 4122, 8431, 4125, 8434, 4126,
	8435, 4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429, 12415,
	4112, 8436, 4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427,
	4119, 8426, 4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435,
	4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429, 12416, 4112,
	8436, 4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423, 4118,
	8427, 4119, 8426, 4121, 8430, 4122, 8431, 4125, 8434, 4126,
	8435, 4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429, 12417,
	4112, 8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424,
	4117, 8423, 4118, 8427, 4119, 8426, 4121, 8430, 4122, 8431,
	4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428,
	4130, 8429, 12418, 4112, 8436, 4113, 8438, 4114, 8437, 4115,
	8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4121,
	8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128,
	8433, 4129, 8428, 4130, 8429, 4133, 8439, 12419, 4106, 8540,
	4107, 8444, 4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437,
	4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426,
	4120, 8442, 4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435,
	4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429, 4132, 8443,
	4133, 8439, 4134, 8440, 0, 4109, 8441, 4112, 8436, 4113,
	8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423, 4118,
	8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122, 8431, 4125,
	8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428, 4130,
	8429, 4132, 8443, 4133, 8439, 4134, 8440, 12421, 4109, 8441,
	4112, 8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424,
	4117, 8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430,
	4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433,
	4129, 8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440,
	12422, 4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115,
	8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4120,
	8442, 4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127,
	8432, 4128, 8433, 4129, 8428, 4130, 8429, 4132, 8443, 4133,
	8439, 4134, 8440, 12423, 4104, 8542, 4107, 8541, 0, 4109,
	8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116,
	8424, 4117, 8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121,
	8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128,
	8433, 4129, 8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134,
	8440, 12400, 12444, 4102, 8543, 4107, 8444, 4109, 8441, 4112,
	8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117,
	8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122,
	8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129,
	8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 0,
	12445, 12446, 4104, 8544, 4107, 8444, 4109, 8441, 4112, 8436,
	4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423,
	4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122, 8431,
	4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428,
	4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 0, 4105,
	8545, 0, 4099, 8546, 0, 4107, 8444, 4109, 8441, 4112,
	8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424, 4117,
	8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430, 4122,
	8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433, 4129,
	8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440, 12398,
	4104, 8547, 4107, 8444, 4109, 8441, 4112, 8436, 4113, 8438,
	4114, 8437, 4115, 8425, 4116, 8424, 4117, 8423, 4118, 8427,
	4119, 8426, 4120, 8442, 4121, 8430, 4122, 8431, 4125, 8434,
	4126, 8435, 4127, 8432, 4128, 8433, 4129, 8428, 4130, 8429,
	4132, 8443, 4133, 8439, 4134, 8440, 0, 12309, 12311, 12454,
	4103, 8534, 4104, 8549, 0, 4103, 8534, 12456, 4102, 8550,
	4105, 8277, 4110, 8278, 4111, 8279, 4118, 8280, 4172, 8281,
	0, 4103, 8448, 4105, 12427, 4108, 8449, 4123, 8446, 4124,
	8447, 4131, 8450, 12441, 12388, 12396, 20481, 512, 6144, 0,
	16384, 28672, 4171, 8396, 12440, 12443, 12442, 20481, 49664, 6241,
	0, 16384, 28672, 4171, 8396, 12399, 20481, 8192, 59038, 103,
	0, 0, 4112, 8366, 4117, 8353, 4118, 8357, 12486, 4105,
	8559, 12459, 12457, 20481, 8192, 59038, 103, 0, 0, 4102,
	8560, 4112, 8366, 4117, 8353, 4118, 8357, 0, 4147, 8561,
	12382, 4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115,
	8425, 4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4121,
	8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128,
	8433, 4129, 8428, 4130, 8429, 4133, 8439, 4134, 8440, 12420,
	4109, 8441, 4112, 8436, 4113, 8438, 4114, 8437, 4115, 8425,
	4116, 8424, 4117, 8423, 4118, 8427, 4119, 8426, 4120, 8442,
	4121, 8430, 4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432,
	4128, 8433, 4129, 8428, 4130, 8429, 4132, 8443, 4133, 8439,
	4134, 8440, 12401, 12384, 4104, 8562, 4107, 8444, 4109, 8441,
	4112, 8436, 4113, 8438, 4114, 8437, 4115, 8425, 4116, 8424,
	4117, 8423, 4118, 8427, 4119, 8426, 4120, 8442, 4121, 8430,
	4122, 8431, 4125, 8434, 4126, 8435, 4127, 8432, 4128, 8433,
	4129, 8428, 4130, 8429, 4132, 8443, 4133, 8439, 4134, 8440,
	0, 4099, 8563, 0, 12387, 4104, 8564, 0, 12458, 4099,
	8566, 0, 20481, 49664, 6241, 0, 16384, 28672, 4171, 8396,
	12399, 12455, 12383, 12386, 4104, 8568, 0, 12385, -1};

int pa[] {
	0, 79, 80, 95, 95, 102, 103, 104, 105, 106,
	107, 108, 109, 110, 111, 116, 119, 122, 123, 126,
	127, 128, 139, 140, 149, 156, 159, 168, 173, 174,
	179, 182, 189, 194, 195, 196, 197, 198, 203, 212,
	213, 214, 217, 218, 219, 230, 231, 232, 241, 248,
	255, 260, 269, 280, 285, 286, 287, 302, 311, 312,
	313, 314, 317, 330, 339, 342, 345, 346, 347, 348,
	353, 354, 355, 356, 363, 364, 364, 371, 374, 379,
	380, 385, 388, 395, 269, 269, 400, 400, 400, 411,
	412, 425, 426, 435, 436, 455, 458, 463, 464, 465,
	466, 467, 468, 469, 472, 485, 486, 487, 502, 511,
	330, 512, 513, 516, 535, 542, 543, 552, 553, 562,
	562, 562, 562, 562, 562, 562, 571, 582, 591, 594,
	595, 598, 601, 602, 603, 604, 269, 607, 610, 621,
	622, 623, 624, 625, 636, 637, 684, 687, 700, 703,
	712, 715, 718, 719, 728, 729, 730, 743, 758, 759,
	760, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	269, 269, 269, 269, 269, 269, 269, 269, 269, 269,
	761, 762, 767, 780, 785, 790, 791, 792, 805, 806,
	807, 808, 809, 810, 825, 826, 827, 828, 839, 703,
	840, 851, 852, 857, 860, 863, 910, 923, 936, 949,
	962, 975, 988, 1001, 1002, 1049, 1054, 1099, 1102, 1111,
	1112, 703, 1113, 1128, 1131, 1140, 1153, 1154, 1155, 1160,
	1161, 1102, 1102, 1102, 1102, 1102, 1102, 1102, 1102, 1102,
	1102, 1102, 1102, 1102, 1102, 1102, 1102, 1102, 1102, 1102,
	1102, 1102, 1102, 1162, 1173, 1174, 1102, 1175, 1178, 1102,
	1181, 1184, 1102, 1193, 1194, 1195, 1196, 1197, 1198, 1205,
	1212, 1223, 1234, 1245, 1256, 1267, 1278, 1289, 1300, 1311,
	1324, 1337, 1350, 1363, 1378, 1383, 1384, 1405, 1406, 1407,
	1408, 1409, 1416, 1421, 562, 1424, 1425, 1426, 1427, 1474,
	703, 703, 1475, 1478, 1479, 1480, 1481, 1488, 1495, 1506,
	1517, 1532, 1547, 1562, 1577, 1600, 1623, 1650, 1679, 1710,
	1743, 1778, 1825, 1868, 1911, 1954, 1959, 2002, 2003, 2050,
	2051, 2052, 2099, 2102, 2105, 2150, 269, 2197, 2198, 2199,
	2200, 2205, 2208, 2221, 703, 2234, 2235, 2236, 1102, 1102,
	2245, 2246, 703, 1102, 2247, 703, 2256, 2269, 2272, 2273,
	2288, 2291, 2330, 2373, 2374, 2421, 2424, 2425, 2428, 703,
	2429, 2432, 2441, 2442, 2443, 2444, 703, 2447, -1};


