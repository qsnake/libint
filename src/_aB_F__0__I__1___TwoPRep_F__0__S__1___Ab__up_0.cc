#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <_aB_F__0__I__1___TwoPRep_F__0__S__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__I__1___TwoPRep_F__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2072)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_F__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*840+4872)*1+lsi)*1]), &(stack[((hsi*420+280)*1+lsi)*1]), &(stack[((hsi*280+0)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*1260+5712)*1+lsi)*1]), &(stack[((hsi*588+700)*1+lsi)*1]), &(stack[((hsi*420+280)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*1680+6972)*1+lsi)*1]), &(stack[((hsi*1260+5712)*1+lsi)*1]), &(stack[((hsi*840+4872)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*1764+8652)*1+lsi)*1]), &(stack[((hsi*784+1288)*1+lsi)*1]), &(stack[((hsi*588+700)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*2520+10416)*1+lsi)*1]), &(stack[((hsi*1764+8652)*1+lsi)*1]), &(stack[((hsi*1260+5712)*1+lsi)*1]),28);
HRRPart0bra0ket0ff(inteval, &(stack[((hsi*2800+2072)*1+lsi)*1]), &(stack[((hsi*2520+10416)*1+lsi)*1]), &(stack[((hsi*1680+6972)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2800+2072)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
