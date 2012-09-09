#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2176)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+6064)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]), &(stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+6712)*1+lsi)*1]), &(stack[((hsi*330+486)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+7522)*1+lsi)*1]), &(stack[((hsi*810+6712)*1+lsi)*1]), &(stack[((hsi*648+6064)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+6064)*1+lsi)*1]), &(stack[((hsi*450+1176)*1+lsi)*1]), &(stack[((hsi*360+816)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+8818)*1+lsi)*1]), &(stack[((hsi*550+1626)*1+lsi)*1]), &(stack[((hsi*450+1176)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+0)*1+lsi)*1]), &(stack[((hsi*1350+8818)*1+lsi)*1]), &(stack[((hsi*1080+6064)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*3888+2176)*1+lsi)*1]), &(stack[((hsi*2160+0)*1+lsi)*1]), &(stack[((hsi*1296+7522)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3888+2176)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
