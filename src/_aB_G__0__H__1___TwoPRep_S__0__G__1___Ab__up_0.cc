#include <libint2.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HG.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IF.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KD.h>
#include <HRRPart1bra0ket0KP.h>
#include <HRRPart1bra0ket0LP.h>
#include <_aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2775)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+7500)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+8445)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+9705)*1+lsi)*1]), &(stack[((hsi*1260+8445)*1+lsi)*1]), &(stack[((hsi*945+7500)*1+lsi)*1]),15);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1620+11595)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]),15);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*2520+13215)*1+lsi)*1]), &(stack[((hsi*1620+11595)*1+lsi)*1]), &(stack[((hsi*1260+8445)*1+lsi)*1]),15);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*3150+15735)*1+lsi)*1]), &(stack[((hsi*2520+13215)*1+lsi)*1]), &(stack[((hsi*1890+9705)*1+lsi)*1]),15);
HRRPart1bra0ket0LP(inteval, &(stack[((hsi*2025+7500)*1+lsi)*1]), &(stack[((hsi*825+1950)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]),15);
HRRPart1bra0ket0KD(inteval, &(stack[((hsi*3240+18885)*1+lsi)*1]), &(stack[((hsi*2025+7500)*1+lsi)*1]), &(stack[((hsi*1620+11595)*1+lsi)*1]),15);
HRRPart1bra0ket0IF(inteval, &(stack[((hsi*4200+7500)*1+lsi)*1]), &(stack[((hsi*3240+18885)*1+lsi)*1]), &(stack[((hsi*2520+13215)*1+lsi)*1]),15);
HRRPart1bra0ket0HG(inteval, &(stack[((hsi*4725+2775)*1+lsi)*1]), &(stack[((hsi*4200+7500)*1+lsi)*1]), &(stack[((hsi*3150+15735)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4725+2775)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
