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
#include <_aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,435)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*135+1110)*1+lsi)*1]), &(stack[((hsi*63+45)*1+lsi)*1]), &(stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*189+1245)*1+lsi)*1]), &(stack[((hsi*84+108)*1+lsi)*1]), &(stack[((hsi*63+45)*1+lsi)*1]),3);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*270+1434)*1+lsi)*1]), &(stack[((hsi*189+1245)*1+lsi)*1]), &(stack[((hsi*135+1110)*1+lsi)*1]),3);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*252+1704)*1+lsi)*1]), &(stack[((hsi*108+192)*1+lsi)*1]), &(stack[((hsi*84+108)*1+lsi)*1]),3);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*378+1956)*1+lsi)*1]), &(stack[((hsi*252+1704)*1+lsi)*1]), &(stack[((hsi*189+1245)*1+lsi)*1]),3);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*450+2334)*1+lsi)*1]), &(stack[((hsi*378+1956)*1+lsi)*1]), &(stack[((hsi*270+1434)*1+lsi)*1]),3);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*324+1110)*1+lsi)*1]), &(stack[((hsi*135+300)*1+lsi)*1]), &(stack[((hsi*108+192)*1+lsi)*1]),3);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*504+2784)*1+lsi)*1]), &(stack[((hsi*324+1110)*1+lsi)*1]), &(stack[((hsi*252+1704)*1+lsi)*1]),3);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*630+1110)*1+lsi)*1]), &(stack[((hsi*504+2784)*1+lsi)*1]), &(stack[((hsi*378+1956)*1+lsi)*1]),3);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*675+435)*1+lsi)*1]), &(stack[((hsi*630+1110)*1+lsi)*1]), &(stack[((hsi*450+2334)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*675+435)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
