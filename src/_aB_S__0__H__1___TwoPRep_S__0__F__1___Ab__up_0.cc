#include <libint2.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,130)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*63+340)*1+lsi)*1]), &(stack[((hsi*28+21)*1+lsi)*1]), &(stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*84+403)*1+lsi)*1]), &(stack[((hsi*36+49)*1+lsi)*1]), &(stack[((hsi*28+21)*1+lsi)*1]),1);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*126+487)*1+lsi)*1]), &(stack[((hsi*84+403)*1+lsi)*1]), &(stack[((hsi*63+340)*1+lsi)*1]),1);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*108+613)*1+lsi)*1]), &(stack[((hsi*45+85)*1+lsi)*1]), &(stack[((hsi*36+49)*1+lsi)*1]),1);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*168+721)*1+lsi)*1]), &(stack[((hsi*108+613)*1+lsi)*1]), &(stack[((hsi*84+403)*1+lsi)*1]),1);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*210+130)*1+lsi)*1]), &(stack[((hsi*168+721)*1+lsi)*1]), &(stack[((hsi*126+487)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*210+130)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
