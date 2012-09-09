#include <libint2.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_K__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_K__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11016)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3888+34344)*1+lsi)*1]), &(stack[((hsi*1620+1296)*1+lsi)*1]), &(stack[((hsi*1296+0)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*4860+38232)*1+lsi)*1]), &(stack[((hsi*1980+2916)*1+lsi)*1]), &(stack[((hsi*1620+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*7776+43092)*1+lsi)*1]), &(stack[((hsi*4860+38232)*1+lsi)*1]), &(stack[((hsi*3888+34344)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*4860+34344)*1+lsi)*1]), &(stack[((hsi*2025+6516)*1+lsi)*1]), &(stack[((hsi*1620+4896)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*6075+0)*1+lsi)*1]), &(stack[((hsi*2475+8541)*1+lsi)*1]), &(stack[((hsi*2025+6516)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*9720+50868)*1+lsi)*1]), &(stack[((hsi*6075+0)*1+lsi)*1]), &(stack[((hsi*4860+34344)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(stack[((hsi*23328+11016)*1+lsi)*1]), &(stack[((hsi*9720+50868)*1+lsi)*1]), &(stack[((hsi*7776+43092)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*23328+11016)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
