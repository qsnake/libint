#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__I__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3924)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+11484)*1+lsi)*1]), &(stack[((hsi*540+420)*1+lsi)*1]), &(stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+12744)*1+lsi)*1]), &(stack[((hsi*675+960)*1+lsi)*1]), &(stack[((hsi*540+420)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*2520+14364)*1+lsi)*1]), &(stack[((hsi*1620+12744)*1+lsi)*1]), &(stack[((hsi*1260+11484)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+11484)*1+lsi)*1]), &(stack[((hsi*756+2223)*1+lsi)*1]), &(stack[((hsi*588+1635)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+16884)*1+lsi)*1]), &(stack[((hsi*945+2979)*1+lsi)*1]), &(stack[((hsi*756+2223)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*3528+0)*1+lsi)*1]), &(stack[((hsi*2268+16884)*1+lsi)*1]), &(stack[((hsi*1764+11484)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*7560+3924)*1+lsi)*1]), &(stack[((hsi*3528+0)*1+lsi)*1]), &(stack[((hsi*2520+14364)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*7560+3924)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
