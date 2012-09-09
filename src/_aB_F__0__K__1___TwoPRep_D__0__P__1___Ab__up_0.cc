#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3726)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+10206)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+11286)*1+lsi)*1]), &(stack[((hsi*675+1350)*1+lsi)*1]), &(stack[((hsi*540+810)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*3240+12906)*1+lsi)*1]), &(stack[((hsi*1620+11286)*1+lsi)*1]), &(stack[((hsi*1080+10206)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+16146)*1+lsi)*1]), &(stack[((hsi*945+2781)*1+lsi)*1]), &(stack[((hsi*756+2025)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*4860+18414)*1+lsi)*1]), &(stack[((hsi*2268+16146)*1+lsi)*1]), &(stack[((hsi*1620+11286)*1+lsi)*1]),108);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*6480+3726)*1+lsi)*1]), &(stack[((hsi*4860+18414)*1+lsi)*1]), &(stack[((hsi*3240+12906)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*6480+3726)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
