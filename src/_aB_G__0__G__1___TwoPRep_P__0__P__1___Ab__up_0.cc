#include <libint2.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart1bra0ket0GP.h>
#include <_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1296)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+3321)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+3996)*1+lsi)*1]), &(stack[((hsi*441+855)*1+lsi)*1]), &(stack[((hsi*315+540)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*2025+1296)*1+lsi)*1]), &(stack[((hsi*945+3996)*1+lsi)*1]), &(stack[((hsi*675+3321)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2025+1296)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
