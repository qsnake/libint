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
#include <_aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3045)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+7770)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+8715)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1890+10038)*1+lsi)*1]), &(stack[((hsi*1323+8715)*1+lsi)*1]), &(stack[((hsi*945+7770)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+11928)*1+lsi)*1]), &(stack[((hsi*756+1344)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+13692)*1+lsi)*1]), &(stack[((hsi*1764+11928)*1+lsi)*1]), &(stack[((hsi*1323+8715)*1+lsi)*1]),21);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*3150+16338)*1+lsi)*1]), &(stack[((hsi*2646+13692)*1+lsi)*1]), &(stack[((hsi*1890+10038)*1+lsi)*1]),21);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*2268+7770)*1+lsi)*1]), &(stack[((hsi*945+2100)*1+lsi)*1]), &(stack[((hsi*756+1344)*1+lsi)*1]),21);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*3528+19488)*1+lsi)*1]), &(stack[((hsi*2268+7770)*1+lsi)*1]), &(stack[((hsi*1764+11928)*1+lsi)*1]),21);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*4410+7770)*1+lsi)*1]), &(stack[((hsi*3528+19488)*1+lsi)*1]), &(stack[((hsi*2646+13692)*1+lsi)*1]),21);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*4725+3045)*1+lsi)*1]), &(stack[((hsi*4410+7770)*1+lsi)*1]), &(stack[((hsi*3150+16338)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4725+3045)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
