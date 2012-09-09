#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <_aB_F__0__K__1___TwoPRep_F__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__K__1___TwoPRep_F__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2664)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_F__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1080+6264)*1+lsi)*1]), &(stack[((hsi*540+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*1620+7344)*1+lsi)*1]), &(stack[((hsi*756+900)*1+lsi)*1]), &(stack[((hsi*540+360)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*2160+8964)*1+lsi)*1]), &(stack[((hsi*1620+7344)*1+lsi)*1]), &(stack[((hsi*1080+6264)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*2268+11124)*1+lsi)*1]), &(stack[((hsi*1008+1656)*1+lsi)*1]), &(stack[((hsi*756+900)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*3240+13392)*1+lsi)*1]), &(stack[((hsi*2268+11124)*1+lsi)*1]), &(stack[((hsi*1620+7344)*1+lsi)*1]),36);
HRRPart0bra0ket0ff(inteval, &(stack[((hsi*3600+2664)*1+lsi)*1]), &(stack[((hsi*3240+13392)*1+lsi)*1]), &(stack[((hsi*2160+8964)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3600+2664)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
