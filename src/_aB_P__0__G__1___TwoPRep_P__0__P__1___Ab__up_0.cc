#include <libint2.h>
#include <HRRPart0bra0ket0PP.h>
#include <HRRPart1bra0ket0GP.h>
#include <_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,324)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*135+729)*1+lsi)*1]), &(stack[((hsi*63+45)*1+lsi)*1]), &(stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*270+864)*1+lsi)*1]), &(stack[((hsi*126+198)*1+lsi)*1]), &(stack[((hsi*90+108)*1+lsi)*1]),6);
HRRPart0bra0ket0PP(inteval, &(stack[((hsi*405+324)*1+lsi)*1]), &(stack[((hsi*270+864)*1+lsi)*1]), &(stack[((hsi*135+729)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*405+324)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
