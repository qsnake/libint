#include <libint2.h>
#include <HRRPart0bra0ket0FD.h>
#include <HRRPart0bra0ket0FP.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2254)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+6034)*1+lsi)*1]), &(stack[((hsi*280+210)*1+lsi)*1]), &(stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+6664)*1+lsi)*1]), &(stack[((hsi*420+805)*1+lsi)*1]), &(stack[((hsi*315+490)*1+lsi)*1]),15);
HRRPart0bra0ket0FP(inteval, &(stack[((hsi*1890+7609)*1+lsi)*1]), &(stack[((hsi*945+6664)*1+lsi)*1]), &(stack[((hsi*630+6034)*1+lsi)*1]),63);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+9499)*1+lsi)*1]), &(stack[((hsi*588+1666)*1+lsi)*1]), &(stack[((hsi*441+1225)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*2835+10822)*1+lsi)*1]), &(stack[((hsi*1323+9499)*1+lsi)*1]), &(stack[((hsi*945+6664)*1+lsi)*1]),63);
HRRPart0bra0ket0FD(inteval, &(stack[((hsi*3780+2254)*1+lsi)*1]), &(stack[((hsi*2835+10822)*1+lsi)*1]), &(stack[((hsi*1890+7609)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3780+2254)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
