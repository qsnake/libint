#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,109)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__I__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*84+277)*1+lsi)*1]), &(stack[((hsi*36+28)*1+lsi)*1]), &(stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*108+361)*1+lsi)*1]), &(stack[((hsi*45+64)*1+lsi)*1]), &(stack[((hsi*36+28)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*168+109)*1+lsi)*1]), &(stack[((hsi*108+361)*1+lsi)*1]), &(stack[((hsi*84+277)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*168+109)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
