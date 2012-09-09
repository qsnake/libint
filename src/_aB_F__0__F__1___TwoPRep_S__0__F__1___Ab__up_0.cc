#include <libint2.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,740)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+1740)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]), &(stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+2040)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*600+2490)*1+lsi)*1]), &(stack[((hsi*450+2040)*1+lsi)*1]), &(stack[((hsi*300+1740)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+3090)*1+lsi)*1]), &(stack[((hsi*280+460)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*900+3720)*1+lsi)*1]), &(stack[((hsi*630+3090)*1+lsi)*1]), &(stack[((hsi*450+2040)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*1000+740)*1+lsi)*1]), &(stack[((hsi*900+3720)*1+lsi)*1]), &(stack[((hsi*600+2490)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1000+740)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
