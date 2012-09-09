#include <libint2.h>

extern "C" {
void OSVRRP0InBra_aB_d__0__s__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp22;
fp22 = inteval->roz[vi] * src3[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = src2[((hsi*1+0)*1+lsi)*1] - fp22;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp21;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * src0[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*6+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*6+4)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp9;
fp9 = inteval->oo2z[vi] * fp21;
LIBINT2_REALTYPE fp11;
fp11 = inteval->WP_y[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->PA_y[vi] * src0[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*6+3)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_z[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp15 + fp14;
target[((hsi*6+2)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_y[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_y[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*6+1)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * fp21;
LIBINT2_REALTYPE fp24;
fp24 = inteval->WP_x[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_x[vi] * src0[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp25 + fp24;
LIBINT2_REALTYPE fp19;
fp19 = fp23 + fp20;
target[((hsi*6+0)*1+lsi)*1] = fp19;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 26 */
}

};
