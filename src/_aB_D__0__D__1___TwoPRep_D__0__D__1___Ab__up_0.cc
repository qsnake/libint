#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,961)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*108+2257)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]), &(stack[((hsi*36+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+2365)*1+lsi)*1]), &(stack[((hsi*90+96)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*216+2545)*1+lsi)*1]), &(stack[((hsi*180+2365)*1+lsi)*1]), &(stack[((hsi*108+2257)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*180+2257)*1+lsi)*1]), &(stack[((hsi*100+246)*1+lsi)*1]), &(stack[((hsi*60+186)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+2761)*1+lsi)*1]), &(stack[((hsi*150+346)*1+lsi)*1]), &(stack[((hsi*100+246)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*360+0)*1+lsi)*1]), &(stack[((hsi*300+2761)*1+lsi)*1]), &(stack[((hsi*180+2257)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*648+2761)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]), &(stack[((hsi*216+2545)*1+lsi)*1]),36);
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*270+2257)*1+lsi)*1]), &(stack[((hsi*150+586)*1+lsi)*1]), &(stack[((hsi*90+496)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+3409)*1+lsi)*1]), &(stack[((hsi*225+736)*1+lsi)*1]), &(stack[((hsi*150+586)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*540+360)*1+lsi)*1]), &(stack[((hsi*450+3409)*1+lsi)*1]), &(stack[((hsi*270+2257)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1080+3409)*1+lsi)*1]), &(stack[((hsi*540+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*1296+961)*1+lsi)*1]), &(stack[((hsi*1080+3409)*1+lsi)*1]), &(stack[((hsi*648+2761)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1296+961)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
