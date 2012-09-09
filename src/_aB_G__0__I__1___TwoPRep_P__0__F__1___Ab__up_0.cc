#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5904)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+18504)*1+lsi)*1]), &(stack[((hsi*540+420)*1+lsi)*1]), &(stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+19764)*1+lsi)*1]), &(stack[((hsi*675+960)*1+lsi)*1]), &(stack[((hsi*540+420)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*2520+21384)*1+lsi)*1]), &(stack[((hsi*1620+19764)*1+lsi)*1]), &(stack[((hsi*1260+18504)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2025+23904)*1+lsi)*1]), &(stack[((hsi*825+1635)*1+lsi)*1]), &(stack[((hsi*675+960)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*3240+25929)*1+lsi)*1]), &(stack[((hsi*2025+23904)*1+lsi)*1]), &(stack[((hsi*1620+19764)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*4200+29169)*1+lsi)*1]), &(stack[((hsi*3240+25929)*1+lsi)*1]), &(stack[((hsi*2520+21384)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+18504)*1+lsi)*1]), &(stack[((hsi*756+3048)*1+lsi)*1]), &(stack[((hsi*588+2460)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+20268)*1+lsi)*1]), &(stack[((hsi*945+3804)*1+lsi)*1]), &(stack[((hsi*756+3048)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*3528+22536)*1+lsi)*1]), &(stack[((hsi*2268+20268)*1+lsi)*1]), &(stack[((hsi*1764+18504)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+0)*1+lsi)*1]), &(stack[((hsi*1155+4749)*1+lsi)*1]), &(stack[((hsi*945+3804)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+33369)*1+lsi)*1]), &(stack[((hsi*2835+0)*1+lsi)*1]), &(stack[((hsi*2268+20268)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*5880+0)*1+lsi)*1]), &(stack[((hsi*4536+33369)*1+lsi)*1]), &(stack[((hsi*3528+22536)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*12600+5904)*1+lsi)*1]), &(stack[((hsi*5880+0)*1+lsi)*1]), &(stack[((hsi*4200+29169)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*12600+5904)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
