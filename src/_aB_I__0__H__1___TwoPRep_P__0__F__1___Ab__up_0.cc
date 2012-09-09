#include <libint2.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8320)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1764+25960)*1+lsi)*1]), &(stack[((hsi*784+588)*1+lsi)*1]), &(stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+27724)*1+lsi)*1]), &(stack[((hsi*1008+1372)*1+lsi)*1]), &(stack[((hsi*784+588)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*3528+30076)*1+lsi)*1]), &(stack[((hsi*2352+27724)*1+lsi)*1]), &(stack[((hsi*1764+25960)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+33604)*1+lsi)*1]), &(stack[((hsi*1260+2380)*1+lsi)*1]), &(stack[((hsi*1008+1372)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*4704+36628)*1+lsi)*1]), &(stack[((hsi*3024+33604)*1+lsi)*1]), &(stack[((hsi*2352+27724)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*5880+41332)*1+lsi)*1]), &(stack[((hsi*4704+36628)*1+lsi)*1]), &(stack[((hsi*3528+30076)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*2268+25960)*1+lsi)*1]), &(stack[((hsi*1008+4396)*1+lsi)*1]), &(stack[((hsi*756+3640)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+28228)*1+lsi)*1]), &(stack[((hsi*1296+5404)*1+lsi)*1]), &(stack[((hsi*1008+4396)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*4536+31252)*1+lsi)*1]), &(stack[((hsi*3024+28228)*1+lsi)*1]), &(stack[((hsi*2268+25960)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+35788)*1+lsi)*1]), &(stack[((hsi*1620+6700)*1+lsi)*1]), &(stack[((hsi*1296+5404)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+0)*1+lsi)*1]), &(stack[((hsi*3888+35788)*1+lsi)*1]), &(stack[((hsi*3024+28228)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*7560+47212)*1+lsi)*1]), &(stack[((hsi*6048+0)*1+lsi)*1]), &(stack[((hsi*4536+31252)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*17640+8320)*1+lsi)*1]), &(stack[((hsi*7560+47212)*1+lsi)*1]), &(stack[((hsi*5880+41332)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*17640+8320)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
