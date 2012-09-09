#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3232)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*648+9712)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]), &(stack[((hsi*216+0)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*810+10360)*1+lsi)*1]), &(stack[((hsi*330+486)*1+lsi)*1]), &(stack[((hsi*270+216)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*1296+11170)*1+lsi)*1]), &(stack[((hsi*810+10360)*1+lsi)*1]), &(stack[((hsi*648+9712)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*990+12466)*1+lsi)*1]), &(stack[((hsi*396+816)*1+lsi)*1]), &(stack[((hsi*330+486)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*1620+13456)*1+lsi)*1]), &(stack[((hsi*990+12466)*1+lsi)*1]), &(stack[((hsi*810+10360)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*2160+15076)*1+lsi)*1]), &(stack[((hsi*1620+13456)*1+lsi)*1]), &(stack[((hsi*1296+11170)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+9712)*1+lsi)*1]), &(stack[((hsi*450+1572)*1+lsi)*1]), &(stack[((hsi*360+1212)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+10792)*1+lsi)*1]), &(stack[((hsi*550+2022)*1+lsi)*1]), &(stack[((hsi*450+1572)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+12142)*1+lsi)*1]), &(stack[((hsi*1350+10792)*1+lsi)*1]), &(stack[((hsi*1080+9712)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*1650+0)*1+lsi)*1]), &(stack[((hsi*660+2572)*1+lsi)*1]), &(stack[((hsi*550+2022)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*2700+17236)*1+lsi)*1]), &(stack[((hsi*1650+0)*1+lsi)*1]), &(stack[((hsi*1350+10792)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*3600+19936)*1+lsi)*1]), &(stack[((hsi*2700+17236)*1+lsi)*1]), &(stack[((hsi*2160+12142)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*6480+3232)*1+lsi)*1]), &(stack[((hsi*3600+19936)*1+lsi)*1]), &(stack[((hsi*2160+15076)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*6480+3232)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
