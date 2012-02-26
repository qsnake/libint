#include <libint2.h>
#include <HRRPart0bra0ket0GD.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart0bra0ket0HP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0IP.h>
#include <_aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5440)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+16780)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+17725)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+18985)*1+lsi)*1]), &(stack[((hsi*1260+17725)*1+lsi)*1]), &(stack[((hsi*945+16780)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+16780)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+20875)*1+lsi)*1]), &(stack[((hsi*756+2304)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+0)*1+lsi)*1]), &(stack[((hsi*1764+20875)*1+lsi)*1]), &(stack[((hsi*1323+16780)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*5670+20875)*1+lsi)*1]), &(stack[((hsi*2646+0)*1+lsi)*1]), &(stack[((hsi*1890+18985)*1+lsi)*1]),126);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1764+16780)*1+lsi)*1]), &(stack[((hsi*784+3648)*1+lsi)*1]), &(stack[((hsi*588+3060)*1+lsi)*1]),28);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*2352+26545)*1+lsi)*1]), &(stack[((hsi*1008+4432)*1+lsi)*1]), &(stack[((hsi*784+3648)*1+lsi)*1]),28);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*3528+28897)*1+lsi)*1]), &(stack[((hsi*2352+26545)*1+lsi)*1]), &(stack[((hsi*1764+16780)*1+lsi)*1]),28);
HRRPart0bra0ket0HP(inteval, &(stack[((hsi*7938+32425)*1+lsi)*1]), &(stack[((hsi*3528+28897)*1+lsi)*1]), &(stack[((hsi*2646+0)*1+lsi)*1]),126);
HRRPart0bra0ket0GD(inteval, &(stack[((hsi*11340+5440)*1+lsi)*1]), &(stack[((hsi*7938+32425)*1+lsi)*1]), &(stack[((hsi*5670+20875)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*11340+5440)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
