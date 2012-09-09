#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3808)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+9856)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+12880)*1+lsi)*1]), &(stack[((hsi*1540+2268)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+3808)*1+lsi)*1]), &(stack[((hsi*3780+12880)*1+lsi)*1]), &(stack[((hsi*3024+9856)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*6048+3808)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
