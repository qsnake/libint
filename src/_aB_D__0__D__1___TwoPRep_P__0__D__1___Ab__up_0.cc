#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,496)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*108+1144)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]), &(stack[((hsi*36+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+1252)*1+lsi)*1]), &(stack[((hsi*90+96)*1+lsi)*1]), &(stack[((hsi*60+36)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*216+1432)*1+lsi)*1]), &(stack[((hsi*180+1252)*1+lsi)*1]), &(stack[((hsi*108+1144)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(stack[((hsi*180+1144)*1+lsi)*1]), &(stack[((hsi*100+246)*1+lsi)*1]), &(stack[((hsi*60+186)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+1648)*1+lsi)*1]), &(stack[((hsi*150+346)*1+lsi)*1]), &(stack[((hsi*100+246)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(stack[((hsi*360+0)*1+lsi)*1]), &(stack[((hsi*300+1648)*1+lsi)*1]), &(stack[((hsi*180+1144)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*648+496)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]), &(stack[((hsi*216+1432)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*648+496)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
