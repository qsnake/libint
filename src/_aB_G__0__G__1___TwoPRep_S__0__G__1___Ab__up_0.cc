#include <libint2.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GF.h>
#include <HRRPart1bra0ket0GG.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2175)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+5550)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]), &(stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+6225)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]), &(stack[((hsi*315+225)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+7170)*1+lsi)*1]), &(stack[((hsi*945+6225)*1+lsi)*1]), &(stack[((hsi*675+5550)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+8520)*1+lsi)*1]), &(stack[((hsi*540+960)*1+lsi)*1]), &(stack[((hsi*420+540)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+9780)*1+lsi)*1]), &(stack[((hsi*1260+8520)*1+lsi)*1]), &(stack[((hsi*945+6225)*1+lsi)*1]),15);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*2250+11670)*1+lsi)*1]), &(stack[((hsi*1890+9780)*1+lsi)*1]), &(stack[((hsi*1350+7170)*1+lsi)*1]),15);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1620+5550)*1+lsi)*1]), &(stack[((hsi*675+1500)*1+lsi)*1]), &(stack[((hsi*540+960)*1+lsi)*1]),15);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*2520+13920)*1+lsi)*1]), &(stack[((hsi*1620+5550)*1+lsi)*1]), &(stack[((hsi*1260+8520)*1+lsi)*1]),15);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*3150+5550)*1+lsi)*1]), &(stack[((hsi*2520+13920)*1+lsi)*1]), &(stack[((hsi*1890+9780)*1+lsi)*1]),15);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*3375+2175)*1+lsi)*1]), &(stack[((hsi*3150+5550)*1+lsi)*1]), &(stack[((hsi*2250+11670)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3375+2175)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
