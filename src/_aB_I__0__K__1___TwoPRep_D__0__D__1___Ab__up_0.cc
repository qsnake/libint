#include <libint2.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14824)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+51112)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+54136)*1+lsi)*1]), &(stack[((hsi*1540+2268)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+57916)*1+lsi)*1]), &(stack[((hsi*3780+54136)*1+lsi)*1]), &(stack[((hsi*3024+51112)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+51112)*1+lsi)*1]), &(stack[((hsi*1620+5104)*1+lsi)*1]), &(stack[((hsi*1296+3808)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*1980+6724)*1+lsi)*1]), &(stack[((hsi*1620+5104)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+63964)*1+lsi)*1]), &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*3888+51112)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*18144+71740)*1+lsi)*1]), &(stack[((hsi*7776+63964)*1+lsi)*1]), &(stack[((hsi*6048+57916)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*4860+51112)*1+lsi)*1]), &(stack[((hsi*2025+10324)*1+lsi)*1]), &(stack[((hsi*1620+8704)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*6075+0)*1+lsi)*1]), &(stack[((hsi*2475+12349)*1+lsi)*1]), &(stack[((hsi*2025+10324)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*9720+89884)*1+lsi)*1]), &(stack[((hsi*6075+0)*1+lsi)*1]), &(stack[((hsi*4860+51112)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*23328+99604)*1+lsi)*1]), &(stack[((hsi*9720+89884)*1+lsi)*1]), &(stack[((hsi*7776+63964)*1+lsi)*1]),216);
HRRPart0bra0ket0id(inteval, &(stack[((hsi*36288+14824)*1+lsi)*1]), &(stack[((hsi*23328+99604)*1+lsi)*1]), &(stack[((hsi*18144+71740)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*36288+14824)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
