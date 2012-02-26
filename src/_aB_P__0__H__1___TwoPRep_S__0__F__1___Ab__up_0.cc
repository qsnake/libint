#include <libint2.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_P__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,390)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*189+1020)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]), &(stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*252+1209)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]),3);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*378+1461)*1+lsi)*1]), &(stack[((hsi*252+1209)*1+lsi)*1]), &(stack[((hsi*189+1020)*1+lsi)*1]),3);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*324+1839)*1+lsi)*1]), &(stack[((hsi*135+255)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]),3);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*504+2163)*1+lsi)*1]), &(stack[((hsi*324+1839)*1+lsi)*1]), &(stack[((hsi*252+1209)*1+lsi)*1]),3);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*630+390)*1+lsi)*1]), &(stack[((hsi*504+2163)*1+lsi)*1]), &(stack[((hsi*378+1461)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*630+390)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
