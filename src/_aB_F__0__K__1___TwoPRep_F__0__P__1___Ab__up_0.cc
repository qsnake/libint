#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5994)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+16794)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+17874)*1+lsi)*1]), &(stack[((hsi*675+1350)*1+lsi)*1]), &(stack[((hsi*540+810)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*3240+19494)*1+lsi)*1]), &(stack[((hsi*1620+17874)*1+lsi)*1]), &(stack[((hsi*1080+16794)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+22734)*1+lsi)*1]), &(stack[((hsi*945+2781)*1+lsi)*1]), &(stack[((hsi*756+2025)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*4860+25002)*1+lsi)*1]), &(stack[((hsi*2268+22734)*1+lsi)*1]), &(stack[((hsi*1620+17874)*1+lsi)*1]),108);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*6480+29862)*1+lsi)*1]), &(stack[((hsi*4860+25002)*1+lsi)*1]), &(stack[((hsi*3240+19494)*1+lsi)*1]),108);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*3024+16794)*1+lsi)*1]), &(stack[((hsi*1260+4734)*1+lsi)*1]), &(stack[((hsi*1008+3726)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*6804+36342)*1+lsi)*1]), &(stack[((hsi*3024+16794)*1+lsi)*1]), &(stack[((hsi*2268+22734)*1+lsi)*1]),108);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*9720+43146)*1+lsi)*1]), &(stack[((hsi*6804+36342)*1+lsi)*1]), &(stack[((hsi*4860+25002)*1+lsi)*1]),108);
HRRPart0bra0ket0ff(inteval, &(stack[((hsi*10800+5994)*1+lsi)*1]), &(stack[((hsi*9720+43146)*1+lsi)*1]), &(stack[((hsi*6480+29862)*1+lsi)*1]),108);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*10800+5994)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
