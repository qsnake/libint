#include <libint2.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_G__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1950)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+5100)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+6045)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+7305)*1+lsi)*1]), &(stack[((hsi*1260+6045)*1+lsi)*1]), &(stack[((hsi*945+5100)*1+lsi)*1]),15);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1620+9195)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]),15);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*2520+10815)*1+lsi)*1]), &(stack[((hsi*1620+9195)*1+lsi)*1]), &(stack[((hsi*1260+6045)*1+lsi)*1]),15);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*3150+1950)*1+lsi)*1]), &(stack[((hsi*2520+10815)*1+lsi)*1]), &(stack[((hsi*1890+7305)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3150+1950)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
