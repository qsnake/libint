#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0fp.h>
#include <_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,625)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+1525)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]), &(stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+1825)*1+lsi)*1]), &(stack[((hsi*225+400)*1+lsi)*1]), &(stack[((hsi*150+250)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*900+625)*1+lsi)*1]), &(stack[((hsi*450+1825)*1+lsi)*1]), &(stack[((hsi*300+1525)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*900+625)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
