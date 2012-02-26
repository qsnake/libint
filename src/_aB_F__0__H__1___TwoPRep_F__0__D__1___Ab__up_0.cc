#include <libint2.h>
#include <HRRPart0bra0ket0FD.h>
#include <HRRPart0bra0ket0FF.h>
#include <HRRPart0bra0ket0FP.h>
#include <HRRPart0bra0ket0GD.h>
#include <HRRPart0bra0ket0GP.h>
#include <HRRPart0bra0ket0HP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0IP.h>
#include <_aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6290)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*630+18890)*1+lsi)*1]), &(stack[((hsi*280+210)*1+lsi)*1]), &(stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*840+19520)*1+lsi)*1]), &(stack[((hsi*360+490)*1+lsi)*1]), &(stack[((hsi*280+210)*1+lsi)*1]),10);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1260+20360)*1+lsi)*1]), &(stack[((hsi*840+19520)*1+lsi)*1]), &(stack[((hsi*630+18890)*1+lsi)*1]),10);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*945+18890)*1+lsi)*1]), &(stack[((hsi*420+1165)*1+lsi)*1]), &(stack[((hsi*315+850)*1+lsi)*1]),15);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1260+21620)*1+lsi)*1]), &(stack[((hsi*540+1585)*1+lsi)*1]), &(stack[((hsi*420+1165)*1+lsi)*1]),15);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1260+21620)*1+lsi)*1]), &(stack[((hsi*945+18890)*1+lsi)*1]),15);
HRRPart0bra0ket0FP(inteval, &(stack[((hsi*3780+21620)*1+lsi)*1]), &(stack[((hsi*1890+0)*1+lsi)*1]), &(stack[((hsi*1260+20360)*1+lsi)*1]),126);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+18890)*1+lsi)*1]), &(stack[((hsi*588+2566)*1+lsi)*1]), &(stack[((hsi*441+2125)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+25400)*1+lsi)*1]), &(stack[((hsi*756+3154)*1+lsi)*1]), &(stack[((hsi*588+2566)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+27164)*1+lsi)*1]), &(stack[((hsi*1764+25400)*1+lsi)*1]), &(stack[((hsi*1323+18890)*1+lsi)*1]),21);
HRRPart0bra0ket0GP(inteval, &(stack[((hsi*5670+29810)*1+lsi)*1]), &(stack[((hsi*2646+27164)*1+lsi)*1]), &(stack[((hsi*1890+0)*1+lsi)*1]),126);
HRRPart0bra0ket0FD(inteval, &(stack[((hsi*7560+35480)*1+lsi)*1]), &(stack[((hsi*5670+29810)*1+lsi)*1]), &(stack[((hsi*3780+21620)*1+lsi)*1]),126);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1764+18890)*1+lsi)*1]), &(stack[((hsi*784+4498)*1+lsi)*1]), &(stack[((hsi*588+3910)*1+lsi)*1]),28);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*2352+20654)*1+lsi)*1]), &(stack[((hsi*1008+5282)*1+lsi)*1]), &(stack[((hsi*784+4498)*1+lsi)*1]),28);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*3528+0)*1+lsi)*1]), &(stack[((hsi*2352+20654)*1+lsi)*1]), &(stack[((hsi*1764+18890)*1+lsi)*1]),28);
HRRPart0bra0ket0HP(inteval, &(stack[((hsi*7938+18890)*1+lsi)*1]), &(stack[((hsi*3528+0)*1+lsi)*1]), &(stack[((hsi*2646+27164)*1+lsi)*1]),126);
HRRPart0bra0ket0GD(inteval, &(stack[((hsi*11340+43040)*1+lsi)*1]), &(stack[((hsi*7938+18890)*1+lsi)*1]), &(stack[((hsi*5670+29810)*1+lsi)*1]),126);
HRRPart0bra0ket0FF(inteval, &(stack[((hsi*12600+6290)*1+lsi)*1]), &(stack[((hsi*11340+43040)*1+lsi)*1]), &(stack[((hsi*7560+35480)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*12600+6290)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
