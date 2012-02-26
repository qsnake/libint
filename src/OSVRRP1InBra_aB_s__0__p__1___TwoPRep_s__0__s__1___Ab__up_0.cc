#include <libint2.h>

extern "C" {
void OSVRRP1InBra_aB_s__0__p__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->WQ_z[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = inteval->QC_z[vi] * src0[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*3+2)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WQ_y[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->QC_y[vi] * src0[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
target[((hsi*3+1)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WQ_x[vi] * src1[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->QC_x[vi] * src0[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*3+0)*1+lsi)*1] = fp6;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 9 */
}

};
