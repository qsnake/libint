#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__K__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1212)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+3372)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]), &(stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+4020)*1+lsi)*1]), &(stack[((hsi*330+486)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+4830)*1+lsi)*1]), &(stack[((hsi*810+4020)*1+lsi)*1]), &(stack[((hsi*648+3372)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*990+6126)*1+lsi)*1]), &(stack[((hsi*396+816)*1+lsi)*1]), &(stack[((hsi*330+486)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*1620+7116)*1+lsi)*1]), &(stack[((hsi*990+6126)*1+lsi)*1]), &(stack[((hsi*810+4020)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*2160+1212)*1+lsi)*1]), &(stack[((hsi*1620+7116)*1+lsi)*1]), &(stack[((hsi*1296+4830)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2160+1212)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
