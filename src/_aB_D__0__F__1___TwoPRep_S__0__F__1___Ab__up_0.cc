#include <libint2.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,444)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+1044)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]), &(stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*270+1224)*1+lsi)*1]), &(stack[((hsi*126+150)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*360+1494)*1+lsi)*1]), &(stack[((hsi*270+1224)*1+lsi)*1]), &(stack[((hsi*180+1044)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+1854)*1+lsi)*1]), &(stack[((hsi*168+276)*1+lsi)*1]), &(stack[((hsi*126+150)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*540+2232)*1+lsi)*1]), &(stack[((hsi*378+1854)*1+lsi)*1]), &(stack[((hsi*270+1224)*1+lsi)*1]),6);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*600+444)*1+lsi)*1]), &(stack[((hsi*540+2232)*1+lsi)*1]), &(stack[((hsi*360+1494)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*600+444)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
