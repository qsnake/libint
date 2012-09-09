#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_K__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_K__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4680)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*2268+12240)*1+lsi)*1]), &(stack[((hsi*1008+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*3024+14508)*1+lsi)*1]), &(stack[((hsi*1296+1764)*1+lsi)*1]), &(stack[((hsi*1008+756)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*4536+17532)*1+lsi)*1]), &(stack[((hsi*3024+14508)*1+lsi)*1]), &(stack[((hsi*2268+12240)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+22068)*1+lsi)*1]), &(stack[((hsi*1620+3060)*1+lsi)*1]), &(stack[((hsi*1296+1764)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*6048+25956)*1+lsi)*1]), &(stack[((hsi*3888+22068)*1+lsi)*1]), &(stack[((hsi*3024+14508)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*7560+4680)*1+lsi)*1]), &(stack[((hsi*6048+25956)*1+lsi)*1]), &(stack[((hsi*4536+17532)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*7560+4680)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
