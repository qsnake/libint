#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,765)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*189+1899)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]), &(stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+2088)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*378+2340)*1+lsi)*1]), &(stack[((hsi*252+2088)*1+lsi)*1]), &(stack[((hsi*189+1899)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+1899)*1+lsi)*1]), &(stack[((hsi*168+381)*1+lsi)*1]), &(stack[((hsi*126+255)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+2718)*1+lsi)*1]), &(stack[((hsi*216+549)*1+lsi)*1]), &(stack[((hsi*168+381)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*756+0)*1+lsi)*1]), &(stack[((hsi*504+2718)*1+lsi)*1]), &(stack[((hsi*378+1899)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(stack[((hsi*1134+765)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]), &(stack[((hsi*378+2340)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1134+765)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
