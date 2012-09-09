#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1600)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+4120)*1+lsi)*1]), &(stack[((hsi*360+280)*1+lsi)*1]), &(stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+4960)*1+lsi)*1]), &(stack[((hsi*540+1060)*1+lsi)*1]), &(stack[((hsi*420+640)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*2520+1600)*1+lsi)*1]), &(stack[((hsi*1260+4960)*1+lsi)*1]), &(stack[((hsi*840+4120)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2520+1600)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
