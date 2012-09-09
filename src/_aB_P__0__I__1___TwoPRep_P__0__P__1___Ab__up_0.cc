#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,576)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*252+1332)*1+lsi)*1]), &(stack[((hsi*108+84)*1+lsi)*1]), &(stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*504+1584)*1+lsi)*1]), &(stack[((hsi*216+360)*1+lsi)*1]), &(stack[((hsi*168+192)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(stack[((hsi*756+576)*1+lsi)*1]), &(stack[((hsi*504+1584)*1+lsi)*1]), &(stack[((hsi*252+1332)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*756+576)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
