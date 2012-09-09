#include <libint2.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6561)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+18225)*1+lsi)*1]), &(stack[((hsi*1620+1296)*1+lsi)*1]), &(stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*4860+22113)*1+lsi)*1]), &(stack[((hsi*2025+4536)*1+lsi)*1]), &(stack[((hsi*1620+2916)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*11664+6561)*1+lsi)*1]), &(stack[((hsi*4860+22113)*1+lsi)*1]), &(stack[((hsi*3888+18225)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*11664+6561)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
