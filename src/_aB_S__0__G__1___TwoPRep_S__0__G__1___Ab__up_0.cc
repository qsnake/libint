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
#include <_aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,145)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*45+370)*1+lsi)*1]), &(stack[((hsi*21+15)*1+lsi)*1]), &(stack[((hsi*15+0)*1+lsi)*1]),1);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*63+415)*1+lsi)*1]), &(stack[((hsi*28+36)*1+lsi)*1]), &(stack[((hsi*21+15)*1+lsi)*1]),1);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*90+478)*1+lsi)*1]), &(stack[((hsi*63+415)*1+lsi)*1]), &(stack[((hsi*45+370)*1+lsi)*1]),1);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*84+568)*1+lsi)*1]), &(stack[((hsi*36+64)*1+lsi)*1]), &(stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*126+652)*1+lsi)*1]), &(stack[((hsi*84+568)*1+lsi)*1]), &(stack[((hsi*63+415)*1+lsi)*1]),1);
HRRPart1bra0ket0GF(inteval, &(stack[((hsi*150+778)*1+lsi)*1]), &(stack[((hsi*126+652)*1+lsi)*1]), &(stack[((hsi*90+478)*1+lsi)*1]),1);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*108+370)*1+lsi)*1]), &(stack[((hsi*45+100)*1+lsi)*1]), &(stack[((hsi*36+64)*1+lsi)*1]),1);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*168+928)*1+lsi)*1]), &(stack[((hsi*108+370)*1+lsi)*1]), &(stack[((hsi*84+568)*1+lsi)*1]),1);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*210+370)*1+lsi)*1]), &(stack[((hsi*168+928)*1+lsi)*1]), &(stack[((hsi*126+652)*1+lsi)*1]),1);
HRRPart1bra0ket0GG(inteval, &(stack[((hsi*225+145)*1+lsi)*1]), &(stack[((hsi*210+370)*1+lsi)*1]), &(stack[((hsi*150+778)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*225+145)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
