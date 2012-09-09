#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__I__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,984)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+2664)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]), &(stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+3168)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+3816)*1+lsi)*1]), &(stack[((hsi*648+3168)*1+lsi)*1]), &(stack[((hsi*504+2664)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+4824)*1+lsi)*1]), &(stack[((hsi*330+654)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+5634)*1+lsi)*1]), &(stack[((hsi*810+4824)*1+lsi)*1]), &(stack[((hsi*648+3168)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*1680+984)*1+lsi)*1]), &(stack[((hsi*1296+5634)*1+lsi)*1]), &(stack[((hsi*1008+3816)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1680+984)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
