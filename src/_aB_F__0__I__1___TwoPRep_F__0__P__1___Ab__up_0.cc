#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4736)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*840+13136)*1+lsi)*1]), &(stack[((hsi*360+280)*1+lsi)*1]), &(stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1260+13976)*1+lsi)*1]), &(stack[((hsi*540+1060)*1+lsi)*1]), &(stack[((hsi*420+640)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*2520+15236)*1+lsi)*1]), &(stack[((hsi*1260+13976)*1+lsi)*1]), &(stack[((hsi*840+13136)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*1764+17756)*1+lsi)*1]), &(stack[((hsi*756+2188)*1+lsi)*1]), &(stack[((hsi*588+1600)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(stack[((hsi*3780+19520)*1+lsi)*1]), &(stack[((hsi*1764+17756)*1+lsi)*1]), &(stack[((hsi*1260+13976)*1+lsi)*1]),84);
HRRPart0bra0ket0fd(inteval, &(stack[((hsi*5040+23300)*1+lsi)*1]), &(stack[((hsi*3780+19520)*1+lsi)*1]), &(stack[((hsi*2520+15236)*1+lsi)*1]),84);
HRRPart1bra0ket0ip(inteval, &(stack[((hsi*2352+13136)*1+lsi)*1]), &(stack[((hsi*1008+3728)*1+lsi)*1]), &(stack[((hsi*784+2944)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(stack[((hsi*5292+28340)*1+lsi)*1]), &(stack[((hsi*2352+13136)*1+lsi)*1]), &(stack[((hsi*1764+17756)*1+lsi)*1]),84);
HRRPart0bra0ket0gd(inteval, &(stack[((hsi*7560+33632)*1+lsi)*1]), &(stack[((hsi*5292+28340)*1+lsi)*1]), &(stack[((hsi*3780+19520)*1+lsi)*1]),84);
HRRPart0bra0ket0ff(inteval, &(stack[((hsi*8400+4736)*1+lsi)*1]), &(stack[((hsi*7560+33632)*1+lsi)*1]), &(stack[((hsi*5040+23300)*1+lsi)*1]),84);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*8400+4736)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
