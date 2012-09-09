#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4096)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+11656)*1+lsi)*1]), &(stack[((hsi*540+420)*1+lsi)*1]), &(stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+12916)*1+lsi)*1]), &(stack[((hsi*756+1548)*1+lsi)*1]), &(stack[((hsi*588+960)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*3780+14680)*1+lsi)*1]), &(stack[((hsi*1764+12916)*1+lsi)*1]), &(stack[((hsi*1260+11656)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+18460)*1+lsi)*1]), &(stack[((hsi*1008+3088)*1+lsi)*1]), &(stack[((hsi*784+2304)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*5292+20812)*1+lsi)*1]), &(stack[((hsi*2352+18460)*1+lsi)*1]), &(stack[((hsi*1764+12916)*1+lsi)*1]),84);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*7560+4096)*1+lsi)*1]), &(stack[((hsi*5292+20812)*1+lsi)*1]), &(stack[((hsi*3780+14680)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*7560+4096)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
