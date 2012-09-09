#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_K__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_K__0__I__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5904)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+15984)*1+lsi)*1]), &(stack[((hsi*1296+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+19008)*1+lsi)*1]), &(stack[((hsi*1620+2304)*1+lsi)*1]), &(stack[((hsi*1296+1008)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+22896)*1+lsi)*1]), &(stack[((hsi*3888+19008)*1+lsi)*1]), &(stack[((hsi*3024+15984)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+28944)*1+lsi)*1]), &(stack[((hsi*1980+3924)*1+lsi)*1]), &(stack[((hsi*1620+2304)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+33804)*1+lsi)*1]), &(stack[((hsi*4860+28944)*1+lsi)*1]), &(stack[((hsi*3888+19008)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*10080+5904)*1+lsi)*1]), &(stack[((hsi*7776+33804)*1+lsi)*1]), &(stack[((hsi*6048+22896)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*10080+5904)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
