#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+4300)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+4750)*1+lsi)*1]), &(stack[((hsi*280+360)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*900+5380)*1+lsi)*1]), &(stack[((hsi*630+4750)*1+lsi)*1]), &(stack[((hsi*450+4300)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+4300)*1+lsi)*1]), &(stack[((hsi*315+865)*1+lsi)*1]), &(stack[((hsi*225+640)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+6280)*1+lsi)*1]), &(stack[((hsi*420+1180)*1+lsi)*1]), &(stack[((hsi*315+865)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*945+6280)*1+lsi)*1]), &(stack[((hsi*675+4300)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*2700+1600)*1+lsi)*1]), &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*900+5380)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2700+1600)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
