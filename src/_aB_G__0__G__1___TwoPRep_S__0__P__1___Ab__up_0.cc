#include <libint2.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,540)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+540)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*675+540)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
