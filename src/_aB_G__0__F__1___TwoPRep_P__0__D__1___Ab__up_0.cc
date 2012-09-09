#include <libint2.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1656)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+4356)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+4806)*1+lsi)*1]), &(stack[((hsi*315+375)*1+lsi)*1]), &(stack[((hsi*225+150)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*900+5481)*1+lsi)*1]), &(stack[((hsi*675+4806)*1+lsi)*1]), &(stack[((hsi*450+4356)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*630+4356)*1+lsi)*1]), &(stack[((hsi*315+900)*1+lsi)*1]), &(stack[((hsi*210+690)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*945+6381)*1+lsi)*1]), &(stack[((hsi*441+1215)*1+lsi)*1]), &(stack[((hsi*315+900)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*1260+0)*1+lsi)*1]), &(stack[((hsi*945+6381)*1+lsi)*1]), &(stack[((hsi*630+4356)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*2700+1656)*1+lsi)*1]), &(stack[((hsi*1260+0)*1+lsi)*1]), &(stack[((hsi*900+5481)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2700+1656)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
