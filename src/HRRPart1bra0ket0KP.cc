#include <libint2.h>

extern "C" {
void HRRPart1bra0ket0KP(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*45+44)*1+lsi)*1] + fp1;
target[((hsi*108+107)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_y[vi] * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*45+43)*1+lsi)*1] + fp3;
target[((hsi*108+106)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_x[vi] * src1[((hsi*36+35)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*45+35)*1+lsi)*1] + fp5;
target[((hsi*108+105)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_z[vi] * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*45+43)*1+lsi)*1] + fp7;
target[((hsi*108+104)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*45+42)*1+lsi)*1] + fp9;
target[((hsi*108+103)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_x[vi] * src1[((hsi*36+34)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*45+34)*1+lsi)*1] + fp11;
target[((hsi*108+102)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*45+42)*1+lsi)*1] + fp13;
target[((hsi*108+101)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*45+41)*1+lsi)*1] + fp15;
target[((hsi*108+100)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_x[vi] * src1[((hsi*36+33)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*45+33)*1+lsi)*1] + fp17;
target[((hsi*108+99)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->CD_z[vi] * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*45+41)*1+lsi)*1] + fp19;
target[((hsi*108+98)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->CD_y[vi] * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*45+40)*1+lsi)*1] + fp21;
target[((hsi*108+97)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->CD_x[vi] * src1[((hsi*36+32)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*45+32)*1+lsi)*1] + fp23;
target[((hsi*108+96)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->CD_z[vi] * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*45+40)*1+lsi)*1] + fp25;
target[((hsi*108+95)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->CD_y[vi] * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*45+39)*1+lsi)*1] + fp27;
target[((hsi*108+94)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->CD_x[vi] * src1[((hsi*36+31)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*45+31)*1+lsi)*1] + fp29;
target[((hsi*108+93)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->CD_z[vi] * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*45+39)*1+lsi)*1] + fp31;
target[((hsi*108+92)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->CD_y[vi] * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*45+38)*1+lsi)*1] + fp33;
target[((hsi*108+91)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_x[vi] * src1[((hsi*36+30)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*45+30)*1+lsi)*1] + fp35;
target[((hsi*108+90)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->CD_z[vi] * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*45+38)*1+lsi)*1] + fp37;
target[((hsi*108+89)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->CD_y[vi] * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*45+37)*1+lsi)*1] + fp39;
target[((hsi*108+88)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_x[vi] * src1[((hsi*36+29)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*45+29)*1+lsi)*1] + fp41;
target[((hsi*108+87)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->CD_z[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*45+37)*1+lsi)*1] + fp43;
target[((hsi*108+86)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->CD_y[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*45+36)*1+lsi)*1] + fp45;
target[((hsi*108+85)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->CD_x[vi] * src1[((hsi*36+28)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*45+28)*1+lsi)*1] + fp47;
target[((hsi*108+84)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->CD_z[vi] * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*45+35)*1+lsi)*1] + fp49;
target[((hsi*108+83)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_y[vi] * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*45+34)*1+lsi)*1] + fp51;
target[((hsi*108+82)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->CD_x[vi] * src1[((hsi*36+27)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*45+27)*1+lsi)*1] + fp53;
target[((hsi*108+81)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = inteval->CD_z[vi] * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*45+34)*1+lsi)*1] + fp55;
target[((hsi*108+80)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_y[vi] * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*45+33)*1+lsi)*1] + fp57;
target[((hsi*108+79)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->CD_x[vi] * src1[((hsi*36+26)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*45+26)*1+lsi)*1] + fp59;
target[((hsi*108+78)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->CD_z[vi] * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*45+33)*1+lsi)*1] + fp61;
target[((hsi*108+77)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->CD_y[vi] * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*45+32)*1+lsi)*1] + fp63;
target[((hsi*108+76)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->CD_x[vi] * src1[((hsi*36+25)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*45+25)*1+lsi)*1] + fp65;
target[((hsi*108+75)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->CD_z[vi] * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*45+32)*1+lsi)*1] + fp67;
target[((hsi*108+74)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->CD_y[vi] * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*45+31)*1+lsi)*1] + fp69;
target[((hsi*108+73)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->CD_x[vi] * src1[((hsi*36+24)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*45+24)*1+lsi)*1] + fp71;
target[((hsi*108+72)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->CD_z[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*45+31)*1+lsi)*1] + fp73;
target[((hsi*108+71)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->CD_y[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*45+30)*1+lsi)*1] + fp75;
target[((hsi*108+70)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->CD_x[vi] * src1[((hsi*36+23)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*45+23)*1+lsi)*1] + fp77;
target[((hsi*108+69)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->CD_z[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*45+30)*1+lsi)*1] + fp79;
target[((hsi*108+68)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->CD_y[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*45+29)*1+lsi)*1] + fp81;
target[((hsi*108+67)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->CD_x[vi] * src1[((hsi*36+22)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*45+22)*1+lsi)*1] + fp83;
target[((hsi*108+66)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->CD_z[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*45+29)*1+lsi)*1] + fp85;
target[((hsi*108+65)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->CD_y[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*45+28)*1+lsi)*1] + fp87;
target[((hsi*108+64)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->CD_x[vi] * src1[((hsi*36+21)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*45+21)*1+lsi)*1] + fp89;
target[((hsi*108+63)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->CD_z[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*45+27)*1+lsi)*1] + fp91;
target[((hsi*108+62)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = inteval->CD_y[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*45+26)*1+lsi)*1] + fp93;
target[((hsi*108+61)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->CD_x[vi] * src1[((hsi*36+20)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*45+20)*1+lsi)*1] + fp95;
target[((hsi*108+60)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->CD_z[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*45+26)*1+lsi)*1] + fp97;
target[((hsi*108+59)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->CD_y[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*45+25)*1+lsi)*1] + fp99;
target[((hsi*108+58)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->CD_x[vi] * src1[((hsi*36+19)*1+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*45+19)*1+lsi)*1] + fp101;
target[((hsi*108+57)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = inteval->CD_z[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*45+25)*1+lsi)*1] + fp103;
target[((hsi*108+56)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->CD_y[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*45+24)*1+lsi)*1] + fp105;
target[((hsi*108+55)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->CD_x[vi] * src1[((hsi*36+18)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*45+18)*1+lsi)*1] + fp107;
target[((hsi*108+54)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->CD_z[vi] * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*45+24)*1+lsi)*1] + fp109;
target[((hsi*108+53)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = inteval->CD_y[vi] * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*45+23)*1+lsi)*1] + fp111;
target[((hsi*108+52)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->CD_x[vi] * src1[((hsi*36+17)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*45+17)*1+lsi)*1] + fp113;
target[((hsi*108+51)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->CD_z[vi] * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*45+23)*1+lsi)*1] + fp115;
target[((hsi*108+50)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->CD_y[vi] * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*45+22)*1+lsi)*1] + fp117;
target[((hsi*108+49)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->CD_x[vi] * src1[((hsi*36+16)*1+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*45+16)*1+lsi)*1] + fp119;
target[((hsi*108+48)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->CD_z[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*45+22)*1+lsi)*1] + fp121;
target[((hsi*108+47)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->CD_y[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*45+21)*1+lsi)*1] + fp123;
target[((hsi*108+46)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->CD_x[vi] * src1[((hsi*36+15)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*45+15)*1+lsi)*1] + fp125;
target[((hsi*108+45)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = inteval->CD_z[vi] * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp126;
fp126 = src0[((hsi*45+20)*1+lsi)*1] + fp127;
target[((hsi*108+44)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->CD_y[vi] * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = src0[((hsi*45+19)*1+lsi)*1] + fp129;
target[((hsi*108+43)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = inteval->CD_x[vi] * src1[((hsi*36+14)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = src0[((hsi*45+14)*1+lsi)*1] + fp131;
target[((hsi*108+42)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = inteval->CD_z[vi] * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = src0[((hsi*45+19)*1+lsi)*1] + fp133;
target[((hsi*108+41)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp135;
fp135 = inteval->CD_y[vi] * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp134;
fp134 = src0[((hsi*45+18)*1+lsi)*1] + fp135;
target[((hsi*108+40)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp137;
fp137 = inteval->CD_x[vi] * src1[((hsi*36+13)*1+lsi)*1];
LIBINT2_REALTYPE fp136;
fp136 = src0[((hsi*45+13)*1+lsi)*1] + fp137;
target[((hsi*108+39)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->CD_z[vi] * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = src0[((hsi*45+18)*1+lsi)*1] + fp139;
target[((hsi*108+38)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = inteval->CD_y[vi] * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = src0[((hsi*45+17)*1+lsi)*1] + fp141;
target[((hsi*108+37)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp143;
fp143 = inteval->CD_x[vi] * src1[((hsi*36+12)*1+lsi)*1];
LIBINT2_REALTYPE fp142;
fp142 = src0[((hsi*45+12)*1+lsi)*1] + fp143;
target[((hsi*108+36)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp145;
fp145 = inteval->CD_z[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
fp144 = src0[((hsi*45+17)*1+lsi)*1] + fp145;
target[((hsi*108+35)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp147;
fp147 = inteval->CD_y[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
fp146 = src0[((hsi*45+16)*1+lsi)*1] + fp147;
target[((hsi*108+34)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = inteval->CD_x[vi] * src1[((hsi*36+11)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = src0[((hsi*45+11)*1+lsi)*1] + fp149;
target[((hsi*108+33)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = inteval->CD_z[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = src0[((hsi*45+16)*1+lsi)*1] + fp151;
target[((hsi*108+32)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = inteval->CD_y[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = src0[((hsi*45+15)*1+lsi)*1] + fp153;
target[((hsi*108+31)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = inteval->CD_x[vi] * src1[((hsi*36+10)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = src0[((hsi*45+10)*1+lsi)*1] + fp155;
target[((hsi*108+30)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = inteval->CD_z[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp156;
fp156 = src0[((hsi*45+14)*1+lsi)*1] + fp157;
target[((hsi*108+29)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->CD_y[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = src0[((hsi*45+13)*1+lsi)*1] + fp159;
target[((hsi*108+28)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = inteval->CD_x[vi] * src1[((hsi*36+9)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = src0[((hsi*45+9)*1+lsi)*1] + fp161;
target[((hsi*108+27)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = inteval->CD_z[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp162;
fp162 = src0[((hsi*45+13)*1+lsi)*1] + fp163;
target[((hsi*108+26)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = inteval->CD_y[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = src0[((hsi*45+12)*1+lsi)*1] + fp165;
target[((hsi*108+25)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp167;
fp167 = inteval->CD_x[vi] * src1[((hsi*36+8)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = src0[((hsi*45+8)*1+lsi)*1] + fp167;
target[((hsi*108+24)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = inteval->CD_z[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
fp168 = src0[((hsi*45+12)*1+lsi)*1] + fp169;
target[((hsi*108+23)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp171;
fp171 = inteval->CD_y[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = src0[((hsi*45+11)*1+lsi)*1] + fp171;
target[((hsi*108+22)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = inteval->CD_x[vi] * src1[((hsi*36+7)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = src0[((hsi*45+7)*1+lsi)*1] + fp173;
target[((hsi*108+21)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp175;
fp175 = inteval->CD_z[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp174;
fp174 = src0[((hsi*45+11)*1+lsi)*1] + fp175;
target[((hsi*108+20)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp177;
fp177 = inteval->CD_y[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
fp176 = src0[((hsi*45+10)*1+lsi)*1] + fp177;
target[((hsi*108+19)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp179;
fp179 = inteval->CD_x[vi] * src1[((hsi*36+6)*1+lsi)*1];
LIBINT2_REALTYPE fp178;
fp178 = src0[((hsi*45+6)*1+lsi)*1] + fp179;
target[((hsi*108+18)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp181;
fp181 = inteval->CD_z[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
fp180 = src0[((hsi*45+9)*1+lsi)*1] + fp181;
target[((hsi*108+17)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp183;
fp183 = inteval->CD_y[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp182;
fp182 = src0[((hsi*45+8)*1+lsi)*1] + fp183;
target[((hsi*108+16)*1+lsi)*1] = fp182;
LIBINT2_REALTYPE fp185;
fp185 = inteval->CD_x[vi] * src1[((hsi*36+5)*1+lsi)*1];
LIBINT2_REALTYPE fp184;
fp184 = src0[((hsi*45+5)*1+lsi)*1] + fp185;
target[((hsi*108+15)*1+lsi)*1] = fp184;
LIBINT2_REALTYPE fp187;
fp187 = inteval->CD_z[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp186;
fp186 = src0[((hsi*45+8)*1+lsi)*1] + fp187;
target[((hsi*108+14)*1+lsi)*1] = fp186;
LIBINT2_REALTYPE fp189;
fp189 = inteval->CD_y[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
fp188 = src0[((hsi*45+7)*1+lsi)*1] + fp189;
target[((hsi*108+13)*1+lsi)*1] = fp188;
LIBINT2_REALTYPE fp191;
fp191 = inteval->CD_x[vi] * src1[((hsi*36+4)*1+lsi)*1];
LIBINT2_REALTYPE fp190;
fp190 = src0[((hsi*45+4)*1+lsi)*1] + fp191;
target[((hsi*108+12)*1+lsi)*1] = fp190;
LIBINT2_REALTYPE fp193;
fp193 = inteval->CD_z[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp192;
fp192 = src0[((hsi*45+7)*1+lsi)*1] + fp193;
target[((hsi*108+11)*1+lsi)*1] = fp192;
LIBINT2_REALTYPE fp195;
fp195 = inteval->CD_y[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp194;
fp194 = src0[((hsi*45+6)*1+lsi)*1] + fp195;
target[((hsi*108+10)*1+lsi)*1] = fp194;
LIBINT2_REALTYPE fp197;
fp197 = inteval->CD_x[vi] * src1[((hsi*36+3)*1+lsi)*1];
LIBINT2_REALTYPE fp196;
fp196 = src0[((hsi*45+3)*1+lsi)*1] + fp197;
target[((hsi*108+9)*1+lsi)*1] = fp196;
LIBINT2_REALTYPE fp199;
fp199 = inteval->CD_z[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp198;
fp198 = src0[((hsi*45+5)*1+lsi)*1] + fp199;
target[((hsi*108+8)*1+lsi)*1] = fp198;
LIBINT2_REALTYPE fp201;
fp201 = inteval->CD_y[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp200;
fp200 = src0[((hsi*45+4)*1+lsi)*1] + fp201;
target[((hsi*108+7)*1+lsi)*1] = fp200;
LIBINT2_REALTYPE fp203;
fp203 = inteval->CD_x[vi] * src1[((hsi*36+2)*1+lsi)*1];
LIBINT2_REALTYPE fp202;
fp202 = src0[((hsi*45+2)*1+lsi)*1] + fp203;
target[((hsi*108+6)*1+lsi)*1] = fp202;
LIBINT2_REALTYPE fp205;
fp205 = inteval->CD_z[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp204;
fp204 = src0[((hsi*45+4)*1+lsi)*1] + fp205;
target[((hsi*108+5)*1+lsi)*1] = fp204;
LIBINT2_REALTYPE fp207;
fp207 = inteval->CD_y[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp206;
fp206 = src0[((hsi*45+3)*1+lsi)*1] + fp207;
target[((hsi*108+4)*1+lsi)*1] = fp206;
LIBINT2_REALTYPE fp209;
fp209 = inteval->CD_x[vi] * src1[((hsi*36+1)*1+lsi)*1];
LIBINT2_REALTYPE fp208;
fp208 = src0[((hsi*45+1)*1+lsi)*1] + fp209;
target[((hsi*108+3)*1+lsi)*1] = fp208;
LIBINT2_REALTYPE fp211;
fp211 = inteval->CD_z[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp210;
fp210 = src0[((hsi*45+2)*1+lsi)*1] + fp211;
target[((hsi*108+2)*1+lsi)*1] = fp210;
LIBINT2_REALTYPE fp213;
fp213 = inteval->CD_y[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp212;
fp212 = src0[((hsi*45+1)*1+lsi)*1] + fp213;
target[((hsi*108+1)*1+lsi)*1] = fp212;
LIBINT2_REALTYPE fp215;
fp215 = inteval->CD_x[vi] * src1[((hsi*36+0)*1+lsi)*1];
LIBINT2_REALTYPE fp214;
fp214 = src0[((hsi*45+0)*1+lsi)*1] + fp215;
target[((hsi*108+0)*1+lsi)*1] = fp214;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 216 */
}

};
