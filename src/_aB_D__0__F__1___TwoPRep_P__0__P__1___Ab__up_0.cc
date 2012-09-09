#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,400)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+940)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]), &(stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+1120)*1+lsi)*1]), &(stack[((hsi*150+250)*1+lsi)*1]), &(stack[((hsi*100+150)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*540+400)*1+lsi)*1]), &(stack[((hsi*300+1120)*1+lsi)*1]), &(stack[((hsi*180+940)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*540+400)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
