#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__K__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3400)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+9880)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+10960)*1+lsi)*1]), &(stack[((hsi*550+810)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+12310)*1+lsi)*1]), &(stack[((hsi*1350+10960)*1+lsi)*1]), &(stack[((hsi*1080+9880)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+9880)*1+lsi)*1]), &(stack[((hsi*675+1900)*1+lsi)*1]), &(stack[((hsi*540+1360)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2025+14470)*1+lsi)*1]), &(stack[((hsi*825+2575)*1+lsi)*1]), &(stack[((hsi*675+1900)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*3240+0)*1+lsi)*1]), &(stack[((hsi*2025+14470)*1+lsi)*1]), &(stack[((hsi*1620+9880)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*6480+3400)*1+lsi)*1]), &(stack[((hsi*3240+0)*1+lsi)*1]), &(stack[((hsi*2160+12310)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*6480+3400)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
