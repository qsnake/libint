#include <libint2.h>
#include <HRRPart0bra0ket0DD.h>
#include <HRRPart0bra0ket0DP.h>
#include <HRRPart0bra0ket0FP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1984)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*270+5224)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]), &(stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*378+5494)*1+lsi)*1]), &(stack[((hsi*168+216)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]),6);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*540+5872)*1+lsi)*1]), &(stack[((hsi*378+5494)*1+lsi)*1]), &(stack[((hsi*270+5224)*1+lsi)*1]),6);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*450+5224)*1+lsi)*1]), &(stack[((hsi*210+534)*1+lsi)*1]), &(stack[((hsi*150+384)*1+lsi)*1]),10);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+6412)*1+lsi)*1]), &(stack[((hsi*280+744)*1+lsi)*1]), &(stack[((hsi*210+534)*1+lsi)*1]),10);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*900+0)*1+lsi)*1]), &(stack[((hsi*630+6412)*1+lsi)*1]), &(stack[((hsi*450+5224)*1+lsi)*1]),10);
HRRPart0bra0ket0DP(inteval, &(stack[((hsi*1620+6412)*1+lsi)*1]), &(stack[((hsi*900+0)*1+lsi)*1]), &(stack[((hsi*540+5872)*1+lsi)*1]),90);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+5224)*1+lsi)*1]), &(stack[((hsi*315+1249)*1+lsi)*1]), &(stack[((hsi*225+1024)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+8032)*1+lsi)*1]), &(stack[((hsi*420+1564)*1+lsi)*1]), &(stack[((hsi*315+1249)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+8977)*1+lsi)*1]), &(stack[((hsi*945+8032)*1+lsi)*1]), &(stack[((hsi*675+5224)*1+lsi)*1]),15);
HRRPart0bra0ket0FP(inteval, &(stack[((hsi*2700+10327)*1+lsi)*1]), &(stack[((hsi*1350+8977)*1+lsi)*1]), &(stack[((hsi*900+0)*1+lsi)*1]),90);
HRRPart0bra0ket0DD(inteval, &(stack[((hsi*3240+1984)*1+lsi)*1]), &(stack[((hsi*2700+10327)*1+lsi)*1]), &(stack[((hsi*1620+6412)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3240+1984)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
