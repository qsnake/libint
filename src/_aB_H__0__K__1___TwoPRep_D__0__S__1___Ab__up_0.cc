#include <libint2.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <_aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3060)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*2268+7596)*1+lsi)*1]), &(stack[((hsi*1008+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*3024+9864)*1+lsi)*1]), &(stack[((hsi*1296+1764)*1+lsi)*1]), &(stack[((hsi*1008+756)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(stack[((hsi*4536+3060)*1+lsi)*1]), &(stack[((hsi*3024+9864)*1+lsi)*1]), &(stack[((hsi*2268+7596)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4536+3060)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
