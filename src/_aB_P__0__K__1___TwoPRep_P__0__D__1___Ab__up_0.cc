#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1224)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*324+3168)*1+lsi)*1]), &(stack[((hsi*135+108)*1+lsi)*1]), &(stack[((hsi*108+0)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*405+3492)*1+lsi)*1]), &(stack[((hsi*165+243)*1+lsi)*1]), &(stack[((hsi*135+108)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*648+3897)*1+lsi)*1]), &(stack[((hsi*405+3492)*1+lsi)*1]), &(stack[((hsi*324+3168)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+3168)*1+lsi)*1]), &(stack[((hsi*270+624)*1+lsi)*1]), &(stack[((hsi*216+408)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+4545)*1+lsi)*1]), &(stack[((hsi*330+894)*1+lsi)*1]), &(stack[((hsi*270+624)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+5355)*1+lsi)*1]), &(stack[((hsi*810+4545)*1+lsi)*1]), &(stack[((hsi*648+3168)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(stack[((hsi*1944+1224)*1+lsi)*1]), &(stack[((hsi*1296+5355)*1+lsi)*1]), &(stack[((hsi*648+3897)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1944+1224)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
