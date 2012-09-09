#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2511)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+6399)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]), &(stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+7047)*1+lsi)*1]), &(stack[((hsi*450+846)*1+lsi)*1]), &(stack[((hsi*360+486)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*1944+8127)*1+lsi)*1]), &(stack[((hsi*1080+7047)*1+lsi)*1]), &(stack[((hsi*648+6399)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+10071)*1+lsi)*1]), &(stack[((hsi*675+1836)*1+lsi)*1]), &(stack[((hsi*540+1296)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*3240+11691)*1+lsi)*1]), &(stack[((hsi*1620+10071)*1+lsi)*1]), &(stack[((hsi*1080+7047)*1+lsi)*1]),108);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*3888+2511)*1+lsi)*1]), &(stack[((hsi*3240+11691)*1+lsi)*1]), &(stack[((hsi*1944+8127)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3888+2511)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
