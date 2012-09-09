#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gp.h>
#include <_aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2116)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+5716)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]), &(stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+6016)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*600+6466)*1+lsi)*1]), &(stack[((hsi*450+6016)*1+lsi)*1]), &(stack[((hsi*300+5716)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+5716)*1+lsi)*1]), &(stack[((hsi*225+610)*1+lsi)*1]), &(stack[((hsi*150+460)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+7066)*1+lsi)*1]), &(stack[((hsi*315+835)*1+lsi)*1]), &(stack[((hsi*225+610)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*900+0)*1+lsi)*1]), &(stack[((hsi*675+7066)*1+lsi)*1]), &(stack[((hsi*450+5716)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1800+7066)*1+lsi)*1]), &(stack[((hsi*900+0)*1+lsi)*1]), &(stack[((hsi*600+6466)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*630+5716)*1+lsi)*1]), &(stack[((hsi*315+1360)*1+lsi)*1]), &(stack[((hsi*210+1150)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*945+8866)*1+lsi)*1]), &(stack[((hsi*441+1675)*1+lsi)*1]), &(stack[((hsi*315+1360)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*1260+9811)*1+lsi)*1]), &(stack[((hsi*945+8866)*1+lsi)*1]), &(stack[((hsi*630+5716)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*2700+11071)*1+lsi)*1]), &(stack[((hsi*1260+9811)*1+lsi)*1]), &(stack[((hsi*900+0)*1+lsi)*1]),60);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*3600+2116)*1+lsi)*1]), &(stack[((hsi*2700+11071)*1+lsi)*1]), &(stack[((hsi*1800+7066)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3600+2116)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
