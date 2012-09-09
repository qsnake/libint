#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <_aB_G__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__I__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1792)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*1260+4312)*1+lsi)*1]), &(stack[((hsi*588+420)*1+lsi)*1]), &(stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*1764+5572)*1+lsi)*1]), &(stack[((hsi*784+1008)*1+lsi)*1]), &(stack[((hsi*588+420)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*2520+1792)*1+lsi)*1]), &(stack[((hsi*1764+5572)*1+lsi)*1]), &(stack[((hsi*1260+4312)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2520+1792)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
