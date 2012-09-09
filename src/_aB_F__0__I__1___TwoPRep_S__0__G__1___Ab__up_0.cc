#include <libint2.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2300)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+6500)*1+lsi)*1]), &(stack[((hsi*360+280)*1+lsi)*1]), &(stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*1080+7340)*1+lsi)*1]), &(stack[((hsi*450+640)*1+lsi)*1]), &(stack[((hsi*360+280)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(stack[((hsi*1680+8420)*1+lsi)*1]), &(stack[((hsi*1080+7340)*1+lsi)*1]), &(stack[((hsi*840+6500)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*1350+10100)*1+lsi)*1]), &(stack[((hsi*550+1090)*1+lsi)*1]), &(stack[((hsi*450+640)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*2160+11450)*1+lsi)*1]), &(stack[((hsi*1350+10100)*1+lsi)*1]), &(stack[((hsi*1080+7340)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(stack[((hsi*2800+13610)*1+lsi)*1]), &(stack[((hsi*2160+11450)*1+lsi)*1]), &(stack[((hsi*1680+8420)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*1650+6500)*1+lsi)*1]), &(stack[((hsi*660+1640)*1+lsi)*1]), &(stack[((hsi*550+1090)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*2700+16410)*1+lsi)*1]), &(stack[((hsi*1650+6500)*1+lsi)*1]), &(stack[((hsi*1350+10100)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*3600+6500)*1+lsi)*1]), &(stack[((hsi*2700+16410)*1+lsi)*1]), &(stack[((hsi*2160+11450)*1+lsi)*1]),10);
HRRPart1bra0ket0ig(inteval, &(stack[((hsi*4200+2300)*1+lsi)*1]), &(stack[((hsi*3600+6500)*1+lsi)*1]), &(stack[((hsi*2800+13610)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*4200+2300)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
