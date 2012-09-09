#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1116)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*270+2736)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]), &(stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+3006)*1+lsi)*1]), &(stack[((hsi*210+366)*1+lsi)*1]), &(stack[((hsi*150+216)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*810+3456)*1+lsi)*1]), &(stack[((hsi*450+3006)*1+lsi)*1]), &(stack[((hsi*270+2736)*1+lsi)*1]),45);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+4266)*1+lsi)*1]), &(stack[((hsi*315+801)*1+lsi)*1]), &(stack[((hsi*225+576)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1350+4941)*1+lsi)*1]), &(stack[((hsi*675+4266)*1+lsi)*1]), &(stack[((hsi*450+3006)*1+lsi)*1]),45);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*1620+1116)*1+lsi)*1]), &(stack[((hsi*1350+4941)*1+lsi)*1]), &(stack[((hsi*810+3456)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1620+1116)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
