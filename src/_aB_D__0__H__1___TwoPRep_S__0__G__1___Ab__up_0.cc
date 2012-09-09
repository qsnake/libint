#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1110)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+3000)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+3378)*1+lsi)*1]), &(stack[((hsi*216+294)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*756+3882)*1+lsi)*1]), &(stack[((hsi*504+3378)*1+lsi)*1]), &(stack[((hsi*378+3000)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+4638)*1+lsi)*1]), &(stack[((hsi*270+510)*1+lsi)*1]), &(stack[((hsi*216+294)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+5286)*1+lsi)*1]), &(stack[((hsi*648+4638)*1+lsi)*1]), &(stack[((hsi*504+3378)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*1260+6294)*1+lsi)*1]), &(stack[((hsi*1008+5286)*1+lsi)*1]), &(stack[((hsi*756+3882)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+3000)*1+lsi)*1]), &(stack[((hsi*330+780)*1+lsi)*1]), &(stack[((hsi*270+510)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+7554)*1+lsi)*1]), &(stack[((hsi*810+3000)*1+lsi)*1]), &(stack[((hsi*648+4638)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*1680+3000)*1+lsi)*1]), &(stack[((hsi*1296+7554)*1+lsi)*1]), &(stack[((hsi*1008+5286)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(stack[((hsi*1890+1110)*1+lsi)*1]), &(stack[((hsi*1680+3000)*1+lsi)*1]), &(stack[((hsi*1260+6294)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1890+1110)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
