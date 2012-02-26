#include <libint2.h>

extern "C" {
void HRRPart1bra0ket0PP(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->CD_z[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = src0[((hsi*6+5)*1+lsi)*1] + fp1;
target[((hsi*9+8)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->CD_y[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = src0[((hsi*6+4)*1+lsi)*1] + fp3;
target[((hsi*9+7)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->CD_x[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = src0[((hsi*6+2)*1+lsi)*1] + fp5;
target[((hsi*9+6)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->CD_z[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = src0[((hsi*6+4)*1+lsi)*1] + fp7;
target[((hsi*9+5)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->CD_y[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = src0[((hsi*6+3)*1+lsi)*1] + fp9;
target[((hsi*9+4)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = inteval->CD_x[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = src0[((hsi*6+1)*1+lsi)*1] + fp11;
target[((hsi*9+3)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = inteval->CD_z[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = src0[((hsi*6+2)*1+lsi)*1] + fp13;
target[((hsi*9+2)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = inteval->CD_y[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = src0[((hsi*6+1)*1+lsi)*1] + fp15;
target[((hsi*9+1)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->CD_x[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = src0[((hsi*6+0)*1+lsi)*1] + fp17;
target[((hsi*9+0)*1+lsi)*1] = fp16;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 18 */
}

};
