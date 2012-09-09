#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2624)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+7664)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]), &(stack[((hsi*168+0)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+8168)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]), &(stack[((hsi*216+168)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+8816)*1+lsi)*1]), &(stack[((hsi*648+8168)*1+lsi)*1]), &(stack[((hsi*504+7664)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+9824)*1+lsi)*1]), &(stack[((hsi*330+654)*1+lsi)*1]), &(stack[((hsi*270+384)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+10634)*1+lsi)*1]), &(stack[((hsi*810+9824)*1+lsi)*1]), &(stack[((hsi*648+8168)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*1680+11930)*1+lsi)*1]), &(stack[((hsi*1296+10634)*1+lsi)*1]), &(stack[((hsi*1008+8816)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+7664)*1+lsi)*1]), &(stack[((hsi*360+1264)*1+lsi)*1]), &(stack[((hsi*280+984)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+8504)*1+lsi)*1]), &(stack[((hsi*450+1624)*1+lsi)*1]), &(stack[((hsi*360+1264)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1680+9584)*1+lsi)*1]), &(stack[((hsi*1080+8504)*1+lsi)*1]), &(stack[((hsi*840+7664)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*550+2074)*1+lsi)*1]), &(stack[((hsi*450+1624)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+13610)*1+lsi)*1]), &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*1080+8504)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*2800+15770)*1+lsi)*1]), &(stack[((hsi*2160+13610)*1+lsi)*1]), &(stack[((hsi*1680+9584)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*5040+2624)*1+lsi)*1]), &(stack[((hsi*2800+15770)*1+lsi)*1]), &(stack[((hsi*1680+11930)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*5040+2624)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
