#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4096)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+12196)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+12871)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1350+13816)*1+lsi)*1]), &(stack[((hsi*945+12871)*1+lsi)*1]), &(stack[((hsi*675+12196)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*945+12196)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]), &(stack[((hsi*315+960)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1323+15166)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1323+15166)*1+lsi)*1]), &(stack[((hsi*945+12196)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*4050+15166)*1+lsi)*1]), &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1350+13816)*1+lsi)*1]),90);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*1260+12196)*1+lsi)*1]), &(stack[((hsi*588+2724)*1+lsi)*1]), &(stack[((hsi*420+2304)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1764+19216)*1+lsi)*1]), &(stack[((hsi*784+3312)*1+lsi)*1]), &(stack[((hsi*588+2724)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*2520+20980)*1+lsi)*1]), &(stack[((hsi*1764+19216)*1+lsi)*1]), &(stack[((hsi*1260+12196)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*5670+23500)*1+lsi)*1]), &(stack[((hsi*2520+20980)*1+lsi)*1]), &(stack[((hsi*1890+0)*1+lsi)*1]),90);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*8100+4096)*1+lsi)*1]), &(stack[((hsi*5670+23500)*1+lsi)*1]), &(stack[((hsi*4050+15166)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*8100+4096)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
