#include <libint2.h>

extern "C" {
void OSVRRP0InBra_aB_f__0__s__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->roz[vi] * src3[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*3+2)*1+lsi)*1] - fp3;
LIBINT2_REALTYPE fp4;
fp4 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp11;
fp11 = inteval->roz[vi] * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src2[((hsi*3+1)*1+lsi)*1] - fp11;
LIBINT2_REALTYPE fp9;
fp9 = inteval->oo2z[vi] * fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
LIBINT2_REALTYPE fp8;
fp8 = fp12 + fp9;
target[((hsi*10+8)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->PA_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
target[((hsi*10+7)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp21;
fp21 = inteval->roz[vi] * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = src2[((hsi*3+1)*1+lsi)*1] - fp21;
LIBINT2_REALTYPE fp22;
fp22 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp19;
fp19 = fp22 * fp20;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_y[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp18;
fp18 = fp23 + fp19;
target[((hsi*10+6)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp29;
fp29 = inteval->roz[vi] * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = src2[((hsi*3+0)*1+lsi)*1] - fp29;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_z[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->PA_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
target[((hsi*10+5)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp34;
fp34 = inteval->WP_z[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->PA_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp35 + fp34;
target[((hsi*10+4)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp39;
fp39 = inteval->roz[vi] * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src2[((hsi*3+0)*1+lsi)*1] - fp39;
LIBINT2_REALTYPE fp37;
fp37 = inteval->oo2z[vi] * fp38;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_y[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
target[((hsi*10+3)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp44;
fp44 = inteval->WP_z[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->PA_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp45 + fp44;
target[((hsi*10+2)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp47;
fp47 = inteval->WP_y[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*10+1)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp52;
fp52 = inteval->roz[vi] * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = src2[((hsi*3+0)*1+lsi)*1] - fp52;
LIBINT2_REALTYPE fp53;
fp53 = 2 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp53 * fp51;
LIBINT2_REALTYPE fp55;
fp55 = inteval->WP_x[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp56 + fp55;
LIBINT2_REALTYPE fp49;
fp49 = fp54 + fp50;
target[((hsi*10+0)*1+lsi)*1] = fp49;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 57 */
}

};
