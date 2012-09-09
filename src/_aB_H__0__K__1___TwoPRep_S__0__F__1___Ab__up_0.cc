#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__K__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4242)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+11802)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+14070)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+16905)*1+lsi)*1]), &(stack[((hsi*2835+14070)*1+lsi)*1]), &(stack[((hsi*2268+11802)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*3465+21441)*1+lsi)*1]), &(stack[((hsi*1386+2856)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*5670+24906)*1+lsi)*1]), &(stack[((hsi*3465+21441)*1+lsi)*1]), &(stack[((hsi*2835+14070)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*7560+4242)*1+lsi)*1]), &(stack[((hsi*5670+24906)*1+lsi)*1]), &(stack[((hsi*4536+16905)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*7560+4242)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
