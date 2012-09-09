#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <_aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,868)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*504+1876)*1+lsi)*1]), &(stack[((hsi*280+168)*1+lsi)*1]), &(stack[((hsi*168+0)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*840+2380)*1+lsi)*1]), &(stack[((hsi*420+448)*1+lsi)*1]), &(stack[((hsi*280+168)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*1008+868)*1+lsi)*1]), &(stack[((hsi*840+2380)*1+lsi)*1]), &(stack[((hsi*504+1876)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1008+868)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
