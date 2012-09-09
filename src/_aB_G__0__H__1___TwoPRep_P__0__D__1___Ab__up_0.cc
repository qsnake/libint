#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_G__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__H__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3060)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+8730)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+9675)*1+lsi)*1]), &(stack[((hsi*540+735)*1+lsi)*1]), &(stack[((hsi*420+315)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*1890+10935)*1+lsi)*1]), &(stack[((hsi*1260+9675)*1+lsi)*1]), &(stack[((hsi*945+8730)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1323+8730)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]), &(stack[((hsi*441+1275)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+12825)*1+lsi)*1]), &(stack[((hsi*756+2304)*1+lsi)*1]), &(stack[((hsi*588+1716)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*2646+0)*1+lsi)*1]), &(stack[((hsi*1764+12825)*1+lsi)*1]), &(stack[((hsi*1323+8730)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*5670+3060)*1+lsi)*1]), &(stack[((hsi*2646+0)*1+lsi)*1]), &(stack[((hsi*1890+10935)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*5670+3060)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
