#include <libint2.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2304)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+6354)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+7029)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+7974)*1+lsi)*1]), &(stack[((hsi*945+7029)*1+lsi)*1]), &(stack[((hsi*675+6354)*1+lsi)*1]),15);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+6354)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]), &(stack[((hsi*315+960)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+9324)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]),21);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1323+9324)*1+lsi)*1]), &(stack[((hsi*945+6354)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*4050+2304)*1+lsi)*1]), &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1350+7974)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4050+2304)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
