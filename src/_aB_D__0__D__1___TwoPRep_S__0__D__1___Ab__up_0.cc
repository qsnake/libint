#include <libint2.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,186)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*108+402)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]), &(stack[((hsi*36+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+510)*1+lsi)*1]), &(stack[((hsi*90+96)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*216+186)*1+lsi)*1]), &(stack[((hsi*180+510)*1+lsi)*1]), &(stack[((hsi*108+402)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*216+186)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
