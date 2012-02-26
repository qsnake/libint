#include <libint2.h>

extern "C" {
void HRRPart0bra0ket0HP(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->AB_z[vi] * src1[((hsi*21+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*28+27)*lowdim+lsi)*1] + fp1;
target[((hsi*63+62)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->AB_y[vi] * src1[((hsi*21+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*28+26)*lowdim+lsi)*1] + fp3;
target[((hsi*63+61)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->AB_x[vi] * src1[((hsi*21+20)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*28+20)*lowdim+lsi)*1] + fp5;
target[((hsi*63+60)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->AB_z[vi] * src1[((hsi*21+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*28+26)*lowdim+lsi)*1] + fp7;
target[((hsi*63+59)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->AB_y[vi] * src1[((hsi*21+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*28+25)*lowdim+lsi)*1] + fp9;
target[((hsi*63+58)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->AB_x[vi] * src1[((hsi*21+19)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*28+19)*lowdim+lsi)*1] + fp11;
target[((hsi*63+57)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->AB_z[vi] * src1[((hsi*21+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*28+25)*lowdim+lsi)*1] + fp13;
target[((hsi*63+56)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->AB_y[vi] * src1[((hsi*21+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*28+24)*lowdim+lsi)*1] + fp15;
target[((hsi*63+55)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->AB_x[vi] * src1[((hsi*21+18)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*28+18)*lowdim+lsi)*1] + fp17;
target[((hsi*63+54)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->AB_z[vi] * src1[((hsi*21+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = src0[((hsi*28+24)*lowdim+lsi)*1] + fp19;
target[((hsi*63+53)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = inteval->AB_y[vi] * src1[((hsi*21+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src0[((hsi*28+23)*lowdim+lsi)*1] + fp21;
target[((hsi*63+52)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = inteval->AB_x[vi] * src1[((hsi*21+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = src0[((hsi*28+17)*lowdim+lsi)*1] + fp23;
target[((hsi*63+51)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
fp25 = inteval->AB_z[vi] * src1[((hsi*21+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = src0[((hsi*28+23)*lowdim+lsi)*1] + fp25;
target[((hsi*63+50)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
fp27 = inteval->AB_y[vi] * src1[((hsi*21+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = src0[((hsi*28+22)*lowdim+lsi)*1] + fp27;
target[((hsi*63+49)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->AB_x[vi] * src1[((hsi*21+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src0[((hsi*28+16)*lowdim+lsi)*1] + fp29;
target[((hsi*63+48)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->AB_z[vi] * src1[((hsi*21+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = src0[((hsi*28+22)*lowdim+lsi)*1] + fp31;
target[((hsi*63+47)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->AB_y[vi] * src1[((hsi*21+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src0[((hsi*28+21)*lowdim+lsi)*1] + fp33;
target[((hsi*63+46)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->AB_x[vi] * src1[((hsi*21+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src0[((hsi*28+15)*lowdim+lsi)*1] + fp35;
target[((hsi*63+45)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->AB_z[vi] * src1[((hsi*21+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = src0[((hsi*28+20)*lowdim+lsi)*1] + fp37;
target[((hsi*63+44)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
fp39 = inteval->AB_y[vi] * src1[((hsi*21+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src0[((hsi*28+19)*lowdim+lsi)*1] + fp39;
target[((hsi*63+43)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->AB_x[vi] * src1[((hsi*21+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = src0[((hsi*28+14)*lowdim+lsi)*1] + fp41;
target[((hsi*63+42)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->AB_z[vi] * src1[((hsi*21+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = src0[((hsi*28+19)*lowdim+lsi)*1] + fp43;
target[((hsi*63+41)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = inteval->AB_y[vi] * src1[((hsi*21+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = src0[((hsi*28+18)*lowdim+lsi)*1] + fp45;
target[((hsi*63+40)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = inteval->AB_x[vi] * src1[((hsi*21+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = src0[((hsi*28+13)*lowdim+lsi)*1] + fp47;
target[((hsi*63+39)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
fp49 = inteval->AB_z[vi] * src1[((hsi*21+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src0[((hsi*28+18)*lowdim+lsi)*1] + fp49;
target[((hsi*63+38)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = inteval->AB_y[vi] * src1[((hsi*21+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = src0[((hsi*28+17)*lowdim+lsi)*1] + fp51;
target[((hsi*63+37)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->AB_x[vi] * src1[((hsi*21+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = src0[((hsi*28+12)*lowdim+lsi)*1] + fp53;
target[((hsi*63+36)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
fp55 = inteval->AB_z[vi] * src1[((hsi*21+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = src0[((hsi*28+17)*lowdim+lsi)*1] + fp55;
target[((hsi*63+35)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
fp57 = inteval->AB_y[vi] * src1[((hsi*21+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src0[((hsi*28+16)*lowdim+lsi)*1] + fp57;
target[((hsi*63+34)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
fp59 = inteval->AB_x[vi] * src1[((hsi*21+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = src0[((hsi*28+11)*lowdim+lsi)*1] + fp59;
target[((hsi*63+33)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->AB_z[vi] * src1[((hsi*21+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = src0[((hsi*28+16)*lowdim+lsi)*1] + fp61;
target[((hsi*63+32)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->AB_y[vi] * src1[((hsi*21+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = src0[((hsi*28+15)*lowdim+lsi)*1] + fp63;
target[((hsi*63+31)*lowdim+lsi)*1] = fp62;
LIBINT2_REALTYPE fp65;
fp65 = inteval->AB_x[vi] * src1[((hsi*21+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = src0[((hsi*28+10)*lowdim+lsi)*1] + fp65;
target[((hsi*63+30)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->AB_z[vi] * src1[((hsi*21+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = src0[((hsi*28+14)*lowdim+lsi)*1] + fp67;
target[((hsi*63+29)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
fp69 = inteval->AB_y[vi] * src1[((hsi*21+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = src0[((hsi*28+13)*lowdim+lsi)*1] + fp69;
target[((hsi*63+28)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = inteval->AB_x[vi] * src1[((hsi*21+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = src0[((hsi*28+9)*lowdim+lsi)*1] + fp71;
target[((hsi*63+27)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
fp73 = inteval->AB_z[vi] * src1[((hsi*21+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = src0[((hsi*28+13)*lowdim+lsi)*1] + fp73;
target[((hsi*63+26)*lowdim+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
fp75 = inteval->AB_y[vi] * src1[((hsi*21+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = src0[((hsi*28+12)*lowdim+lsi)*1] + fp75;
target[((hsi*63+25)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->AB_x[vi] * src1[((hsi*21+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = src0[((hsi*28+8)*lowdim+lsi)*1] + fp77;
target[((hsi*63+24)*lowdim+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
fp79 = inteval->AB_z[vi] * src1[((hsi*21+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = src0[((hsi*28+12)*lowdim+lsi)*1] + fp79;
target[((hsi*63+23)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->AB_y[vi] * src1[((hsi*21+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = src0[((hsi*28+11)*lowdim+lsi)*1] + fp81;
target[((hsi*63+22)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
fp83 = inteval->AB_x[vi] * src1[((hsi*21+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = src0[((hsi*28+7)*lowdim+lsi)*1] + fp83;
target[((hsi*63+21)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
fp85 = inteval->AB_z[vi] * src1[((hsi*21+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = src0[((hsi*28+11)*lowdim+lsi)*1] + fp85;
target[((hsi*63+20)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
fp87 = inteval->AB_y[vi] * src1[((hsi*21+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp86;
fp86 = src0[((hsi*28+10)*lowdim+lsi)*1] + fp87;
target[((hsi*63+19)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = inteval->AB_x[vi] * src1[((hsi*21+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = src0[((hsi*28+6)*lowdim+lsi)*1] + fp89;
target[((hsi*63+18)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->AB_z[vi] * src1[((hsi*21+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = src0[((hsi*28+9)*lowdim+lsi)*1] + fp91;
target[((hsi*63+17)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp93;
fp93 = inteval->AB_y[vi] * src1[((hsi*21+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = src0[((hsi*28+8)*lowdim+lsi)*1] + fp93;
target[((hsi*63+16)*lowdim+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = inteval->AB_x[vi] * src1[((hsi*21+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = src0[((hsi*28+5)*lowdim+lsi)*1] + fp95;
target[((hsi*63+15)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = inteval->AB_z[vi] * src1[((hsi*21+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = src0[((hsi*28+8)*lowdim+lsi)*1] + fp97;
target[((hsi*63+14)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = inteval->AB_y[vi] * src1[((hsi*21+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = src0[((hsi*28+7)*lowdim+lsi)*1] + fp99;
target[((hsi*63+13)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->AB_x[vi] * src1[((hsi*21+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp100;
fp100 = src0[((hsi*28+4)*lowdim+lsi)*1] + fp101;
target[((hsi*63+12)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = inteval->AB_z[vi] * src1[((hsi*21+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = src0[((hsi*28+7)*lowdim+lsi)*1] + fp103;
target[((hsi*63+11)*lowdim+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = inteval->AB_y[vi] * src1[((hsi*21+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = src0[((hsi*28+6)*lowdim+lsi)*1] + fp105;
target[((hsi*63+10)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->AB_x[vi] * src1[((hsi*21+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = src0[((hsi*28+3)*lowdim+lsi)*1] + fp107;
target[((hsi*63+9)*lowdim+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = inteval->AB_z[vi] * src1[((hsi*21+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = src0[((hsi*28+5)*lowdim+lsi)*1] + fp109;
target[((hsi*63+8)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = inteval->AB_y[vi] * src1[((hsi*21+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp110;
fp110 = src0[((hsi*28+4)*lowdim+lsi)*1] + fp111;
target[((hsi*63+7)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = inteval->AB_x[vi] * src1[((hsi*21+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = src0[((hsi*28+2)*lowdim+lsi)*1] + fp113;
target[((hsi*63+6)*lowdim+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->AB_z[vi] * src1[((hsi*21+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = src0[((hsi*28+4)*lowdim+lsi)*1] + fp115;
target[((hsi*63+5)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = inteval->AB_y[vi] * src1[((hsi*21+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = src0[((hsi*28+3)*lowdim+lsi)*1] + fp117;
target[((hsi*63+4)*lowdim+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = inteval->AB_x[vi] * src1[((hsi*21+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp118;
fp118 = src0[((hsi*28+1)*lowdim+lsi)*1] + fp119;
target[((hsi*63+3)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->AB_z[vi] * src1[((hsi*21+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = src0[((hsi*28+2)*lowdim+lsi)*1] + fp121;
target[((hsi*63+2)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = inteval->AB_y[vi] * src1[((hsi*21+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = src0[((hsi*28+1)*lowdim+lsi)*1] + fp123;
target[((hsi*63+1)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = inteval->AB_x[vi] * src1[((hsi*21+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = src0[((hsi*28+0)*lowdim+lsi)*1] + fp125;
target[((hsi*63+0)*lowdim+lsi)*1] = fp124;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

};
