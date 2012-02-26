#include <libint2.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HG.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IF.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KD.h>
#include <HRRPart1bra0ket0KP.h>
#include <HRRPart1bra0ket0LP.h>
#include <_aB_F__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__H__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1850)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+5000)*1+lsi)*1]), &(stack[((hsi*280+210)*1+lsi)*1]), &(stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*840+5630)*1+lsi)*1]), &(stack[((hsi*360+490)*1+lsi)*1]), &(stack[((hsi*280+210)*1+lsi)*1]),10);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1260+6470)*1+lsi)*1]), &(stack[((hsi*840+5630)*1+lsi)*1]), &(stack[((hsi*630+5000)*1+lsi)*1]),10);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*1080+7730)*1+lsi)*1]), &(stack[((hsi*450+850)*1+lsi)*1]), &(stack[((hsi*360+490)*1+lsi)*1]),10);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*1680+8810)*1+lsi)*1]), &(stack[((hsi*1080+7730)*1+lsi)*1]), &(stack[((hsi*840+5630)*1+lsi)*1]),10);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*2100+10490)*1+lsi)*1]), &(stack[((hsi*1680+8810)*1+lsi)*1]), &(stack[((hsi*1260+6470)*1+lsi)*1]),10);
HRRPart1bra0ket0LP(inteval, &(stack[((hsi*1350+5000)*1+lsi)*1]), &(stack[((hsi*550+1300)*1+lsi)*1]), &(stack[((hsi*450+850)*1+lsi)*1]),10);
HRRPart1bra0ket0KD(inteval, &(stack[((hsi*2160+12590)*1+lsi)*1]), &(stack[((hsi*1350+5000)*1+lsi)*1]), &(stack[((hsi*1080+7730)*1+lsi)*1]),10);
HRRPart1bra0ket0IF(inteval, &(stack[((hsi*2800+5000)*1+lsi)*1]), &(stack[((hsi*2160+12590)*1+lsi)*1]), &(stack[((hsi*1680+8810)*1+lsi)*1]),10);
HRRPart1bra0ket0HG(inteval, &(stack[((hsi*3150+1850)*1+lsi)*1]), &(stack[((hsi*2800+5000)*1+lsi)*1]), &(stack[((hsi*2100+10490)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3150+1850)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
