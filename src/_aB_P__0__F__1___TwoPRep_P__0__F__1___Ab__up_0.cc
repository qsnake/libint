#include <libint2.h>
#include <HRRPart0bra0ket0PP.h>
#include <HRRPart1bra0ket0FD.h>
#include <HRRPart1bra0ket0FF.h>
#include <HRRPart1bra0ket0FP.h>
#include <HRRPart1bra0ket0GD.h>
#include <HRRPart1bra0ket0GP.h>
#include <HRRPart1bra0ket0HP.h>
#include <_aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,666)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*90+1566)*1+lsi)*1]), &(stack[((hsi*45+30)*1+lsi)*1]), &(stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*135+1656)*1+lsi)*1]), &(stack[((hsi*63+75)*1+lsi)*1]), &(stack[((hsi*45+30)*1+lsi)*1]),3);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*180+1791)*1+lsi)*1]), &(stack[((hsi*135+1656)*1+lsi)*1]), &(stack[((hsi*90+1566)*1+lsi)*1]),3);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*189+1971)*1+lsi)*1]), &(stack[((hsi*84+138)*1+lsi)*1]), &(stack[((hsi*63+75)*1+lsi)*1]),3);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*270+2160)*1+lsi)*1]), &(stack[((hsi*189+1971)*1+lsi)*1]), &(stack[((hsi*135+1656)*1+lsi)*1]),3);
HRRPart1bra0ket0FF(inteval, &(stack[((hsi*300+2430)*1+lsi)*1]), &(stack[((hsi*270+2160)*1+lsi)*1]), &(stack[((hsi*180+1791)*1+lsi)*1]),3);
HRRPart1bra0ket0FP(inteval, &(stack[((hsi*180+1566)*1+lsi)*1]), &(stack[((hsi*90+282)*1+lsi)*1]), &(stack[((hsi*60+222)*1+lsi)*1]),6);
HRRPart1bra0ket0GP(inteval, &(stack[((hsi*270+1746)*1+lsi)*1]), &(stack[((hsi*126+372)*1+lsi)*1]), &(stack[((hsi*90+282)*1+lsi)*1]),6);
HRRPart1bra0ket0FD(inteval, &(stack[((hsi*360+2016)*1+lsi)*1]), &(stack[((hsi*270+1746)*1+lsi)*1]), &(stack[((hsi*180+1566)*1+lsi)*1]),6);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*378+2730)*1+lsi)*1]), &(stack[((hsi*168+498)*1+lsi)*1]), &(stack[((hsi*126+372)*1+lsi)*1]),6);
HRRPart1bra0ket0GD(inteval, &(stack[((hsi*540+0)*1+lsi)*1]), &(stack[((hsi*378+2730)*1+lsi)*1]), &(stack[((hsi*270+1746)*1+lsi)*1]),6);
HRRPart1bra0ket0FF(inteval, &(stack[((hsi*600+2730)*1+lsi)*1]), &(stack[((hsi*540+0)*1+lsi)*1]), &(stack[((hsi*360+2016)*1+lsi)*1]),6);
HRRPart0bra0ket0PP(inteval, &(stack[((hsi*900+666)*1+lsi)*1]), &(stack[((hsi*600+2730)*1+lsi)*1]), &(stack[((hsi*300+2430)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*900+666)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
