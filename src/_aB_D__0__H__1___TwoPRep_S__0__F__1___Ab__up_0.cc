#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,780)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+2040)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+2418)*1+lsi)*1]), &(stack[((hsi*216+294)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*756+2922)*1+lsi)*1]), &(stack[((hsi*504+2418)*1+lsi)*1]), &(stack[((hsi*378+2040)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+3678)*1+lsi)*1]), &(stack[((hsi*270+510)*1+lsi)*1]), &(stack[((hsi*216+294)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+4326)*1+lsi)*1]), &(stack[((hsi*648+3678)*1+lsi)*1]), &(stack[((hsi*504+2418)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*1260+780)*1+lsi)*1]), &(stack[((hsi*1008+4326)*1+lsi)*1]), &(stack[((hsi*756+2922)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1260+780)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
