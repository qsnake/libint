#include <libint2.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,300)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*135+750)*1+lsi)*1]), &(stack[((hsi*63+45)*1+lsi)*1]), &(stack[((hsi*45+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*189+885)*1+lsi)*1]), &(stack[((hsi*84+108)*1+lsi)*1]), &(stack[((hsi*63+45)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*270+1074)*1+lsi)*1]), &(stack[((hsi*189+885)*1+lsi)*1]), &(stack[((hsi*135+750)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+1344)*1+lsi)*1]), &(stack[((hsi*108+192)*1+lsi)*1]), &(stack[((hsi*84+108)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(stack[((hsi*378+1596)*1+lsi)*1]), &(stack[((hsi*252+1344)*1+lsi)*1]), &(stack[((hsi*189+885)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(stack[((hsi*450+300)*1+lsi)*1]), &(stack[((hsi*378+1596)*1+lsi)*1]), &(stack[((hsi*270+1074)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*450+300)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
