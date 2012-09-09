#include <libint2.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2401)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1323+6370)*1+lsi)*1]), &(stack[((hsi*588+441)*1+lsi)*1]), &(stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*1764+7693)*1+lsi)*1]), &(stack[((hsi*784+1617)*1+lsi)*1]), &(stack[((hsi*588+1029)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*3969+2401)*1+lsi)*1]), &(stack[((hsi*1764+7693)*1+lsi)*1]), &(stack[((hsi*1323+6370)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3969+2401)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
