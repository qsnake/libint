#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2635)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+7171)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+7549)*1+lsi)*1]), &(stack[((hsi*216+294)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*756+8053)*1+lsi)*1]), &(stack[((hsi*504+7549)*1+lsi)*1]), &(stack[((hsi*378+7171)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+7171)*1+lsi)*1]), &(stack[((hsi*280+720)*1+lsi)*1]), &(stack[((hsi*210+510)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+8809)*1+lsi)*1]), &(stack[((hsi*360+1000)*1+lsi)*1]), &(stack[((hsi*280+720)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*1260+0)*1+lsi)*1]), &(stack[((hsi*840+8809)*1+lsi)*1]), &(stack[((hsi*630+7171)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*2268+8809)*1+lsi)*1]), &(stack[((hsi*1260+0)*1+lsi)*1]), &(stack[((hsi*756+8053)*1+lsi)*1]),126);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+7171)*1+lsi)*1]), &(stack[((hsi*420+1675)*1+lsi)*1]), &(stack[((hsi*315+1360)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+11077)*1+lsi)*1]), &(stack[((hsi*540+2095)*1+lsi)*1]), &(stack[((hsi*420+1675)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*1890+12337)*1+lsi)*1]), &(stack[((hsi*1260+11077)*1+lsi)*1]), &(stack[((hsi*945+7171)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*3780+14227)*1+lsi)*1]), &(stack[((hsi*1890+12337)*1+lsi)*1]), &(stack[((hsi*1260+0)*1+lsi)*1]),126);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*4536+2635)*1+lsi)*1]), &(stack[((hsi*3780+14227)*1+lsi)*1]), &(stack[((hsi*2268+8809)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4536+2635)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
