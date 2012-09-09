#include <libint2.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_H__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__G__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2100)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*945+5250)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]), &(stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1323+6195)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]), &(stack[((hsi*441+315)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1890+7518)*1+lsi)*1]), &(stack[((hsi*1323+6195)*1+lsi)*1]), &(stack[((hsi*945+5250)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+9408)*1+lsi)*1]), &(stack[((hsi*756+1344)*1+lsi)*1]), &(stack[((hsi*588+756)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*2646+11172)*1+lsi)*1]), &(stack[((hsi*1764+9408)*1+lsi)*1]), &(stack[((hsi*1323+6195)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(stack[((hsi*3150+2100)*1+lsi)*1]), &(stack[((hsi*2646+11172)*1+lsi)*1]), &(stack[((hsi*1890+7518)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3150+2100)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
