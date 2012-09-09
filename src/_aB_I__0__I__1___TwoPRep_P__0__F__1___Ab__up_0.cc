#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10496)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+34016)*1+lsi)*1]), &(stack[((hsi*1008+784)*1+lsi)*1]), &(stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+36368)*1+lsi)*1]), &(stack[((hsi*1260+1792)*1+lsi)*1]), &(stack[((hsi*1008+784)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*4704+39392)*1+lsi)*1]), &(stack[((hsi*3024+36368)*1+lsi)*1]), &(stack[((hsi*2352+34016)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+44096)*1+lsi)*1]), &(stack[((hsi*1540+3052)*1+lsi)*1]), &(stack[((hsi*1260+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+47876)*1+lsi)*1]), &(stack[((hsi*3780+44096)*1+lsi)*1]), &(stack[((hsi*3024+36368)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*7840+53924)*1+lsi)*1]), &(stack[((hsi*6048+47876)*1+lsi)*1]), &(stack[((hsi*4704+39392)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+34016)*1+lsi)*1]), &(stack[((hsi*1296+5600)*1+lsi)*1]), &(stack[((hsi*1008+4592)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+37040)*1+lsi)*1]), &(stack[((hsi*1620+6896)*1+lsi)*1]), &(stack[((hsi*1296+5600)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+40928)*1+lsi)*1]), &(stack[((hsi*3888+37040)*1+lsi)*1]), &(stack[((hsi*3024+34016)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+46976)*1+lsi)*1]), &(stack[((hsi*1980+8516)*1+lsi)*1]), &(stack[((hsi*1620+6896)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+0)*1+lsi)*1]), &(stack[((hsi*4860+46976)*1+lsi)*1]), &(stack[((hsi*3888+37040)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*10080+61764)*1+lsi)*1]), &(stack[((hsi*7776+0)*1+lsi)*1]), &(stack[((hsi*6048+40928)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*23520+10496)*1+lsi)*1]), &(stack[((hsi*10080+61764)*1+lsi)*1]), &(stack[((hsi*7840+53924)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*23520+10496)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
