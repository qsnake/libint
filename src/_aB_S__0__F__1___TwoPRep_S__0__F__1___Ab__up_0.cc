#include <libint2.h>
#include <HRRPart1bra0ket0FD.h>
#include <HRRPart1bra0ket0FF.h>
#include <HRRPart1bra0ket0FP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,74)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*30+174)*1+lsi)*1]), &(stack[((hsi*15+10)*1+lsi)*1]), &(stack[((hsi*10+0)*1+lsi)*1]),1);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*45+204)*1+lsi)*1]), &(stack[((hsi*21+25)*1+lsi)*1]), &(stack[((hsi*15+10)*1+lsi)*1]),1);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*60+249)*1+lsi)*1]), &(stack[((hsi*45+204)*1+lsi)*1]), &(stack[((hsi*30+174)*1+lsi)*1]),1);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*63+309)*1+lsi)*1]), &(stack[((hsi*28+46)*1+lsi)*1]), &(stack[((hsi*21+25)*1+lsi)*1]),1);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*90+372)*1+lsi)*1]), &(stack[((hsi*63+309)*1+lsi)*1]), &(stack[((hsi*45+204)*1+lsi)*1]),1);
HRRPart1bra0ket0FF(inteval, &(stack[((hsi*100+74)*1+lsi)*1]), &(stack[((hsi*90+372)*1+lsi)*1]), &(stack[((hsi*60+249)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*100+74)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
