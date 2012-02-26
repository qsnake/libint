#include <libint2.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GF.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0IP.h>
#include <_aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1500)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+3750)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+4425)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+5370)*1+lsi)*1]), &(stack[((hsi*945+4425)*1+lsi)*1]), &(stack[((hsi*675+3750)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+6720)*1+lsi)*1]), &(stack[((hsi*540+960)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+7980)*1+lsi)*1]), &(stack[((hsi*1260+6720)*1+lsi)*1]), &(stack[((hsi*945+4425)*1+lsi)*1]),15);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*2250+1500)*1+lsi)*1]), &(stack[((hsi*1890+7980)*1+lsi)*1]), &(stack[((hsi*1350+5370)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2250+1500)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
