#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8704)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+26848)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+29872)*1+lsi)*1]), &(stack[((hsi*1540+2268)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+33652)*1+lsi)*1]), &(stack[((hsi*3780+29872)*1+lsi)*1]), &(stack[((hsi*3024+26848)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+26848)*1+lsi)*1]), &(stack[((hsi*1620+5104)*1+lsi)*1]), &(stack[((hsi*1296+3808)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*1980+6724)*1+lsi)*1]), &(stack[((hsi*1620+5104)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+39700)*1+lsi)*1]), &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*3888+26848)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*18144+8704)*1+lsi)*1]), &(stack[((hsi*7776+39700)*1+lsi)*1]), &(stack[((hsi*6048+33652)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*18144+8704)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
