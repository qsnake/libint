#include <libint2.h>
#include <HRRPart0bra0ket0PP.h>
#include <HRRPart1bra0ket0PP.h>
#include <_aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,81)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0PP(inteval, &(stack[((hsi*27+162)*1+lsi)*1]), &(stack[((hsi*18+9)*1+lsi)*1]), &(stack[((hsi*9+0)*1+lsi)*1]),3);
HRRPart1bra0ket0PP(inteval, &(stack[((hsi*54+189)*1+lsi)*1]), &(stack[((hsi*36+45)*1+lsi)*1]), &(stack[((hsi*18+27)*1+lsi)*1]),6);
HRRPart0bra0ket0PP(inteval, &(stack[((hsi*81+81)*1+lsi)*1]), &(stack[((hsi*54+189)*1+lsi)*1]), &(stack[((hsi*27+162)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*81+81)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
