#include <libint2.h>

extern "C" {
void OSVRRP1InBra_aB_s__0__pp__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roe[vi] * src3[((hsi*55+54)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*55+54)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 10 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->QC_z[vi] * src0[((hsi*66+65)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*78+77)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
fp11 = inteval->roe[vi] * src3[((hsi*55+53)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src2[((hsi*55+53)*1+lsi)*1] - fp11;
LIBINT2_REALTYPE fp12;
fp12 = 9 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src1[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->QC_z[vi] * src0[((hsi*66+64)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp8;
fp8 = fp13 + fp9;
target[((hsi*78+76)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp19;
fp19 = inteval->roe[vi] * src3[((hsi*55+52)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src2[((hsi*55+52)*1+lsi)*1] - fp19;
LIBINT2_REALTYPE fp20;
fp20 = 8 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp20 * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_z[vi] * src1[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->QC_z[vi] * src0[((hsi*66+63)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp16;
fp16 = fp21 + fp17;
target[((hsi*78+75)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp27;
fp27 = inteval->roe[vi] * src3[((hsi*55+51)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src2[((hsi*55+51)*1+lsi)*1] - fp27;
LIBINT2_REALTYPE fp28;
fp28 = 7 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src1[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->QC_z[vi] * src0[((hsi*66+62)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*78+74)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp35;
fp35 = inteval->roe[vi] * src3[((hsi*55+50)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src2[((hsi*55+50)*1+lsi)*1] - fp35;
LIBINT2_REALTYPE fp36;
fp36 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WQ_z[vi] * src1[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->QC_z[vi] * src0[((hsi*66+61)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp32;
fp32 = fp37 + fp33;
target[((hsi*78+73)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp43;
fp43 = inteval->roe[vi] * src3[((hsi*55+49)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src2[((hsi*55+49)*1+lsi)*1] - fp43;
LIBINT2_REALTYPE fp44;
fp44 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp44 * fp42;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WQ_z[vi] * src1[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = inteval->QC_z[vi] * src0[((hsi*66+60)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp47 + fp46;
LIBINT2_REALTYPE fp40;
fp40 = fp45 + fp41;
target[((hsi*78+72)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp51;
fp51 = inteval->roe[vi] * src3[((hsi*55+48)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src2[((hsi*55+48)*1+lsi)*1] - fp51;
LIBINT2_REALTYPE fp52;
fp52 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp52 * fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WQ_z[vi] * src1[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = inteval->QC_z[vi] * src0[((hsi*66+59)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp55 + fp54;
LIBINT2_REALTYPE fp48;
fp48 = fp53 + fp49;
target[((hsi*78+71)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp59;
fp59 = inteval->roe[vi] * src3[((hsi*55+47)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src2[((hsi*55+47)*1+lsi)*1] - fp59;
LIBINT2_REALTYPE fp60;
fp60 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp60 * fp58;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WQ_z[vi] * src1[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = inteval->QC_z[vi] * src0[((hsi*66+58)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp63 + fp62;
LIBINT2_REALTYPE fp56;
fp56 = fp61 + fp57;
target[((hsi*78+70)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp67;
fp67 = inteval->roe[vi] * src3[((hsi*55+46)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src2[((hsi*55+46)*1+lsi)*1] - fp67;
LIBINT2_REALTYPE fp68;
fp68 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp65;
fp65 = fp68 * fp66;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WQ_z[vi] * src1[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->QC_z[vi] * src0[((hsi*66+57)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp64;
fp64 = fp69 + fp65;
target[((hsi*78+69)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp75;
fp75 = inteval->roe[vi] * src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src2[((hsi*55+45)*1+lsi)*1] - fp75;
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2e[vi] * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WQ_z[vi] * src1[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = inteval->QC_z[vi] * src0[((hsi*66+56)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp78 + fp77;
LIBINT2_REALTYPE fp72;
fp72 = fp76 + fp73;
target[((hsi*78+68)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WQ_z[vi] * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->QC_z[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
target[((hsi*78+67)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp85;
fp85 = inteval->roe[vi] * src3[((hsi*55+45)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src2[((hsi*55+45)*1+lsi)*1] - fp85;
LIBINT2_REALTYPE fp86;
fp86 = 10 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp86 * fp84;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WQ_y[vi] * src1[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->QC_y[vi] * src0[((hsi*66+55)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp82;
fp82 = fp87 + fp83;
target[((hsi*78+66)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp93;
fp93 = inteval->roe[vi] * src3[((hsi*55+44)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src2[((hsi*55+44)*1+lsi)*1] - fp93;
LIBINT2_REALTYPE fp94;
fp94 = 9 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp91;
fp91 = fp94 * fp92;
LIBINT2_REALTYPE fp96;
fp96 = inteval->WQ_z[vi] * src1[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = inteval->QC_z[vi] * src0[((hsi*66+54)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = fp97 + fp96;
LIBINT2_REALTYPE fp90;
fp90 = fp95 + fp91;
target[((hsi*78+65)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp101;
fp101 = inteval->roe[vi] * src3[((hsi*55+43)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src2[((hsi*55+43)*1+lsi)*1] - fp101;
LIBINT2_REALTYPE fp102;
fp102 = 8 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp99;
fp99 = fp102 * fp100;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_z[vi] * src1[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = inteval->QC_z[vi] * src0[((hsi*66+53)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
LIBINT2_REALTYPE fp98;
fp98 = fp103 + fp99;
target[((hsi*78+64)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp109;
fp109 = inteval->roe[vi] * src3[((hsi*55+42)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src2[((hsi*55+42)*1+lsi)*1] - fp109;
LIBINT2_REALTYPE fp110;
fp110 = 7 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp107;
fp107 = fp110 * fp108;
LIBINT2_REALTYPE fp112;
fp112 = inteval->WQ_z[vi] * src1[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = inteval->QC_z[vi] * src0[((hsi*66+52)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = fp113 + fp112;
LIBINT2_REALTYPE fp106;
fp106 = fp111 + fp107;
target[((hsi*78+63)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp117;
fp117 = inteval->roe[vi] * src3[((hsi*55+41)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src2[((hsi*55+41)*1+lsi)*1] - fp117;
LIBINT2_REALTYPE fp118;
fp118 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp115;
fp115 = fp118 * fp116;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WQ_z[vi] * src1[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = inteval->QC_z[vi] * src0[((hsi*66+51)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = fp121 + fp120;
LIBINT2_REALTYPE fp114;
fp114 = fp119 + fp115;
target[((hsi*78+62)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp125;
fp125 = inteval->roe[vi] * src3[((hsi*55+40)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src2[((hsi*55+40)*1+lsi)*1] - fp125;
LIBINT2_REALTYPE fp126;
fp126 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp123;
fp123 = fp126 * fp124;
LIBINT2_REALTYPE fp128;
fp128 = inteval->WQ_z[vi] * src1[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = inteval->QC_z[vi] * src0[((hsi*66+50)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp122;
fp122 = fp127 + fp123;
target[((hsi*78+61)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp133;
fp133 = inteval->roe[vi] * src3[((hsi*55+39)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src2[((hsi*55+39)*1+lsi)*1] - fp133;
LIBINT2_REALTYPE fp134;
fp134 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp131;
fp131 = fp134 * fp132;
LIBINT2_REALTYPE fp136;
fp136 = inteval->WQ_z[vi] * src1[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = inteval->QC_z[vi] * src0[((hsi*66+49)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp130;
fp130 = fp135 + fp131;
target[((hsi*78+60)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp141;
fp141 = inteval->roe[vi] * src3[((hsi*55+38)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src2[((hsi*55+38)*1+lsi)*1] - fp141;
LIBINT2_REALTYPE fp142;
fp142 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp139;
fp139 = fp142 * fp140;
LIBINT2_REALTYPE fp144;
fp144 = inteval->WQ_z[vi] * src1[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = inteval->QC_z[vi] * src0[((hsi*66+48)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp145 + fp144;
LIBINT2_REALTYPE fp138;
fp138 = fp143 + fp139;
target[((hsi*78+59)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp149;
fp149 = inteval->roe[vi] * src3[((hsi*55+37)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src2[((hsi*55+37)*1+lsi)*1] - fp149;
LIBINT2_REALTYPE fp150;
fp150 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp147;
fp147 = fp150 * fp148;
LIBINT2_REALTYPE fp152;
fp152 = inteval->WQ_z[vi] * src1[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->QC_z[vi] * src0[((hsi*66+47)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp153 + fp152;
LIBINT2_REALTYPE fp146;
fp146 = fp151 + fp147;
target[((hsi*78+58)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp157;
fp157 = inteval->roe[vi] * src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src2[((hsi*55+36)*1+lsi)*1] - fp157;
LIBINT2_REALTYPE fp155;
fp155 = inteval->oo2e[vi] * fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->WQ_z[vi] * src1[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->QC_z[vi] * src0[((hsi*66+46)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
target[((hsi*78+57)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WQ_z[vi] * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->QC_z[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
target[((hsi*78+56)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp167;
fp167 = inteval->roe[vi] * src3[((hsi*55+36)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src2[((hsi*55+36)*1+lsi)*1] - fp167;
LIBINT2_REALTYPE fp168;
fp168 = 9 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp165;
fp165 = fp168 * fp166;
LIBINT2_REALTYPE fp170;
fp170 = inteval->WQ_y[vi] * src1[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->QC_y[vi] * src0[((hsi*66+45)*1+lsi)*1];
LIBINT2_REALTYPE fp169;
fp169 = fp171 + fp170;
LIBINT2_REALTYPE fp164;
fp164 = fp169 + fp165;
target[((hsi*78+55)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp175;
fp175 = inteval->roe[vi] * src3[((hsi*55+35)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src2[((hsi*55+35)*1+lsi)*1] - fp175;
LIBINT2_REALTYPE fp176;
fp176 = 8 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp173;
fp173 = fp176 * fp174;
LIBINT2_REALTYPE fp178;
fp178 = inteval->WQ_z[vi] * src1[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp179;
fp179 = inteval->QC_z[vi] * src0[((hsi*66+44)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp179 + fp178;
LIBINT2_REALTYPE fp172;
fp172 = fp177 + fp173;
target[((hsi*78+54)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp183;
fp183 = inteval->roe[vi] * src3[((hsi*55+34)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src2[((hsi*55+34)*1+lsi)*1] - fp183;
LIBINT2_REALTYPE fp184;
fp184 = 7 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp181;
fp181 = fp184 * fp182;
LIBINT2_REALTYPE fp186;
fp186 = inteval->WQ_z[vi] * src1[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp187;
fp187 = inteval->QC_z[vi] * src0[((hsi*66+43)*1+lsi)*1];
LIBINT2_REALTYPE fp185;
fp185 = fp187 + fp186;
LIBINT2_REALTYPE fp180;
fp180 = fp185 + fp181;
target[((hsi*78+53)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp191;
fp191 = inteval->roe[vi] * src3[((hsi*55+33)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src2[((hsi*55+33)*1+lsi)*1] - fp191;
LIBINT2_REALTYPE fp192;
fp192 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp189;
fp189 = fp192 * fp190;
LIBINT2_REALTYPE fp194;
fp194 = inteval->WQ_z[vi] * src1[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp195;
fp195 = inteval->QC_z[vi] * src0[((hsi*66+42)*1+lsi)*1];
LIBINT2_REALTYPE fp193;
fp193 = fp195 + fp194;
LIBINT2_REALTYPE fp188;
fp188 = fp193 + fp189;
target[((hsi*78+52)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp199;
fp199 = inteval->roe[vi] * src3[((hsi*55+32)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src2[((hsi*55+32)*1+lsi)*1] - fp199;
LIBINT2_REALTYPE fp200;
fp200 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp197;
fp197 = fp200 * fp198;
LIBINT2_REALTYPE fp202;
fp202 = inteval->WQ_z[vi] * src1[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp203;
fp203 = inteval->QC_z[vi] * src0[((hsi*66+41)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = fp203 + fp202;
LIBINT2_REALTYPE fp196;
fp196 = fp201 + fp197;
target[((hsi*78+51)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp207;
fp207 = inteval->roe[vi] * src3[((hsi*55+31)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src2[((hsi*55+31)*1+lsi)*1] - fp207;
LIBINT2_REALTYPE fp208;
fp208 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp205;
fp205 = fp208 * fp206;
LIBINT2_REALTYPE fp210;
fp210 = inteval->WQ_z[vi] * src1[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp211;
fp211 = inteval->QC_z[vi] * src0[((hsi*66+40)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = fp211 + fp210;
LIBINT2_REALTYPE fp204;
fp204 = fp209 + fp205;
target[((hsi*78+50)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp215;
fp215 = inteval->roe[vi] * src3[((hsi*55+30)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src2[((hsi*55+30)*1+lsi)*1] - fp215;
LIBINT2_REALTYPE fp216;
fp216 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp213;
fp213 = fp216 * fp214;
LIBINT2_REALTYPE fp218;
fp218 = inteval->WQ_z[vi] * src1[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->QC_z[vi] * src0[((hsi*66+39)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp219 + fp218;
LIBINT2_REALTYPE fp212;
fp212 = fp217 + fp213;
target[((hsi*78+49)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp223;
fp223 = inteval->roe[vi] * src3[((hsi*55+29)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src2[((hsi*55+29)*1+lsi)*1] - fp223;
LIBINT2_REALTYPE fp224;
fp224 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp221;
fp221 = fp224 * fp222;
LIBINT2_REALTYPE fp226;
fp226 = inteval->WQ_z[vi] * src1[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = inteval->QC_z[vi] * src0[((hsi*66+38)*1+lsi)*1];
LIBINT2_REALTYPE fp225;
fp225 = fp227 + fp226;
LIBINT2_REALTYPE fp220;
fp220 = fp225 + fp221;
target[((hsi*78+48)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp231;
fp231 = inteval->roe[vi] * src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = src2[((hsi*55+28)*1+lsi)*1] - fp231;
LIBINT2_REALTYPE fp229;
fp229 = inteval->oo2e[vi] * fp230;
LIBINT2_REALTYPE fp233;
fp233 = inteval->WQ_z[vi] * src1[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp234;
fp234 = inteval->QC_z[vi] * src0[((hsi*66+37)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = fp234 + fp233;
LIBINT2_REALTYPE fp228;
fp228 = fp232 + fp229;
target[((hsi*78+47)*1+lsi)*1] = fp228;
LIBINT2_REALTYPE fp236;
fp236 = inteval->WQ_z[vi] * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp237;
fp237 = inteval->QC_z[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = fp237 + fp236;
target[((hsi*78+46)*1+lsi)*1] = fp235;
LIBINT2_REALTYPE fp241;
fp241 = inteval->roe[vi] * src3[((hsi*55+28)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = src2[((hsi*55+28)*1+lsi)*1] - fp241;
LIBINT2_REALTYPE fp242;
fp242 = 8 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp239;
fp239 = fp242 * fp240;
LIBINT2_REALTYPE fp244;
fp244 = inteval->WQ_y[vi] * src1[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp245;
fp245 = inteval->QC_y[vi] * src0[((hsi*66+36)*1+lsi)*1];
LIBINT2_REALTYPE fp243;
fp243 = fp245 + fp244;
LIBINT2_REALTYPE fp238;
fp238 = fp243 + fp239;
target[((hsi*78+45)*1+lsi)*1] = fp238;
LIBINT2_REALTYPE fp249;
fp249 = inteval->roe[vi] * src3[((hsi*55+27)*1+lsi)*1];
LIBINT2_REALTYPE fp248;
fp248 = src2[((hsi*55+27)*1+lsi)*1] - fp249;
LIBINT2_REALTYPE fp250;
fp250 = 7 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp247;
fp247 = fp250 * fp248;
LIBINT2_REALTYPE fp252;
fp252 = inteval->WQ_z[vi] * src1[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp253;
fp253 = inteval->QC_z[vi] * src0[((hsi*66+35)*1+lsi)*1];
LIBINT2_REALTYPE fp251;
fp251 = fp253 + fp252;
LIBINT2_REALTYPE fp246;
fp246 = fp251 + fp247;
target[((hsi*78+44)*1+lsi)*1] = fp246;
LIBINT2_REALTYPE fp257;
fp257 = inteval->roe[vi] * src3[((hsi*55+26)*1+lsi)*1];
LIBINT2_REALTYPE fp256;
fp256 = src2[((hsi*55+26)*1+lsi)*1] - fp257;
LIBINT2_REALTYPE fp258;
fp258 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp255;
fp255 = fp258 * fp256;
LIBINT2_REALTYPE fp260;
fp260 = inteval->WQ_z[vi] * src1[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp261;
fp261 = inteval->QC_z[vi] * src0[((hsi*66+34)*1+lsi)*1];
LIBINT2_REALTYPE fp259;
fp259 = fp261 + fp260;
LIBINT2_REALTYPE fp254;
fp254 = fp259 + fp255;
target[((hsi*78+43)*1+lsi)*1] = fp254;
LIBINT2_REALTYPE fp265;
fp265 = inteval->roe[vi] * src3[((hsi*55+25)*1+lsi)*1];
LIBINT2_REALTYPE fp264;
fp264 = src2[((hsi*55+25)*1+lsi)*1] - fp265;
LIBINT2_REALTYPE fp266;
fp266 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp263;
fp263 = fp266 * fp264;
LIBINT2_REALTYPE fp268;
fp268 = inteval->WQ_z[vi] * src1[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp269;
fp269 = inteval->QC_z[vi] * src0[((hsi*66+33)*1+lsi)*1];
LIBINT2_REALTYPE fp267;
fp267 = fp269 + fp268;
LIBINT2_REALTYPE fp262;
fp262 = fp267 + fp263;
target[((hsi*78+42)*1+lsi)*1] = fp262;
LIBINT2_REALTYPE fp273;
fp273 = inteval->roe[vi] * src3[((hsi*55+24)*1+lsi)*1];
LIBINT2_REALTYPE fp272;
fp272 = src2[((hsi*55+24)*1+lsi)*1] - fp273;
LIBINT2_REALTYPE fp274;
fp274 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp271;
fp271 = fp274 * fp272;
LIBINT2_REALTYPE fp276;
fp276 = inteval->WQ_z[vi] * src1[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp277;
fp277 = inteval->QC_z[vi] * src0[((hsi*66+32)*1+lsi)*1];
LIBINT2_REALTYPE fp275;
fp275 = fp277 + fp276;
LIBINT2_REALTYPE fp270;
fp270 = fp275 + fp271;
target[((hsi*78+41)*1+lsi)*1] = fp270;
LIBINT2_REALTYPE fp281;
fp281 = inteval->roe[vi] * src3[((hsi*55+23)*1+lsi)*1];
LIBINT2_REALTYPE fp280;
fp280 = src2[((hsi*55+23)*1+lsi)*1] - fp281;
LIBINT2_REALTYPE fp282;
fp282 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp279;
fp279 = fp282 * fp280;
LIBINT2_REALTYPE fp284;
fp284 = inteval->WQ_z[vi] * src1[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp285;
fp285 = inteval->QC_z[vi] * src0[((hsi*66+31)*1+lsi)*1];
LIBINT2_REALTYPE fp283;
fp283 = fp285 + fp284;
LIBINT2_REALTYPE fp278;
fp278 = fp283 + fp279;
target[((hsi*78+40)*1+lsi)*1] = fp278;
LIBINT2_REALTYPE fp289;
fp289 = inteval->roe[vi] * src3[((hsi*55+22)*1+lsi)*1];
LIBINT2_REALTYPE fp288;
fp288 = src2[((hsi*55+22)*1+lsi)*1] - fp289;
LIBINT2_REALTYPE fp290;
fp290 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp287;
fp287 = fp290 * fp288;
LIBINT2_REALTYPE fp292;
fp292 = inteval->WQ_z[vi] * src1[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp293;
fp293 = inteval->QC_z[vi] * src0[((hsi*66+30)*1+lsi)*1];
LIBINT2_REALTYPE fp291;
fp291 = fp293 + fp292;
LIBINT2_REALTYPE fp286;
fp286 = fp291 + fp287;
target[((hsi*78+39)*1+lsi)*1] = fp286;
LIBINT2_REALTYPE fp297;
fp297 = inteval->roe[vi] * src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp296;
fp296 = src2[((hsi*55+21)*1+lsi)*1] - fp297;
LIBINT2_REALTYPE fp295;
fp295 = inteval->oo2e[vi] * fp296;
LIBINT2_REALTYPE fp299;
fp299 = inteval->WQ_z[vi] * src1[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp300;
fp300 = inteval->QC_z[vi] * src0[((hsi*66+29)*1+lsi)*1];
LIBINT2_REALTYPE fp298;
fp298 = fp300 + fp299;
LIBINT2_REALTYPE fp294;
fp294 = fp298 + fp295;
target[((hsi*78+38)*1+lsi)*1] = fp294;
LIBINT2_REALTYPE fp302;
fp302 = inteval->WQ_z[vi] * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp303;
fp303 = inteval->QC_z[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp301;
fp301 = fp303 + fp302;
target[((hsi*78+37)*1+lsi)*1] = fp301;
LIBINT2_REALTYPE fp307;
fp307 = inteval->roe[vi] * src3[((hsi*55+21)*1+lsi)*1];
LIBINT2_REALTYPE fp306;
fp306 = src2[((hsi*55+21)*1+lsi)*1] - fp307;
LIBINT2_REALTYPE fp308;
fp308 = 7 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp305;
fp305 = fp308 * fp306;
LIBINT2_REALTYPE fp310;
fp310 = inteval->WQ_y[vi] * src1[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp311;
fp311 = inteval->QC_y[vi] * src0[((hsi*66+28)*1+lsi)*1];
LIBINT2_REALTYPE fp309;
fp309 = fp311 + fp310;
LIBINT2_REALTYPE fp304;
fp304 = fp309 + fp305;
target[((hsi*78+36)*1+lsi)*1] = fp304;
LIBINT2_REALTYPE fp315;
fp315 = inteval->roe[vi] * src3[((hsi*55+20)*1+lsi)*1];
LIBINT2_REALTYPE fp314;
fp314 = src2[((hsi*55+20)*1+lsi)*1] - fp315;
LIBINT2_REALTYPE fp316;
fp316 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp313;
fp313 = fp316 * fp314;
LIBINT2_REALTYPE fp318;
fp318 = inteval->WQ_z[vi] * src1[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp319;
fp319 = inteval->QC_z[vi] * src0[((hsi*66+27)*1+lsi)*1];
LIBINT2_REALTYPE fp317;
fp317 = fp319 + fp318;
LIBINT2_REALTYPE fp312;
fp312 = fp317 + fp313;
target[((hsi*78+35)*1+lsi)*1] = fp312;
LIBINT2_REALTYPE fp323;
fp323 = inteval->roe[vi] * src3[((hsi*55+19)*1+lsi)*1];
LIBINT2_REALTYPE fp322;
fp322 = src2[((hsi*55+19)*1+lsi)*1] - fp323;
LIBINT2_REALTYPE fp324;
fp324 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp321;
fp321 = fp324 * fp322;
LIBINT2_REALTYPE fp326;
fp326 = inteval->WQ_z[vi] * src1[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp327;
fp327 = inteval->QC_z[vi] * src0[((hsi*66+26)*1+lsi)*1];
LIBINT2_REALTYPE fp325;
fp325 = fp327 + fp326;
LIBINT2_REALTYPE fp320;
fp320 = fp325 + fp321;
target[((hsi*78+34)*1+lsi)*1] = fp320;
LIBINT2_REALTYPE fp331;
fp331 = inteval->roe[vi] * src3[((hsi*55+18)*1+lsi)*1];
LIBINT2_REALTYPE fp330;
fp330 = src2[((hsi*55+18)*1+lsi)*1] - fp331;
LIBINT2_REALTYPE fp332;
fp332 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp329;
fp329 = fp332 * fp330;
LIBINT2_REALTYPE fp334;
fp334 = inteval->WQ_z[vi] * src1[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp335;
fp335 = inteval->QC_z[vi] * src0[((hsi*66+25)*1+lsi)*1];
LIBINT2_REALTYPE fp333;
fp333 = fp335 + fp334;
LIBINT2_REALTYPE fp328;
fp328 = fp333 + fp329;
target[((hsi*78+33)*1+lsi)*1] = fp328;
LIBINT2_REALTYPE fp339;
fp339 = inteval->roe[vi] * src3[((hsi*55+17)*1+lsi)*1];
LIBINT2_REALTYPE fp338;
fp338 = src2[((hsi*55+17)*1+lsi)*1] - fp339;
LIBINT2_REALTYPE fp340;
fp340 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp337;
fp337 = fp340 * fp338;
LIBINT2_REALTYPE fp342;
fp342 = inteval->WQ_z[vi] * src1[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp343;
fp343 = inteval->QC_z[vi] * src0[((hsi*66+24)*1+lsi)*1];
LIBINT2_REALTYPE fp341;
fp341 = fp343 + fp342;
LIBINT2_REALTYPE fp336;
fp336 = fp341 + fp337;
target[((hsi*78+32)*1+lsi)*1] = fp336;
LIBINT2_REALTYPE fp347;
fp347 = inteval->roe[vi] * src3[((hsi*55+16)*1+lsi)*1];
LIBINT2_REALTYPE fp346;
fp346 = src2[((hsi*55+16)*1+lsi)*1] - fp347;
LIBINT2_REALTYPE fp348;
fp348 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp345;
fp345 = fp348 * fp346;
LIBINT2_REALTYPE fp350;
fp350 = inteval->WQ_z[vi] * src1[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp351;
fp351 = inteval->QC_z[vi] * src0[((hsi*66+23)*1+lsi)*1];
LIBINT2_REALTYPE fp349;
fp349 = fp351 + fp350;
LIBINT2_REALTYPE fp344;
fp344 = fp349 + fp345;
target[((hsi*78+31)*1+lsi)*1] = fp344;
LIBINT2_REALTYPE fp355;
fp355 = inteval->roe[vi] * src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp354;
fp354 = src2[((hsi*55+15)*1+lsi)*1] - fp355;
LIBINT2_REALTYPE fp353;
fp353 = inteval->oo2e[vi] * fp354;
LIBINT2_REALTYPE fp357;
fp357 = inteval->WQ_z[vi] * src1[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp358;
fp358 = inteval->QC_z[vi] * src0[((hsi*66+22)*1+lsi)*1];
LIBINT2_REALTYPE fp356;
fp356 = fp358 + fp357;
LIBINT2_REALTYPE fp352;
fp352 = fp356 + fp353;
target[((hsi*78+30)*1+lsi)*1] = fp352;
LIBINT2_REALTYPE fp360;
fp360 = inteval->WQ_z[vi] * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp361;
fp361 = inteval->QC_z[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp359;
fp359 = fp361 + fp360;
target[((hsi*78+29)*1+lsi)*1] = fp359;
LIBINT2_REALTYPE fp365;
fp365 = inteval->roe[vi] * src3[((hsi*55+15)*1+lsi)*1];
LIBINT2_REALTYPE fp364;
fp364 = src2[((hsi*55+15)*1+lsi)*1] - fp365;
LIBINT2_REALTYPE fp366;
fp366 = 6 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp363;
fp363 = fp366 * fp364;
LIBINT2_REALTYPE fp368;
fp368 = inteval->WQ_y[vi] * src1[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp369;
fp369 = inteval->QC_y[vi] * src0[((hsi*66+21)*1+lsi)*1];
LIBINT2_REALTYPE fp367;
fp367 = fp369 + fp368;
LIBINT2_REALTYPE fp362;
fp362 = fp367 + fp363;
target[((hsi*78+28)*1+lsi)*1] = fp362;
LIBINT2_REALTYPE fp373;
fp373 = inteval->roe[vi] * src3[((hsi*55+14)*1+lsi)*1];
LIBINT2_REALTYPE fp372;
fp372 = src2[((hsi*55+14)*1+lsi)*1] - fp373;
LIBINT2_REALTYPE fp374;
fp374 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp371;
fp371 = fp374 * fp372;
LIBINT2_REALTYPE fp376;
fp376 = inteval->WQ_z[vi] * src1[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp377;
fp377 = inteval->QC_z[vi] * src0[((hsi*66+20)*1+lsi)*1];
LIBINT2_REALTYPE fp375;
fp375 = fp377 + fp376;
LIBINT2_REALTYPE fp370;
fp370 = fp375 + fp371;
target[((hsi*78+27)*1+lsi)*1] = fp370;
LIBINT2_REALTYPE fp381;
fp381 = inteval->roe[vi] * src3[((hsi*55+13)*1+lsi)*1];
LIBINT2_REALTYPE fp380;
fp380 = src2[((hsi*55+13)*1+lsi)*1] - fp381;
LIBINT2_REALTYPE fp382;
fp382 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp379;
fp379 = fp382 * fp380;
LIBINT2_REALTYPE fp384;
fp384 = inteval->WQ_z[vi] * src1[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp385;
fp385 = inteval->QC_z[vi] * src0[((hsi*66+19)*1+lsi)*1];
LIBINT2_REALTYPE fp383;
fp383 = fp385 + fp384;
LIBINT2_REALTYPE fp378;
fp378 = fp383 + fp379;
target[((hsi*78+26)*1+lsi)*1] = fp378;
LIBINT2_REALTYPE fp389;
fp389 = inteval->roe[vi] * src3[((hsi*55+12)*1+lsi)*1];
LIBINT2_REALTYPE fp388;
fp388 = src2[((hsi*55+12)*1+lsi)*1] - fp389;
LIBINT2_REALTYPE fp390;
fp390 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp387;
fp387 = fp390 * fp388;
LIBINT2_REALTYPE fp392;
fp392 = inteval->WQ_z[vi] * src1[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp393;
fp393 = inteval->QC_z[vi] * src0[((hsi*66+18)*1+lsi)*1];
LIBINT2_REALTYPE fp391;
fp391 = fp393 + fp392;
LIBINT2_REALTYPE fp386;
fp386 = fp391 + fp387;
target[((hsi*78+25)*1+lsi)*1] = fp386;
LIBINT2_REALTYPE fp397;
fp397 = inteval->roe[vi] * src3[((hsi*55+11)*1+lsi)*1];
LIBINT2_REALTYPE fp396;
fp396 = src2[((hsi*55+11)*1+lsi)*1] - fp397;
LIBINT2_REALTYPE fp398;
fp398 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp395;
fp395 = fp398 * fp396;
LIBINT2_REALTYPE fp400;
fp400 = inteval->WQ_z[vi] * src1[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp401;
fp401 = inteval->QC_z[vi] * src0[((hsi*66+17)*1+lsi)*1];
LIBINT2_REALTYPE fp399;
fp399 = fp401 + fp400;
LIBINT2_REALTYPE fp394;
fp394 = fp399 + fp395;
target[((hsi*78+24)*1+lsi)*1] = fp394;
LIBINT2_REALTYPE fp405;
fp405 = inteval->roe[vi] * src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp404;
fp404 = src2[((hsi*55+10)*1+lsi)*1] - fp405;
LIBINT2_REALTYPE fp403;
fp403 = inteval->oo2e[vi] * fp404;
LIBINT2_REALTYPE fp407;
fp407 = inteval->WQ_z[vi] * src1[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp408;
fp408 = inteval->QC_z[vi] * src0[((hsi*66+16)*1+lsi)*1];
LIBINT2_REALTYPE fp406;
fp406 = fp408 + fp407;
LIBINT2_REALTYPE fp402;
fp402 = fp406 + fp403;
target[((hsi*78+23)*1+lsi)*1] = fp402;
LIBINT2_REALTYPE fp410;
fp410 = inteval->WQ_z[vi] * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp411;
fp411 = inteval->QC_z[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp409;
fp409 = fp411 + fp410;
target[((hsi*78+22)*1+lsi)*1] = fp409;
LIBINT2_REALTYPE fp415;
fp415 = inteval->roe[vi] * src3[((hsi*55+10)*1+lsi)*1];
LIBINT2_REALTYPE fp414;
fp414 = src2[((hsi*55+10)*1+lsi)*1] - fp415;
LIBINT2_REALTYPE fp416;
fp416 = 5 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp413;
fp413 = fp416 * fp414;
LIBINT2_REALTYPE fp418;
fp418 = inteval->WQ_y[vi] * src1[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp419;
fp419 = inteval->QC_y[vi] * src0[((hsi*66+15)*1+lsi)*1];
LIBINT2_REALTYPE fp417;
fp417 = fp419 + fp418;
LIBINT2_REALTYPE fp412;
fp412 = fp417 + fp413;
target[((hsi*78+21)*1+lsi)*1] = fp412;
LIBINT2_REALTYPE fp423;
fp423 = inteval->roe[vi] * src3[((hsi*55+9)*1+lsi)*1];
LIBINT2_REALTYPE fp422;
fp422 = src2[((hsi*55+9)*1+lsi)*1] - fp423;
LIBINT2_REALTYPE fp424;
fp424 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp421;
fp421 = fp424 * fp422;
LIBINT2_REALTYPE fp426;
fp426 = inteval->WQ_z[vi] * src1[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp427;
fp427 = inteval->QC_z[vi] * src0[((hsi*66+14)*1+lsi)*1];
LIBINT2_REALTYPE fp425;
fp425 = fp427 + fp426;
LIBINT2_REALTYPE fp420;
fp420 = fp425 + fp421;
target[((hsi*78+20)*1+lsi)*1] = fp420;
LIBINT2_REALTYPE fp431;
fp431 = inteval->roe[vi] * src3[((hsi*55+8)*1+lsi)*1];
LIBINT2_REALTYPE fp430;
fp430 = src2[((hsi*55+8)*1+lsi)*1] - fp431;
LIBINT2_REALTYPE fp432;
fp432 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp429;
fp429 = fp432 * fp430;
LIBINT2_REALTYPE fp434;
fp434 = inteval->WQ_z[vi] * src1[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp435;
fp435 = inteval->QC_z[vi] * src0[((hsi*66+13)*1+lsi)*1];
LIBINT2_REALTYPE fp433;
fp433 = fp435 + fp434;
LIBINT2_REALTYPE fp428;
fp428 = fp433 + fp429;
target[((hsi*78+19)*1+lsi)*1] = fp428;
LIBINT2_REALTYPE fp439;
fp439 = inteval->roe[vi] * src3[((hsi*55+7)*1+lsi)*1];
LIBINT2_REALTYPE fp438;
fp438 = src2[((hsi*55+7)*1+lsi)*1] - fp439;
LIBINT2_REALTYPE fp440;
fp440 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp437;
fp437 = fp440 * fp438;
LIBINT2_REALTYPE fp442;
fp442 = inteval->WQ_z[vi] * src1[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp443;
fp443 = inteval->QC_z[vi] * src0[((hsi*66+12)*1+lsi)*1];
LIBINT2_REALTYPE fp441;
fp441 = fp443 + fp442;
LIBINT2_REALTYPE fp436;
fp436 = fp441 + fp437;
target[((hsi*78+18)*1+lsi)*1] = fp436;
LIBINT2_REALTYPE fp447;
fp447 = inteval->roe[vi] * src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp446;
fp446 = src2[((hsi*55+6)*1+lsi)*1] - fp447;
LIBINT2_REALTYPE fp445;
fp445 = inteval->oo2e[vi] * fp446;
LIBINT2_REALTYPE fp449;
fp449 = inteval->WQ_z[vi] * src1[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp450;
fp450 = inteval->QC_z[vi] * src0[((hsi*66+11)*1+lsi)*1];
LIBINT2_REALTYPE fp448;
fp448 = fp450 + fp449;
LIBINT2_REALTYPE fp444;
fp444 = fp448 + fp445;
target[((hsi*78+17)*1+lsi)*1] = fp444;
LIBINT2_REALTYPE fp452;
fp452 = inteval->WQ_z[vi] * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp453;
fp453 = inteval->QC_z[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp451;
fp451 = fp453 + fp452;
target[((hsi*78+16)*1+lsi)*1] = fp451;
LIBINT2_REALTYPE fp457;
fp457 = inteval->roe[vi] * src3[((hsi*55+6)*1+lsi)*1];
LIBINT2_REALTYPE fp456;
fp456 = src2[((hsi*55+6)*1+lsi)*1] - fp457;
LIBINT2_REALTYPE fp458;
fp458 = 4 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp455;
fp455 = fp458 * fp456;
LIBINT2_REALTYPE fp460;
fp460 = inteval->WQ_y[vi] * src1[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp461;
fp461 = inteval->QC_y[vi] * src0[((hsi*66+10)*1+lsi)*1];
LIBINT2_REALTYPE fp459;
fp459 = fp461 + fp460;
LIBINT2_REALTYPE fp454;
fp454 = fp459 + fp455;
target[((hsi*78+15)*1+lsi)*1] = fp454;
LIBINT2_REALTYPE fp465;
fp465 = inteval->roe[vi] * src3[((hsi*55+5)*1+lsi)*1];
LIBINT2_REALTYPE fp464;
fp464 = src2[((hsi*55+5)*1+lsi)*1] - fp465;
LIBINT2_REALTYPE fp466;
fp466 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp463;
fp463 = fp466 * fp464;
LIBINT2_REALTYPE fp468;
fp468 = inteval->WQ_z[vi] * src1[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp469;
fp469 = inteval->QC_z[vi] * src0[((hsi*66+9)*1+lsi)*1];
LIBINT2_REALTYPE fp467;
fp467 = fp469 + fp468;
LIBINT2_REALTYPE fp462;
fp462 = fp467 + fp463;
target[((hsi*78+14)*1+lsi)*1] = fp462;
LIBINT2_REALTYPE fp473;
fp473 = inteval->roe[vi] * src3[((hsi*55+4)*1+lsi)*1];
LIBINT2_REALTYPE fp472;
fp472 = src2[((hsi*55+4)*1+lsi)*1] - fp473;
LIBINT2_REALTYPE fp474;
fp474 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp471;
fp471 = fp474 * fp472;
LIBINT2_REALTYPE fp476;
fp476 = inteval->WQ_z[vi] * src1[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp477;
fp477 = inteval->QC_z[vi] * src0[((hsi*66+8)*1+lsi)*1];
LIBINT2_REALTYPE fp475;
fp475 = fp477 + fp476;
LIBINT2_REALTYPE fp470;
fp470 = fp475 + fp471;
target[((hsi*78+13)*1+lsi)*1] = fp470;
LIBINT2_REALTYPE fp481;
fp481 = inteval->roe[vi] * src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp480;
fp480 = src2[((hsi*55+3)*1+lsi)*1] - fp481;
LIBINT2_REALTYPE fp479;
fp479 = inteval->oo2e[vi] * fp480;
LIBINT2_REALTYPE fp483;
fp483 = inteval->WQ_z[vi] * src1[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp484;
fp484 = inteval->QC_z[vi] * src0[((hsi*66+7)*1+lsi)*1];
LIBINT2_REALTYPE fp482;
fp482 = fp484 + fp483;
LIBINT2_REALTYPE fp478;
fp478 = fp482 + fp479;
target[((hsi*78+12)*1+lsi)*1] = fp478;
LIBINT2_REALTYPE fp486;
fp486 = inteval->WQ_z[vi] * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp487;
fp487 = inteval->QC_z[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp485;
fp485 = fp487 + fp486;
target[((hsi*78+11)*1+lsi)*1] = fp485;
LIBINT2_REALTYPE fp491;
fp491 = inteval->roe[vi] * src3[((hsi*55+3)*1+lsi)*1];
LIBINT2_REALTYPE fp490;
fp490 = src2[((hsi*55+3)*1+lsi)*1] - fp491;
LIBINT2_REALTYPE fp492;
fp492 = 3 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp489;
fp489 = fp492 * fp490;
LIBINT2_REALTYPE fp494;
fp494 = inteval->WQ_y[vi] * src1[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp495;
fp495 = inteval->QC_y[vi] * src0[((hsi*66+6)*1+lsi)*1];
LIBINT2_REALTYPE fp493;
fp493 = fp495 + fp494;
LIBINT2_REALTYPE fp488;
fp488 = fp493 + fp489;
target[((hsi*78+10)*1+lsi)*1] = fp488;
LIBINT2_REALTYPE fp499;
fp499 = inteval->roe[vi] * src3[((hsi*55+2)*1+lsi)*1];
LIBINT2_REALTYPE fp498;
fp498 = src2[((hsi*55+2)*1+lsi)*1] - fp499;
LIBINT2_REALTYPE fp500;
fp500 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp497;
fp497 = fp500 * fp498;
LIBINT2_REALTYPE fp502;
fp502 = inteval->WQ_z[vi] * src1[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp503;
fp503 = inteval->QC_z[vi] * src0[((hsi*66+5)*1+lsi)*1];
LIBINT2_REALTYPE fp501;
fp501 = fp503 + fp502;
LIBINT2_REALTYPE fp496;
fp496 = fp501 + fp497;
target[((hsi*78+9)*1+lsi)*1] = fp496;
LIBINT2_REALTYPE fp507;
fp507 = inteval->roe[vi] * src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp506;
fp506 = src2[((hsi*55+1)*1+lsi)*1] - fp507;
LIBINT2_REALTYPE fp505;
fp505 = inteval->oo2e[vi] * fp506;
LIBINT2_REALTYPE fp509;
fp509 = inteval->WQ_z[vi] * src1[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp510;
fp510 = inteval->QC_z[vi] * src0[((hsi*66+4)*1+lsi)*1];
LIBINT2_REALTYPE fp508;
fp508 = fp510 + fp509;
LIBINT2_REALTYPE fp504;
fp504 = fp508 + fp505;
target[((hsi*78+8)*1+lsi)*1] = fp504;
LIBINT2_REALTYPE fp512;
fp512 = inteval->WQ_z[vi] * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp513;
fp513 = inteval->QC_z[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp511;
fp511 = fp513 + fp512;
target[((hsi*78+7)*1+lsi)*1] = fp511;
LIBINT2_REALTYPE fp517;
fp517 = inteval->roe[vi] * src3[((hsi*55+1)*1+lsi)*1];
LIBINT2_REALTYPE fp516;
fp516 = src2[((hsi*55+1)*1+lsi)*1] - fp517;
LIBINT2_REALTYPE fp518;
fp518 = 2 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp515;
fp515 = fp518 * fp516;
LIBINT2_REALTYPE fp520;
fp520 = inteval->WQ_y[vi] * src1[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp521;
fp521 = inteval->QC_y[vi] * src0[((hsi*66+3)*1+lsi)*1];
LIBINT2_REALTYPE fp519;
fp519 = fp521 + fp520;
LIBINT2_REALTYPE fp514;
fp514 = fp519 + fp515;
target[((hsi*78+6)*1+lsi)*1] = fp514;
LIBINT2_REALTYPE fp525;
fp525 = inteval->roe[vi] * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp524;
fp524 = src2[((hsi*55+0)*1+lsi)*1] - fp525;
LIBINT2_REALTYPE fp523;
fp523 = inteval->oo2e[vi] * fp524;
LIBINT2_REALTYPE fp527;
fp527 = inteval->WQ_z[vi] * src1[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp528;
fp528 = inteval->QC_z[vi] * src0[((hsi*66+2)*1+lsi)*1];
LIBINT2_REALTYPE fp526;
fp526 = fp528 + fp527;
LIBINT2_REALTYPE fp522;
fp522 = fp526 + fp523;
target[((hsi*78+5)*1+lsi)*1] = fp522;
LIBINT2_REALTYPE fp530;
fp530 = inteval->WQ_z[vi] * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp531;
fp531 = inteval->QC_z[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp529;
fp529 = fp531 + fp530;
target[((hsi*78+4)*1+lsi)*1] = fp529;
LIBINT2_REALTYPE fp535;
fp535 = inteval->roe[vi] * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp534;
fp534 = src2[((hsi*55+0)*1+lsi)*1] - fp535;
LIBINT2_REALTYPE fp533;
fp533 = inteval->oo2e[vi] * fp534;
LIBINT2_REALTYPE fp537;
fp537 = inteval->WQ_y[vi] * src1[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp538;
fp538 = inteval->QC_y[vi] * src0[((hsi*66+1)*1+lsi)*1];
LIBINT2_REALTYPE fp536;
fp536 = fp538 + fp537;
LIBINT2_REALTYPE fp532;
fp532 = fp536 + fp533;
target[((hsi*78+3)*1+lsi)*1] = fp532;
LIBINT2_REALTYPE fp540;
fp540 = inteval->WQ_z[vi] * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp541;
fp541 = inteval->QC_z[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp539;
fp539 = fp541 + fp540;
target[((hsi*78+2)*1+lsi)*1] = fp539;
LIBINT2_REALTYPE fp543;
fp543 = inteval->WQ_y[vi] * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp544;
fp544 = inteval->QC_y[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp542;
fp542 = fp544 + fp543;
target[((hsi*78+1)*1+lsi)*1] = fp542;
LIBINT2_REALTYPE fp548;
fp548 = inteval->roe[vi] * src3[((hsi*55+0)*1+lsi)*1];
LIBINT2_REALTYPE fp547;
fp547 = src2[((hsi*55+0)*1+lsi)*1] - fp548;
LIBINT2_REALTYPE fp549;
fp549 = 10 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp546;
fp546 = fp549 * fp547;
LIBINT2_REALTYPE fp551;
fp551 = inteval->WQ_x[vi] * src1[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp552;
fp552 = inteval->QC_x[vi] * src0[((hsi*66+0)*1+lsi)*1];
LIBINT2_REALTYPE fp550;
fp550 = fp552 + fp551;
LIBINT2_REALTYPE fp545;
fp545 = fp550 + fp546;
target[((hsi*78+0)*1+lsi)*1] = fp545;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 553 */
}

};