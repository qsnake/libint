#include <libint2.h>
#include <HRRPart0bra0ket0HD.h>
#include <HRRPart0bra0ket0HP.h>
#include <HRRPart0bra0ket0IP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0IP.h>
#include <_aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7225)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+23101)*1+lsi)*1]), &(stack[((hsi*588+441)*1+lsi)*1]), &(stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+24424)*1+lsi)*1]), &(stack[((hsi*756+1029)*1+lsi)*1]), &(stack[((hsi*588+441)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+26188)*1+lsi)*1]), &(stack[((hsi*1764+24424)*1+lsi)*1]), &(stack[((hsi*1323+23101)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1764+23101)*1+lsi)*1]), &(stack[((hsi*784+2373)*1+lsi)*1]), &(stack[((hsi*588+1785)*1+lsi)*1]),28);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*2352+0)*1+lsi)*1]), &(stack[((hsi*1008+3157)*1+lsi)*1]), &(stack[((hsi*784+2373)*1+lsi)*1]),28);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*3528+28834)*1+lsi)*1]), &(stack[((hsi*2352+0)*1+lsi)*1]), &(stack[((hsi*1764+23101)*1+lsi)*1]),28);
HRRPart0bra0ket0HP(inteval, &(stack[((hsi*7938+32362)*1+lsi)*1]), &(stack[((hsi*3528+28834)*1+lsi)*1]), &(stack[((hsi*2646+26188)*1+lsi)*1]),126);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*2268+23101)*1+lsi)*1]), &(stack[((hsi*1008+4921)*1+lsi)*1]), &(stack[((hsi*756+4165)*1+lsi)*1]),36);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*1296+5929)*1+lsi)*1]), &(stack[((hsi*1008+4921)*1+lsi)*1]),36);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*4536+40300)*1+lsi)*1]), &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*2268+23101)*1+lsi)*1]),36);
HRRPart0bra0ket0IP(inteval, &(stack[((hsi*10584+44836)*1+lsi)*1]), &(stack[((hsi*4536+40300)*1+lsi)*1]), &(stack[((hsi*3528+28834)*1+lsi)*1]),126);
HRRPart0bra0ket0HD(inteval, &(stack[((hsi*15876+7225)*1+lsi)*1]), &(stack[((hsi*10584+44836)*1+lsi)*1]), &(stack[((hsi*7938+32362)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*15876+7225)*1+lsi)*1]);
/** Number of flops = 0 */
}

};