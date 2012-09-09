#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5050)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+15850)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]), &(stack[((hsi*360+0)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+16930)*1+lsi)*1]), &(stack[((hsi*550+810)*1+lsi)*1]), &(stack[((hsi*450+360)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+18280)*1+lsi)*1]), &(stack[((hsi*1350+16930)*1+lsi)*1]), &(stack[((hsi*1080+15850)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*1650+20440)*1+lsi)*1]), &(stack[((hsi*660+1360)*1+lsi)*1]), &(stack[((hsi*550+810)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*2700+22090)*1+lsi)*1]), &(stack[((hsi*1650+20440)*1+lsi)*1]), &(stack[((hsi*1350+16930)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*3600+24790)*1+lsi)*1]), &(stack[((hsi*2700+22090)*1+lsi)*1]), &(stack[((hsi*2160+18280)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1620+15850)*1+lsi)*1]), &(stack[((hsi*675+2560)*1+lsi)*1]), &(stack[((hsi*540+2020)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2025+17470)*1+lsi)*1]), &(stack[((hsi*825+3235)*1+lsi)*1]), &(stack[((hsi*675+2560)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*3240+19495)*1+lsi)*1]), &(stack[((hsi*2025+17470)*1+lsi)*1]), &(stack[((hsi*1620+15850)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*2475+0)*1+lsi)*1]), &(stack[((hsi*990+4060)*1+lsi)*1]), &(stack[((hsi*825+3235)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*4050+28390)*1+lsi)*1]), &(stack[((hsi*2475+0)*1+lsi)*1]), &(stack[((hsi*2025+17470)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*5400+32440)*1+lsi)*1]), &(stack[((hsi*4050+28390)*1+lsi)*1]), &(stack[((hsi*3240+19495)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*10800+5050)*1+lsi)*1]), &(stack[((hsi*5400+32440)*1+lsi)*1]), &(stack[((hsi*3600+24790)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*10800+5050)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
