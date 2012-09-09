#include <libint2.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2775)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+7500)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+8445)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*1890+9705)*1+lsi)*1]), &(stack[((hsi*1260+8445)*1+lsi)*1]), &(stack[((hsi*945+7500)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+11595)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*2520+13215)*1+lsi)*1]), &(stack[((hsi*1620+11595)*1+lsi)*1]), &(stack[((hsi*1260+8445)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(stack[((hsi*3150+15735)*1+lsi)*1]), &(stack[((hsi*2520+13215)*1+lsi)*1]), &(stack[((hsi*1890+9705)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2025+7500)*1+lsi)*1]), &(stack[((hsi*825+1950)*1+lsi)*1]), &(stack[((hsi*675+1275)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*3240+18885)*1+lsi)*1]), &(stack[((hsi*2025+7500)*1+lsi)*1]), &(stack[((hsi*1620+11595)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*4200+7500)*1+lsi)*1]), &(stack[((hsi*3240+18885)*1+lsi)*1]), &(stack[((hsi*2520+13215)*1+lsi)*1]),15);
HRRPart1bra0ket0hg(inteval, &(stack[((hsi*4725+2775)*1+lsi)*1]), &(stack[((hsi*4200+7500)*1+lsi)*1]), &(stack[((hsi*3150+15735)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4725+2775)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
