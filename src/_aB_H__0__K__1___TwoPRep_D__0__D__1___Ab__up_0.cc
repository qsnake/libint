#include <libint2.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11560)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+38776)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+41044)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+43879)*1+lsi)*1]), &(stack[((hsi*2835+41044)*1+lsi)*1]), &(stack[((hsi*2268+38776)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+38776)*1+lsi)*1]), &(stack[((hsi*1260+3864)*1+lsi)*1]), &(stack[((hsi*1008+2856)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*1540+5124)*1+lsi)*1]), &(stack[((hsi*1260+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+48415)*1+lsi)*1]), &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*3024+38776)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*13608+54463)*1+lsi)*1]), &(stack[((hsi*6048+48415)*1+lsi)*1]), &(stack[((hsi*4536+43879)*1+lsi)*1]),216);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+38776)*1+lsi)*1]), &(stack[((hsi*1620+7960)*1+lsi)*1]), &(stack[((hsi*1296+6664)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*1980+9580)*1+lsi)*1]), &(stack[((hsi*1620+7960)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+68071)*1+lsi)*1]), &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*3888+38776)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*18144+75847)*1+lsi)*1]), &(stack[((hsi*7776+68071)*1+lsi)*1]), &(stack[((hsi*6048+48415)*1+lsi)*1]),216);
HRRPart0bra0ket0hd(inteval, &(stack[((hsi*27216+11560)*1+lsi)*1]), &(stack[((hsi*18144+75847)*1+lsi)*1]), &(stack[((hsi*13608+54463)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*27216+11560)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
