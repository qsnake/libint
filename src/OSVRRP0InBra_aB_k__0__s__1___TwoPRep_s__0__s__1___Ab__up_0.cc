#include <libint2.h>

extern "C" {
void OSVRRP0InBra_aB_k__0__s__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src3[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*21+20)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 6 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*36+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
fp11 = inteval->roz[vi] * src3[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src2[((hsi*21+19)*1+lsi)*1] - fp11;
LIBINT2_REALTYPE fp12;
fp12 = 5 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
LIBINT2_REALTYPE fp8;
fp8 = fp13 + fp9;
target[((hsi*36+34)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp19;
fp19 = inteval->roz[vi] * src3[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src2[((hsi*21+18)*1+lsi)*1] - fp19;
LIBINT2_REALTYPE fp20;
fp20 = 4 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp20 * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_z[vi] * src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->PA_z[vi] * src0[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp16;
fp16 = fp21 + fp17;
target[((hsi*36+33)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp27;
fp27 = inteval->roz[vi] * src3[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src2[((hsi*21+17)*1+lsi)*1] - fp27;
LIBINT2_REALTYPE fp28;
fp28 = 3 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
LIBINT2_REALTYPE fp24;
fp24 = fp29 + fp25;
target[((hsi*36+32)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp35;
fp35 = inteval->roz[vi] * src3[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src2[((hsi*21+16)*1+lsi)*1] - fp35;
LIBINT2_REALTYPE fp36;
fp36 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp38;
fp38 = inteval->WP_z[vi] * src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * src0[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
LIBINT2_REALTYPE fp32;
fp32 = fp37 + fp33;
target[((hsi*36+31)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp43;
fp43 = inteval->roz[vi] * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src2[((hsi*21+15)*1+lsi)*1] - fp43;
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PA_z[vi] * src0[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp40;
fp40 = fp44 + fp41;
target[((hsi*36+30)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->PA_z[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
target[((hsi*36+29)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp53;
fp53 = inteval->roz[vi] * src3[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src2[((hsi*21+15)*1+lsi)*1] - fp53;
LIBINT2_REALTYPE fp54;
fp54 = 6 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp51;
fp51 = fp54 * fp52;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_y[vi] * src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->PA_y[vi] * src0[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp57 + fp56;
LIBINT2_REALTYPE fp50;
fp50 = fp55 + fp51;
target[((hsi*36+28)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp61;
fp61 = inteval->roz[vi] * src3[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src2[((hsi*21+14)*1+lsi)*1] - fp61;
LIBINT2_REALTYPE fp62;
fp62 = 5 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp62 * fp60;
LIBINT2_REALTYPE fp64;
fp64 = inteval->WP_z[vi] * src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = inteval->PA_z[vi] * src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp58;
fp58 = fp63 + fp59;
target[((hsi*36+27)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp69;
fp69 = inteval->roz[vi] * src3[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src2[((hsi*21+13)*1+lsi)*1] - fp69;
LIBINT2_REALTYPE fp70;
fp70 = 4 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp70 * fp68;
LIBINT2_REALTYPE fp72;
fp72 = inteval->WP_z[vi] * src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->PA_z[vi] * src0[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp73 + fp72;
LIBINT2_REALTYPE fp66;
fp66 = fp71 + fp67;
target[((hsi*36+26)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp77;
fp77 = inteval->roz[vi] * src3[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src2[((hsi*21+12)*1+lsi)*1] - fp77;
LIBINT2_REALTYPE fp78;
fp78 = 3 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp75;
fp75 = fp78 * fp76;
LIBINT2_REALTYPE fp80;
fp80 = inteval->WP_z[vi] * src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->PA_z[vi] * src0[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp74;
fp74 = fp79 + fp75;
target[((hsi*36+25)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp85;
fp85 = inteval->roz[vi] * src3[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src2[((hsi*21+11)*1+lsi)*1] - fp85;
LIBINT2_REALTYPE fp86;
fp86 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp83;
fp83 = fp86 * fp84;
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_z[vi] * src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = inteval->PA_z[vi] * src0[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = fp89 + fp88;
LIBINT2_REALTYPE fp82;
fp82 = fp87 + fp83;
target[((hsi*36+24)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp93;
fp93 = inteval->roz[vi] * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src2[((hsi*21+10)*1+lsi)*1] - fp93;
LIBINT2_REALTYPE fp91;
fp91 = inteval->oo2z[vi] * fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_z[vi] * src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_z[vi] * src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp90;
fp90 = fp94 + fp91;
target[((hsi*36+23)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_z[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_z[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
target[((hsi*36+22)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp103;
fp103 = inteval->roz[vi] * src3[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src2[((hsi*21+10)*1+lsi)*1] - fp103;
LIBINT2_REALTYPE fp104;
fp104 = 5 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp104 * fp102;
LIBINT2_REALTYPE fp106;
fp106 = inteval->WP_y[vi] * src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = inteval->PA_y[vi] * src0[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp107 + fp106;
LIBINT2_REALTYPE fp100;
fp100 = fp105 + fp101;
target[((hsi*36+21)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp111;
fp111 = inteval->roz[vi] * src3[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src2[((hsi*21+9)*1+lsi)*1] - fp111;
LIBINT2_REALTYPE fp112;
fp112 = 4 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp112 * fp110;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WP_z[vi] * src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->PA_z[vi] * src0[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp108;
fp108 = fp113 + fp109;
target[((hsi*36+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp119;
fp119 = inteval->roz[vi] * src3[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src2[((hsi*21+8)*1+lsi)*1] - fp119;
LIBINT2_REALTYPE fp120;
fp120 = 3 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp120 * fp118;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WP_z[vi] * src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->PA_z[vi] * src0[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp123 + fp122;
LIBINT2_REALTYPE fp116;
fp116 = fp121 + fp117;
target[((hsi*36+19)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp127;
fp127 = inteval->roz[vi] * src3[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src2[((hsi*21+7)*1+lsi)*1] - fp127;
LIBINT2_REALTYPE fp128;
fp128 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp128 * fp126;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_z[vi] * src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_z[vi] * src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp124;
fp124 = fp129 + fp125;
target[((hsi*36+18)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp135;
fp135 = inteval->roz[vi] * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src2[((hsi*21+6)*1+lsi)*1] - fp135;
LIBINT2_REALTYPE fp133;
fp133 = inteval->oo2z[vi] * fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_z[vi] * src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = inteval->PA_z[vi] * src0[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
LIBINT2_REALTYPE fp132;
fp132 = fp136 + fp133;
target[((hsi*36+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = inteval->PA_z[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp141 + fp140;
target[((hsi*36+16)*1+lsi)*1] = fp139;
LIBINT2_REALTYPE fp145;
fp145 = inteval->roz[vi] * src3[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src2[((hsi*21+6)*1+lsi)*1] - fp145;
LIBINT2_REALTYPE fp146;
fp146 = 4 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp143;
fp143 = fp146 * fp144;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_y[vi] * src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_y[vi] * src0[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp142;
fp142 = fp147 + fp143;
target[((hsi*36+15)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp153;
fp153 = inteval->roz[vi] * src3[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src2[((hsi*21+5)*1+lsi)*1] - fp153;
LIBINT2_REALTYPE fp154;
fp154 = 3 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp151;
fp151 = fp154 * fp152;
LIBINT2_REALTYPE fp156;
fp156 = inteval->WP_z[vi] * src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = inteval->PA_z[vi] * src0[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp155;
fp155 = fp157 + fp156;
LIBINT2_REALTYPE fp150;
fp150 = fp155 + fp151;
target[((hsi*36+14)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp161;
fp161 = inteval->roz[vi] * src3[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src2[((hsi*21+4)*1+lsi)*1] - fp161;
LIBINT2_REALTYPE fp162;
fp162 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp159;
fp159 = fp162 * fp160;
LIBINT2_REALTYPE fp164;
fp164 = inteval->WP_z[vi] * src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp165;
fp165 = inteval->PA_z[vi] * src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp165 + fp164;
LIBINT2_REALTYPE fp158;
fp158 = fp163 + fp159;
target[((hsi*36+13)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp169;
fp169 = inteval->roz[vi] * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src2[((hsi*21+3)*1+lsi)*1] - fp169;
LIBINT2_REALTYPE fp167;
fp167 = inteval->oo2z[vi] * fp168;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_z[vi] * src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_z[vi] * src0[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp166;
fp166 = fp170 + fp167;
target[((hsi*36+12)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_z[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = inteval->PA_z[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp175 + fp174;
target[((hsi*36+11)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp179;
fp179 = inteval->roz[vi] * src3[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src2[((hsi*21+3)*1+lsi)*1] - fp179;
LIBINT2_REALTYPE fp180;
fp180 = 3 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp177;
fp177 = fp180 * fp178;
LIBINT2_REALTYPE fp182;
fp182 = inteval->WP_y[vi] * src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp183;
fp183 = inteval->PA_y[vi] * src0[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp183 + fp182;
LIBINT2_REALTYPE fp176;
fp176 = fp181 + fp177;
target[((hsi*36+10)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp187;
fp187 = inteval->roz[vi] * src3[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src2[((hsi*21+2)*1+lsi)*1] - fp187;
LIBINT2_REALTYPE fp188;
fp188 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp185;
fp185 = fp188 * fp186;
LIBINT2_REALTYPE fp190;
fp190 = inteval->WP_z[vi] * src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp191;
fp191 = inteval->PA_z[vi] * src0[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp189;
fp189 = fp191 + fp190;
LIBINT2_REALTYPE fp184;
fp184 = fp189 + fp185;
target[((hsi*36+9)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp195;
fp195 = inteval->roz[vi] * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src2[((hsi*21+1)*1+lsi)*1] - fp195;
LIBINT2_REALTYPE fp193;
fp193 = inteval->oo2z[vi] * fp194;
LIBINT2_REALTYPE fp197;
fp197 = inteval->WP_z[vi] * src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = inteval->PA_z[vi] * src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = fp198 + fp197;
LIBINT2_REALTYPE fp192;
fp192 = fp196 + fp193;
target[((hsi*36+8)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp200;
fp200 = inteval->WP_z[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp201;
fp201 = inteval->PA_z[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp199;
fp199 = fp201 + fp200;
target[((hsi*36+7)*1+lsi)*1] = fp199;
LIBINT2_REALTYPE fp205;
fp205 = inteval->roz[vi] * src3[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src2[((hsi*21+1)*1+lsi)*1] - fp205;
LIBINT2_REALTYPE fp206;
fp206 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp203;
fp203 = fp206 * fp204;
LIBINT2_REALTYPE fp208;
fp208 = inteval->WP_y[vi] * src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp209;
fp209 = inteval->PA_y[vi] * src0[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp207;
fp207 = fp209 + fp208;
LIBINT2_REALTYPE fp202;
fp202 = fp207 + fp203;
target[((hsi*36+6)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp213;
fp213 = inteval->roz[vi] * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src2[((hsi*21+0)*1+lsi)*1] - fp213;
LIBINT2_REALTYPE fp211;
fp211 = inteval->oo2z[vi] * fp212;
LIBINT2_REALTYPE fp215;
fp215 = inteval->WP_z[vi] * src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp216;
fp216 = inteval->PA_z[vi] * src0[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = fp216 + fp215;
LIBINT2_REALTYPE fp210;
fp210 = fp214 + fp211;
target[((hsi*36+5)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp218;
fp218 = inteval->WP_z[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp219;
fp219 = inteval->PA_z[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp217;
fp217 = fp219 + fp218;
target[((hsi*36+4)*1+lsi)*1] = fp217;
LIBINT2_REALTYPE fp223;
fp223 = inteval->roz[vi] * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp222;
fp222 = src2[((hsi*21+0)*1+lsi)*1] - fp223;
LIBINT2_REALTYPE fp221;
fp221 = inteval->oo2z[vi] * fp222;
LIBINT2_REALTYPE fp225;
fp225 = inteval->WP_y[vi] * src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp226;
fp226 = inteval->PA_y[vi] * src0[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp224;
fp224 = fp226 + fp225;
LIBINT2_REALTYPE fp220;
fp220 = fp224 + fp221;
target[((hsi*36+3)*1+lsi)*1] = fp220;
LIBINT2_REALTYPE fp228;
fp228 = inteval->WP_z[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp229;
fp229 = inteval->PA_z[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp227;
fp227 = fp229 + fp228;
target[((hsi*36+2)*1+lsi)*1] = fp227;
LIBINT2_REALTYPE fp231;
fp231 = inteval->WP_y[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp232;
fp232 = inteval->PA_y[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp230;
fp230 = fp232 + fp231;
target[((hsi*36+1)*1+lsi)*1] = fp230;
LIBINT2_REALTYPE fp236;
fp236 = inteval->roz[vi] * src3[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp235;
fp235 = src2[((hsi*21+0)*1+lsi)*1] - fp236;
LIBINT2_REALTYPE fp237;
fp237 = 6 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp234;
fp234 = fp237 * fp235;
LIBINT2_REALTYPE fp239;
fp239 = inteval->WP_x[vi] * src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp240;
fp240 = inteval->PA_x[vi] * src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp238;
fp238 = fp240 + fp239;
LIBINT2_REALTYPE fp233;
fp233 = fp238 + fp234;
target[((hsi*36+0)*1+lsi)*1] = fp233;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 241 */
}

};
