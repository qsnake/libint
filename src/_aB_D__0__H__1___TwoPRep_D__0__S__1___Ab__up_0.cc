#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <_aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,651)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*378+1407)*1+lsi)*1]), &(stack[((hsi*210+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*630+1785)*1+lsi)*1]), &(stack[((hsi*315+336)*1+lsi)*1]), &(stack[((hsi*210+126)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*756+651)*1+lsi)*1]), &(stack[((hsi*630+1785)*1+lsi)*1]), &(stack[((hsi*378+1407)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*756+651)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
