#include <libint2.h>
#include <HRRPart0bra0ket0FP.h>
#include <HRRPart1bra0ket0DD.h>
#include <HRRPart1bra0ket0DP.h>
#include <HRRPart1bra0ket0FP.h>
#include <_aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,775)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0DP(inteval, &(stack[((hsi*180+1855)*1+lsi)*1]), &(stack[((hsi*100+60)*1+lsi)*1]), &(stack[((hsi*60+0)*1+lsi)*1]),10);
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*300+2035)*1+lsi)*1]), &(stack[((hsi*150+160)*1+lsi)*1]), &(stack[((hsi*100+60)*1+lsi)*1]),10);
HRRPart1bra0ket0DD(inteval, &(stack[((hsi*360+2335)*1+lsi)*1]), &(stack[((hsi*300+2035)*1+lsi)*1]), &(stack[((hsi*180+1855)*1+lsi)*1]),10);
HRRPart1bra0ket0DP(inteval, &(stack[((hsi*270+1855)*1+lsi)*1]), &(stack[((hsi*150+400)*1+lsi)*1]), &(stack[((hsi*90+310)*1+lsi)*1]),15);
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*450+2695)*1+lsi)*1]), &(stack[((hsi*225+550)*1+lsi)*1]), &(stack[((hsi*150+400)*1+lsi)*1]),15);
HRRPart1bra0ket0DD(inteval, &(stack[((hsi*540+0)*1+lsi)*1]), &(stack[((hsi*450+2695)*1+lsi)*1]), &(stack[((hsi*270+1855)*1+lsi)*1]),15);
HRRPart0bra0ket0FP(inteval, &(stack[((hsi*1080+775)*1+lsi)*1]), &(stack[((hsi*540+0)*1+lsi)*1]), &(stack[((hsi*360+2335)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1080+775)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
