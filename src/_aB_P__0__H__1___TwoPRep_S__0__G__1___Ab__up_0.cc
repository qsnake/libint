#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,555)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*189+1500)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]), &(stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+1689)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*378+1941)*1+lsi)*1]), &(stack[((hsi*252+1689)*1+lsi)*1]), &(stack[((hsi*189+1500)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*324+2319)*1+lsi)*1]), &(stack[((hsi*135+255)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*504+2643)*1+lsi)*1]), &(stack[((hsi*324+2319)*1+lsi)*1]), &(stack[((hsi*252+1689)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*630+3147)*1+lsi)*1]), &(stack[((hsi*504+2643)*1+lsi)*1]), &(stack[((hsi*378+1941)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*405+1500)*1+lsi)*1]), &(stack[((hsi*165+390)*1+lsi)*1]), &(stack[((hsi*135+255)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*648+3777)*1+lsi)*1]), &(stack[((hsi*405+1500)*1+lsi)*1]), &(stack[((hsi*324+2319)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*840+1500)*1+lsi)*1]), &(stack[((hsi*648+3777)*1+lsi)*1]), &(stack[((hsi*504+2643)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(stack[((hsi*945+555)*1+lsi)*1]), &(stack[((hsi*840+1500)*1+lsi)*1]), &(stack[((hsi*630+3147)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*945+555)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
