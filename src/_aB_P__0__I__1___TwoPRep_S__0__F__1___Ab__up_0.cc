#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__I__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,492)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+1332)*1+lsi)*1]), &(stack[((hsi*108+84)*1+lsi)*1]), &(stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*324+1584)*1+lsi)*1]), &(stack[((hsi*135+192)*1+lsi)*1]), &(stack[((hsi*108+84)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*504+1908)*1+lsi)*1]), &(stack[((hsi*324+1584)*1+lsi)*1]), &(stack[((hsi*252+1332)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*405+2412)*1+lsi)*1]), &(stack[((hsi*165+327)*1+lsi)*1]), &(stack[((hsi*135+192)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*648+2817)*1+lsi)*1]), &(stack[((hsi*405+2412)*1+lsi)*1]), &(stack[((hsi*324+1584)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*840+492)*1+lsi)*1]), &(stack[((hsi*648+2817)*1+lsi)*1]), &(stack[((hsi*504+1908)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*840+492)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
