#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8036)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+25676)*1+lsi)*1]), &(stack[((hsi*756+588)*1+lsi)*1]), &(stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+27440)*1+lsi)*1]), &(stack[((hsi*945+1344)*1+lsi)*1]), &(stack[((hsi*756+588)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*3528+29708)*1+lsi)*1]), &(stack[((hsi*2268+27440)*1+lsi)*1]), &(stack[((hsi*1764+25676)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+33236)*1+lsi)*1]), &(stack[((hsi*1155+2289)*1+lsi)*1]), &(stack[((hsi*945+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+36071)*1+lsi)*1]), &(stack[((hsi*2835+33236)*1+lsi)*1]), &(stack[((hsi*2268+27440)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*5880+40607)*1+lsi)*1]), &(stack[((hsi*4536+36071)*1+lsi)*1]), &(stack[((hsi*3528+29708)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+25676)*1+lsi)*1]), &(stack[((hsi*1008+4228)*1+lsi)*1]), &(stack[((hsi*784+3444)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+28028)*1+lsi)*1]), &(stack[((hsi*1260+5236)*1+lsi)*1]), &(stack[((hsi*1008+4228)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*4704+31052)*1+lsi)*1]), &(stack[((hsi*3024+28028)*1+lsi)*1]), &(stack[((hsi*2352+25676)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*1540+6496)*1+lsi)*1]), &(stack[((hsi*1260+5236)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+46487)*1+lsi)*1]), &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*3024+28028)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*7840+0)*1+lsi)*1]), &(stack[((hsi*6048+46487)*1+lsi)*1]), &(stack[((hsi*4704+31052)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*17640+8036)*1+lsi)*1]), &(stack[((hsi*7840+0)*1+lsi)*1]), &(stack[((hsi*5880+40607)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*17640+8036)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
