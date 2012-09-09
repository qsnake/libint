#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2380)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__H__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1764+5908)*1+lsi)*1]), &(stack[((hsi*784+588)*1+lsi)*1]), &(stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+7672)*1+lsi)*1]), &(stack[((hsi*1008+1372)*1+lsi)*1]), &(stack[((hsi*784+588)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*3528+2380)*1+lsi)*1]), &(stack[((hsi*2352+7672)*1+lsi)*1]), &(stack[((hsi*1764+5908)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3528+2380)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
