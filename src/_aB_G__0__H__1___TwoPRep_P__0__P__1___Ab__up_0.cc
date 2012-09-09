#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1764)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+4599)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1323+5544)*1+lsi)*1]), &(stack[((hsi*588+1176)*1+lsi)*1]), &(stack[((hsi*441+735)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*2835+1764)*1+lsi)*1]), &(stack[((hsi*1323+5544)*1+lsi)*1]), &(stack[((hsi*945+4599)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2835+1764)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
