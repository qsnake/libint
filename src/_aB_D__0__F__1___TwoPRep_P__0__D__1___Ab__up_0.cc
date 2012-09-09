#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,736)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+1816)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]), &(stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*270+1996)*1+lsi)*1]), &(stack[((hsi*126+150)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*360+2266)*1+lsi)*1]), &(stack[((hsi*270+1996)*1+lsi)*1]), &(stack[((hsi*180+1816)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+1816)*1+lsi)*1]), &(stack[((hsi*150+376)*1+lsi)*1]), &(stack[((hsi*100+276)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+2626)*1+lsi)*1]), &(stack[((hsi*210+526)*1+lsi)*1]), &(stack[((hsi*150+376)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*600+0)*1+lsi)*1]), &(stack[((hsi*450+2626)*1+lsi)*1]), &(stack[((hsi*300+1816)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*1080+736)*1+lsi)*1]), &(stack[((hsi*600+0)*1+lsi)*1]), &(stack[((hsi*360+2266)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1080+736)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
