#include <libint2.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_I__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_I__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8829)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+26973)*1+lsi)*1]), &(stack[((hsi*1260+1008)*1+lsi)*1]), &(stack[((hsi*1008+0)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+29997)*1+lsi)*1]), &(stack[((hsi*1620+3564)*1+lsi)*1]), &(stack[((hsi*1296+2268)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*9072+33885)*1+lsi)*1]), &(stack[((hsi*3888+29997)*1+lsi)*1]), &(stack[((hsi*3024+26973)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*2025+6804)*1+lsi)*1]), &(stack[((hsi*1620+5184)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*11664+42957)*1+lsi)*1]), &(stack[((hsi*4860+0)*1+lsi)*1]), &(stack[((hsi*3888+29997)*1+lsi)*1]),108);
HRRPart0bra0ket0id(inteval, &(stack[((hsi*18144+8829)*1+lsi)*1]), &(stack[((hsi*11664+42957)*1+lsi)*1]), &(stack[((hsi*9072+33885)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*18144+8829)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
