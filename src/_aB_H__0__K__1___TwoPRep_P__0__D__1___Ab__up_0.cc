#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6664)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+20272)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+22540)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+25375)*1+lsi)*1]), &(stack[((hsi*2835+22540)*1+lsi)*1]), &(stack[((hsi*2268+20272)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+20272)*1+lsi)*1]), &(stack[((hsi*1260+3864)*1+lsi)*1]), &(stack[((hsi*1008+2856)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*1540+5124)*1+lsi)*1]), &(stack[((hsi*1260+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*6048+29911)*1+lsi)*1]), &(stack[((hsi*3780+0)*1+lsi)*1]), &(stack[((hsi*3024+20272)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*13608+6664)*1+lsi)*1]), &(stack[((hsi*6048+29911)*1+lsi)*1]), &(stack[((hsi*4536+25375)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*13608+6664)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
