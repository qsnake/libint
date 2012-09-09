#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,280)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*108+820)*1+lsi)*1]), &(stack[((hsi*45+36)*1+lsi)*1]), &(stack[((hsi*36+0)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*135+928)*1+lsi)*1]), &(stack[((hsi*55+81)*1+lsi)*1]), &(stack[((hsi*45+36)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*216+1063)*1+lsi)*1]), &(stack[((hsi*135+928)*1+lsi)*1]), &(stack[((hsi*108+820)*1+lsi)*1]),1);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*165+1279)*1+lsi)*1]), &(stack[((hsi*66+136)*1+lsi)*1]), &(stack[((hsi*55+81)*1+lsi)*1]),1);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*270+1444)*1+lsi)*1]), &(stack[((hsi*165+1279)*1+lsi)*1]), &(stack[((hsi*135+928)*1+lsi)*1]),1);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*360+1714)*1+lsi)*1]), &(stack[((hsi*270+1444)*1+lsi)*1]), &(stack[((hsi*216+1063)*1+lsi)*1]),1);
HRRPart1bra0ket0psp(inteval, &(stack[((hsi*198+820)*1+lsi)*1]), &(stack[((hsi*78+202)*1+lsi)*1]), &(stack[((hsi*66+136)*1+lsi)*1]),1);
HRRPart1bra0ket0md(inteval, &(stack[((hsi*330+2074)*1+lsi)*1]), &(stack[((hsi*198+820)*1+lsi)*1]), &(stack[((hsi*165+1279)*1+lsi)*1]),1);
HRRPart1bra0ket0lf(inteval, &(stack[((hsi*450+820)*1+lsi)*1]), &(stack[((hsi*330+2074)*1+lsi)*1]), &(stack[((hsi*270+1444)*1+lsi)*1]),1);
HRRPart1bra0ket0kg(inteval, &(stack[((hsi*540+280)*1+lsi)*1]), &(stack[((hsi*450+820)*1+lsi)*1]), &(stack[((hsi*360+1714)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*540+280)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
