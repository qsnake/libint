#include <libint2.h>
#include <HRRPart0bra0ket0HP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GF.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0IP.h>
#include <_aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4900)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+14350)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+15295)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1890+16618)*1+lsi)*1]), &(stack[((hsi*1323+15295)*1+lsi)*1]), &(stack[((hsi*945+14350)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+18508)*1+lsi)*1]), &(stack[((hsi*756+1344)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+20272)*1+lsi)*1]), &(stack[((hsi*1764+18508)*1+lsi)*1]), &(stack[((hsi*1323+15295)*1+lsi)*1]),21);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*3150+22918)*1+lsi)*1]), &(stack[((hsi*2646+20272)*1+lsi)*1]), &(stack[((hsi*1890+16618)*1+lsi)*1]),21);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*1260+14350)*1+lsi)*1]), &(stack[((hsi*588+2520)*1+lsi)*1]), &(stack[((hsi*420+2100)*1+lsi)*1]),28);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1764+15610)*1+lsi)*1]), &(stack[((hsi*784+3108)*1+lsi)*1]), &(stack[((hsi*588+2520)*1+lsi)*1]),28);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*2520+17374)*1+lsi)*1]), &(stack[((hsi*1764+15610)*1+lsi)*1]), &(stack[((hsi*1260+14350)*1+lsi)*1]),28);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*2352+0)*1+lsi)*1]), &(stack[((hsi*1008+3892)*1+lsi)*1]), &(stack[((hsi*784+3108)*1+lsi)*1]),28);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*3528+26068)*1+lsi)*1]), &(stack[((hsi*2352+0)*1+lsi)*1]), &(stack[((hsi*1764+15610)*1+lsi)*1]),28);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*4200+0)*1+lsi)*1]), &(stack[((hsi*3528+26068)*1+lsi)*1]), &(stack[((hsi*2520+17374)*1+lsi)*1]),28);
HRRPart0bra0ket0HP(inteval, &(stack[((hsi*9450+4900)*1+lsi)*1]), &(stack[((hsi*4200+0)*1+lsi)*1]), &(stack[((hsi*3150+22918)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*9450+4900)*1+lsi)*1]);
/** Number of flops = 0 */
}

};