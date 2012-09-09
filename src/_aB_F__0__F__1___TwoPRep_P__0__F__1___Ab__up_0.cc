#include <libint2.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1850)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+4850)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]), &(stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+5150)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]), &(stack[((hsi*150+100)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*600+5600)*1+lsi)*1]), &(stack[((hsi*450+5150)*1+lsi)*1]), &(stack[((hsi*300+4850)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+6200)*1+lsi)*1]), &(stack[((hsi*280+460)*1+lsi)*1]), &(stack[((hsi*210+250)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*900+6830)*1+lsi)*1]), &(stack[((hsi*630+6200)*1+lsi)*1]), &(stack[((hsi*450+5150)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*1000+7730)*1+lsi)*1]), &(stack[((hsi*900+6830)*1+lsi)*1]), &(stack[((hsi*600+5600)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*450+4850)*1+lsi)*1]), &(stack[((hsi*225+890)*1+lsi)*1]), &(stack[((hsi*150+740)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*675+5300)*1+lsi)*1]), &(stack[((hsi*315+1115)*1+lsi)*1]), &(stack[((hsi*225+890)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*900+5975)*1+lsi)*1]), &(stack[((hsi*675+5300)*1+lsi)*1]), &(stack[((hsi*450+4850)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+0)*1+lsi)*1]), &(stack[((hsi*420+1430)*1+lsi)*1]), &(stack[((hsi*315+1115)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*1350+8730)*1+lsi)*1]), &(stack[((hsi*945+0)*1+lsi)*1]), &(stack[((hsi*675+5300)*1+lsi)*1]),15);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*1500+0)*1+lsi)*1]), &(stack[((hsi*1350+8730)*1+lsi)*1]), &(stack[((hsi*900+5975)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*3000+1850)*1+lsi)*1]), &(stack[((hsi*1500+0)*1+lsi)*1]), &(stack[((hsi*1000+7730)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*3000+1850)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
