#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3379)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+9427)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]), &(stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+9931)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+10579)*1+lsi)*1]), &(stack[((hsi*648+9931)*1+lsi)*1]), &(stack[((hsi*504+9427)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+9427)*1+lsi)*1]), &(stack[((hsi*360+934)*1+lsi)*1]), &(stack[((hsi*280+654)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+11587)*1+lsi)*1]), &(stack[((hsi*450+1294)*1+lsi)*1]), &(stack[((hsi*360+934)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1680+0)*1+lsi)*1]), &(stack[((hsi*1080+11587)*1+lsi)*1]), &(stack[((hsi*840+9427)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*3024+11587)*1+lsi)*1]), &(stack[((hsi*1680+0)*1+lsi)*1]), &(stack[((hsi*1008+10579)*1+lsi)*1]),168);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+9427)*1+lsi)*1]), &(stack[((hsi*540+2164)*1+lsi)*1]), &(stack[((hsi*420+1744)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+14611)*1+lsi)*1]), &(stack[((hsi*675+2704)*1+lsi)*1]), &(stack[((hsi*540+2164)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*2520+16231)*1+lsi)*1]), &(stack[((hsi*1620+14611)*1+lsi)*1]), &(stack[((hsi*1260+9427)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*5040+18751)*1+lsi)*1]), &(stack[((hsi*2520+16231)*1+lsi)*1]), &(stack[((hsi*1680+0)*1+lsi)*1]),168);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*6048+3379)*1+lsi)*1]), &(stack[((hsi*5040+18751)*1+lsi)*1]), &(stack[((hsi*3024+11587)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*6048+3379)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
