#include <libint2.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_D__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,294)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+294)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*378+294)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
