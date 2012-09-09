#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_I__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__I__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6976)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+21088)*1+lsi)*1]), &(stack[((hsi*1008+784)*1+lsi)*1]), &(stack[((hsi*784+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+23440)*1+lsi)*1]), &(stack[((hsi*1260+1792)*1+lsi)*1]), &(stack[((hsi*1008+784)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*4704+26464)*1+lsi)*1]), &(stack[((hsi*3024+23440)*1+lsi)*1]), &(stack[((hsi*2352+21088)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+21088)*1+lsi)*1]), &(stack[((hsi*1296+4060)*1+lsi)*1]), &(stack[((hsi*1008+3052)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+0)*1+lsi)*1]), &(stack[((hsi*1620+5356)*1+lsi)*1]), &(stack[((hsi*1296+4060)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+31168)*1+lsi)*1]), &(stack[((hsi*3888+0)*1+lsi)*1]), &(stack[((hsi*3024+21088)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*14112+6976)*1+lsi)*1]), &(stack[((hsi*6048+31168)*1+lsi)*1]), &(stack[((hsi*4704+26464)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*14112+6976)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
