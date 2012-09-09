#include <libint2.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1110)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+2610)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+3060)*1+lsi)*1]), &(stack[((hsi*315+375)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*900+3735)*1+lsi)*1]), &(stack[((hsi*675+3060)*1+lsi)*1]), &(stack[((hsi*450+2610)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+4635)*1+lsi)*1]), &(stack[((hsi*420+690)*1+lsi)*1]), &(stack[((hsi*315+375)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1350+5580)*1+lsi)*1]), &(stack[((hsi*945+4635)*1+lsi)*1]), &(stack[((hsi*675+3060)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*1500+1110)*1+lsi)*1]), &(stack[((hsi*1350+5580)*1+lsi)*1]), &(stack[((hsi*900+3735)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1500+1110)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
