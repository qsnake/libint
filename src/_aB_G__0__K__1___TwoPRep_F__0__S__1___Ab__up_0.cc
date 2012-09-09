#include <libint2.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <_aB_G__0__K__1___TwoPRep_F__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__K__1___TwoPRep_F__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3600)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_F__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*1620+9000)*1+lsi)*1]), &(stack[((hsi*756+540)*1+lsi)*1]), &(stack[((hsi*540+0)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*2268+10620)*1+lsi)*1]), &(stack[((hsi*1008+1296)*1+lsi)*1]), &(stack[((hsi*756+540)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*3240+12888)*1+lsi)*1]), &(stack[((hsi*2268+10620)*1+lsi)*1]), &(stack[((hsi*1620+9000)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(stack[((hsi*3024+16128)*1+lsi)*1]), &(stack[((hsi*1296+2304)*1+lsi)*1]), &(stack[((hsi*1008+1296)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(stack[((hsi*4536+19152)*1+lsi)*1]), &(stack[((hsi*3024+16128)*1+lsi)*1]), &(stack[((hsi*2268+10620)*1+lsi)*1]),36);
HRRPart0bra0ket0gf(inteval, &(stack[((hsi*5400+3600)*1+lsi)*1]), &(stack[((hsi*4536+19152)*1+lsi)*1]), &(stack[((hsi*3240+12888)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*5400+3600)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
