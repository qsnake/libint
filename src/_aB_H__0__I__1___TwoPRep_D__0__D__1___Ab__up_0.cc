#include <libint2.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9265)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+30433)*1+lsi)*1]), &(stack[((hsi*756+588)*1+lsi)*1]), &(stack[((hsi*588+0)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+32197)*1+lsi)*1]), &(stack[((hsi*945+1344)*1+lsi)*1]), &(stack[((hsi*756+588)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*3528+34465)*1+lsi)*1]), &(stack[((hsi*2268+32197)*1+lsi)*1]), &(stack[((hsi*1764+30433)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+30433)*1+lsi)*1]), &(stack[((hsi*1008+3073)*1+lsi)*1]), &(stack[((hsi*784+2289)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*1260+4081)*1+lsi)*1]), &(stack[((hsi*1008+3073)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*4704+37993)*1+lsi)*1]), &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*2352+30433)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*10584+42697)*1+lsi)*1]), &(stack[((hsi*4704+37993)*1+lsi)*1]), &(stack[((hsi*3528+34465)*1+lsi)*1]),168);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+30433)*1+lsi)*1]), &(stack[((hsi*1296+6349)*1+lsi)*1]), &(stack[((hsi*1008+5341)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+0)*1+lsi)*1]), &(stack[((hsi*1620+7645)*1+lsi)*1]), &(stack[((hsi*1296+6349)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+53281)*1+lsi)*1]), &(stack[((hsi*3888+0)*1+lsi)*1]), &(stack[((hsi*3024+30433)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*14112+59329)*1+lsi)*1]), &(stack[((hsi*6048+53281)*1+lsi)*1]), &(stack[((hsi*4704+37993)*1+lsi)*1]),168);
HRRPart0bra0ket0hd(inteval, &(stack[((hsi*21168+9265)*1+lsi)*1]), &(stack[((hsi*14112+59329)*1+lsi)*1]), &(stack[((hsi*10584+42697)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*21168+9265)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
