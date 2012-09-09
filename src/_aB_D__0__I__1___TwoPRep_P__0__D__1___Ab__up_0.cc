#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_D__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__I__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1744)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+4768)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]), &(stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+5272)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+5920)*1+lsi)*1]), &(stack[((hsi*648+5272)*1+lsi)*1]), &(stack[((hsi*504+4768)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+4768)*1+lsi)*1]), &(stack[((hsi*360+934)*1+lsi)*1]), &(stack[((hsi*280+654)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+6928)*1+lsi)*1]), &(stack[((hsi*450+1294)*1+lsi)*1]), &(stack[((hsi*360+934)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1680+0)*1+lsi)*1]), &(stack[((hsi*1080+6928)*1+lsi)*1]), &(stack[((hsi*840+4768)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*3024+1744)*1+lsi)*1]), &(stack[((hsi*1680+0)*1+lsi)*1]), &(stack[((hsi*1008+5920)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3024+1744)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
