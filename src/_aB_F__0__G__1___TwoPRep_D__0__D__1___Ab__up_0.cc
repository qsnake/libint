#include <libint2.h>
#include <HRRPart0bra0ket0FD.h>
#include <HRRPart0bra0ket0FP.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2944)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*450+8344)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]), &(stack[((hsi*150+0)*1+lsi)*1]),10);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+8794)*1+lsi)*1]), &(stack[((hsi*280+360)*1+lsi)*1]), &(stack[((hsi*210+150)*1+lsi)*1]),10);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*900+9424)*1+lsi)*1]), &(stack[((hsi*630+8794)*1+lsi)*1]), &(stack[((hsi*450+8344)*1+lsi)*1]),10);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*675+8344)*1+lsi)*1]), &(stack[((hsi*315+865)*1+lsi)*1]), &(stack[((hsi*225+640)*1+lsi)*1]),15);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+10324)*1+lsi)*1]), &(stack[((hsi*420+1180)*1+lsi)*1]), &(stack[((hsi*315+865)*1+lsi)*1]),15);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*945+10324)*1+lsi)*1]), &(stack[((hsi*675+8344)*1+lsi)*1]),15);
HRRPart0bra0ket0FP(inteval, &(stack[((hsi*2700+10324)*1+lsi)*1]), &(stack[((hsi*1350+0)*1+lsi)*1]), &(stack[((hsi*900+9424)*1+lsi)*1]),90);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+8344)*1+lsi)*1]), &(stack[((hsi*441+1915)*1+lsi)*1]), &(stack[((hsi*315+1600)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+13024)*1+lsi)*1]), &(stack[((hsi*588+2356)*1+lsi)*1]), &(stack[((hsi*441+1915)*1+lsi)*1]),21);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1890+14347)*1+lsi)*1]), &(stack[((hsi*1323+13024)*1+lsi)*1]), &(stack[((hsi*945+8344)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*4050+16237)*1+lsi)*1]), &(stack[((hsi*1890+14347)*1+lsi)*1]), &(stack[((hsi*1350+0)*1+lsi)*1]),90);
HRRPart0bra0ket0FD(inteval, &(stack[((hsi*5400+2944)*1+lsi)*1]), &(stack[((hsi*4050+16237)*1+lsi)*1]), &(stack[((hsi*2700+10324)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*5400+2944)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
