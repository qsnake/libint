#include <libint2.h>
#include <HRRPart1bra0ket0FD.h>
#include <HRRPart1bra0ket0FF.h>
#include <HRRPart1bra0ket0FP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1110)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*450+2610)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),15);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+3060)*1+lsi)*1]), &(stack[((hsi*315+375)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]),15);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*900+3735)*1+lsi)*1]), &(stack[((hsi*675+3060)*1+lsi)*1]), &(stack[((hsi*450+2610)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+4635)*1+lsi)*1]), &(stack[((hsi*420+690)*1+lsi)*1]), &(stack[((hsi*315+375)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+5580)*1+lsi)*1]), &(stack[((hsi*945+4635)*1+lsi)*1]), &(stack[((hsi*675+3060)*1+lsi)*1]),15);
HRRPart1bra0ket0FF(inteval, &(stack[((hsi*1500+1110)*1+lsi)*1]), &(stack[((hsi*1350+5580)*1+lsi)*1]), &(stack[((hsi*900+3735)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1500+1110)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
