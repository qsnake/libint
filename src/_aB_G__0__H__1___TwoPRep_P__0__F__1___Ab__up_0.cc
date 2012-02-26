#include <libint2.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_G__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4680)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+14130)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+15075)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+16335)*1+lsi)*1]), &(stack[((hsi*1260+15075)*1+lsi)*1]), &(stack[((hsi*945+14130)*1+lsi)*1]),15);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1620+18225)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]),15);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*2520+19845)*1+lsi)*1]), &(stack[((hsi*1620+18225)*1+lsi)*1]), &(stack[((hsi*1260+15075)*1+lsi)*1]),15);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*3150+22365)*1+lsi)*1]), &(stack[((hsi*2520+19845)*1+lsi)*1]), &(stack[((hsi*1890+16335)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+14130)*1+lsi)*1]), &(stack[((hsi*588+2391)*1+lsi)*1]), &(stack[((hsi*441+1950)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+15453)*1+lsi)*1]), &(stack[((hsi*756+2979)*1+lsi)*1]), &(stack[((hsi*588+2391)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+17217)*1+lsi)*1]), &(stack[((hsi*1764+15453)*1+lsi)*1]), &(stack[((hsi*1323+14130)*1+lsi)*1]),21);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*2268+0)*1+lsi)*1]), &(stack[((hsi*945+3735)*1+lsi)*1]), &(stack[((hsi*756+2979)*1+lsi)*1]),21);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*3528+25515)*1+lsi)*1]), &(stack[((hsi*2268+0)*1+lsi)*1]), &(stack[((hsi*1764+15453)*1+lsi)*1]),21);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*4410+0)*1+lsi)*1]), &(stack[((hsi*3528+25515)*1+lsi)*1]), &(stack[((hsi*2646+17217)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*9450+4680)*1+lsi)*1]), &(stack[((hsi*4410+0)*1+lsi)*1]), &(stack[((hsi*3150+22365)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*9450+4680)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
