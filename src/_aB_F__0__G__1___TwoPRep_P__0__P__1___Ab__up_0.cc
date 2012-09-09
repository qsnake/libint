#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,900)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+2250)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+2700)*1+lsi)*1]), &(stack[((hsi*315+585)*1+lsi)*1]), &(stack[((hsi*225+360)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1350+900)*1+lsi)*1]), &(stack[((hsi*675+2700)*1+lsi)*1]), &(stack[((hsi*450+2250)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1350+900)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
