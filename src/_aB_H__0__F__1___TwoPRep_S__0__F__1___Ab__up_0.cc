#include <libint2.h>
#include <HRRPart1bra0ket0FD.h>
#include <HRRPart1bra0ket0FF.h>
#include <HRRPart1bra0ket0FP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1554)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*630+3654)*1+lsi)*1]), &(stack[((hsi*315+210)*1+lsi)*1]), &(stack[((hsi*210+0)*1+lsi)*1]),21);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*945+4284)*1+lsi)*1]), &(stack[((hsi*441+525)*1+lsi)*1]), &(stack[((hsi*315+210)*1+lsi)*1]),21);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*1260+5229)*1+lsi)*1]), &(stack[((hsi*945+4284)*1+lsi)*1]), &(stack[((hsi*630+3654)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+6489)*1+lsi)*1]), &(stack[((hsi*588+966)*1+lsi)*1]), &(stack[((hsi*441+525)*1+lsi)*1]),21);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*1890+7812)*1+lsi)*1]), &(stack[((hsi*1323+6489)*1+lsi)*1]), &(stack[((hsi*945+4284)*1+lsi)*1]),21);
HRRPart1bra0ket0FF(inteval, &(stack[((hsi*2100+1554)*1+lsi)*1]), &(stack[((hsi*1890+7812)*1+lsi)*1]), &(stack[((hsi*1260+5229)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2100+1554)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
