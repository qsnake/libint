#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5184)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+14256)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+17280)*1+lsi)*1]), &(stack[((hsi*1620+3564)*1+lsi)*1]), &(stack[((hsi*1296+2268)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*9072+5184)*1+lsi)*1]), &(stack[((hsi*3888+17280)*1+lsi)*1]), &(stack[((hsi*3024+14256)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*9072+5184)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
