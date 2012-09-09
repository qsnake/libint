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
#include <_aB_H__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5880)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(stack[((hsi*2268+17220)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]), &(stack[((hsi*756+0)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(stack[((hsi*2835+19488)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]), &(stack[((hsi*945+756)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(stack[((hsi*4536+22323)*1+lsi)*1]), &(stack[((hsi*2835+19488)*1+lsi)*1]), &(stack[((hsi*2268+17220)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(stack[((hsi*3465+26859)*1+lsi)*1]), &(stack[((hsi*1386+2856)*1+lsi)*1]), &(stack[((hsi*1155+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(stack[((hsi*5670+30324)*1+lsi)*1]), &(stack[((hsi*3465+26859)*1+lsi)*1]), &(stack[((hsi*2835+19488)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(stack[((hsi*7560+35994)*1+lsi)*1]), &(stack[((hsi*5670+30324)*1+lsi)*1]), &(stack[((hsi*4536+22323)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(stack[((hsi*4158+17220)*1+lsi)*1]), &(stack[((hsi*1638+4242)*1+lsi)*1]), &(stack[((hsi*1386+2856)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(stack[((hsi*6930+43554)*1+lsi)*1]), &(stack[((hsi*4158+17220)*1+lsi)*1]), &(stack[((hsi*3465+26859)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(stack[((hsi*9450+17220)*1+lsi)*1]), &(stack[((hsi*6930+43554)*1+lsi)*1]), &(stack[((hsi*5670+30324)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(stack[((hsi*11340+5880)*1+lsi)*1]), &(stack[((hsi*9450+17220)*1+lsi)*1]), &(stack[((hsi*7560+35994)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*11340+5880)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
