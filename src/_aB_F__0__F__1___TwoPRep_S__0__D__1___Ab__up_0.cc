#include <libint2.h>
#include <HRRPart1bra0ket0FD.h>
#include <HRRPart1bra0ket0FP.h>
#include <HRRPart1bra0ket0GP.h>
#include <_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,460)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*300+1060)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]), &(stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*450+1360)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]),10);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*600+460)*1+lsi)*1]), &(stack[((hsi*450+1360)*1+lsi)*1]), &(stack[((hsi*300+1060)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*600+460)*1+lsi)*1]);
/** Number of flops = 0 */
}

};