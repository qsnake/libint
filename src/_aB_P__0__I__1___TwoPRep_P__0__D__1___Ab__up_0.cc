#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,981)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+2493)*1+lsi)*1]), &(stack[((hsi*108+84)*1+lsi)*1]), &(stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*324+2745)*1+lsi)*1]), &(stack[((hsi*135+192)*1+lsi)*1]), &(stack[((hsi*108+84)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*504+3069)*1+lsi)*1]), &(stack[((hsi*324+2745)*1+lsi)*1]), &(stack[((hsi*252+2493)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+2493)*1+lsi)*1]), &(stack[((hsi*216+495)*1+lsi)*1]), &(stack[((hsi*168+327)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+3573)*1+lsi)*1]), &(stack[((hsi*270+711)*1+lsi)*1]), &(stack[((hsi*216+495)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1008+4221)*1+lsi)*1]), &(stack[((hsi*648+3573)*1+lsi)*1]), &(stack[((hsi*504+2493)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(stack[((hsi*1512+981)*1+lsi)*1]), &(stack[((hsi*1008+4221)*1+lsi)*1]), &(stack[((hsi*504+3069)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1512+981)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
