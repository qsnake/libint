#include <libint2.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,384)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*270+924)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]), &(stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*378+1194)*1+lsi)*1]), &(stack[((hsi*168+216)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]),6);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*540+384)*1+lsi)*1]), &(stack[((hsi*378+1194)*1+lsi)*1]), &(stack[((hsi*270+924)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*540+384)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
