#include <libint2.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GF.h>
#include <HRRPart1bra0ket0GG.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,870)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*270+2220)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]), &(stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*378+2490)*1+lsi)*1]), &(stack[((hsi*168+216)*1+lsi)*1]), &(stack[((hsi*126+90)*1+lsi)*1]),6);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*540+2868)*1+lsi)*1]), &(stack[((hsi*378+2490)*1+lsi)*1]), &(stack[((hsi*270+2220)*1+lsi)*1]),6);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*504+3408)*1+lsi)*1]), &(stack[((hsi*216+384)*1+lsi)*1]), &(stack[((hsi*168+216)*1+lsi)*1]),6);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*756+3912)*1+lsi)*1]), &(stack[((hsi*504+3408)*1+lsi)*1]), &(stack[((hsi*378+2490)*1+lsi)*1]),6);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*900+4668)*1+lsi)*1]), &(stack[((hsi*756+3912)*1+lsi)*1]), &(stack[((hsi*540+2868)*1+lsi)*1]),6);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*648+2220)*1+lsi)*1]), &(stack[((hsi*270+600)*1+lsi)*1]), &(stack[((hsi*216+384)*1+lsi)*1]),6);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*1008+5568)*1+lsi)*1]), &(stack[((hsi*648+2220)*1+lsi)*1]), &(stack[((hsi*504+3408)*1+lsi)*1]),6);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*1260+2220)*1+lsi)*1]), &(stack[((hsi*1008+5568)*1+lsi)*1]), &(stack[((hsi*756+3912)*1+lsi)*1]),6);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*1350+870)*1+lsi)*1]), &(stack[((hsi*1260+2220)*1+lsi)*1]), &(stack[((hsi*900+4668)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1350+870)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
