#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <_aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,525)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*630+525)*1+lsi)*1]), &(stack[((hsi*315+210)*1+lsi)*1]), &(stack[((hsi*210+0)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*630+525)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
