#include <libint2.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GF.h>
#include <HRRPart1bra0ket0GG.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1450)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*450+3700)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),10);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+4150)*1+lsi)*1]), &(stack[((hsi*280+360)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]),10);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*900+4780)*1+lsi)*1]), &(stack[((hsi*630+4150)*1+lsi)*1]), &(stack[((hsi*450+3700)*1+lsi)*1]),10);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*840+5680)*1+lsi)*1]), &(stack[((hsi*360+640)*1+lsi)*1]), &(stack[((hsi*280+360)*1+lsi)*1]),10);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1260+6520)*1+lsi)*1]), &(stack[((hsi*840+5680)*1+lsi)*1]), &(stack[((hsi*630+4150)*1+lsi)*1]),10);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*1500+7780)*1+lsi)*1]), &(stack[((hsi*1260+6520)*1+lsi)*1]), &(stack[((hsi*900+4780)*1+lsi)*1]),10);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1080+3700)*1+lsi)*1]), &(stack[((hsi*450+1000)*1+lsi)*1]), &(stack[((hsi*360+640)*1+lsi)*1]),10);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*1680+9280)*1+lsi)*1]), &(stack[((hsi*1080+3700)*1+lsi)*1]), &(stack[((hsi*840+5680)*1+lsi)*1]),10);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*2100+3700)*1+lsi)*1]), &(stack[((hsi*1680+9280)*1+lsi)*1]), &(stack[((hsi*1260+6520)*1+lsi)*1]),10);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*2250+1450)*1+lsi)*1]), &(stack[((hsi*2100+3700)*1+lsi)*1]), &(stack[((hsi*1500+7780)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2250+1450)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
