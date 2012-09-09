#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4096)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+11152)*1+lsi)*1]), &(stack[((hsi*1008+784)*1+lsi)*1]), &(stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+13504)*1+lsi)*1]), &(stack[((hsi*1296+2800)*1+lsi)*1]), &(stack[((hsi*1008+1792)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*7056+4096)*1+lsi)*1]), &(stack[((hsi*3024+13504)*1+lsi)*1]), &(stack[((hsi*2352+11152)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*7056+4096)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
