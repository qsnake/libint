#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_D__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__H__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1519)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+3787)*1+lsi)*1]), &(stack[((hsi*168+126)*1+lsi)*1]), &(stack[((hsi*126+0)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+4165)*1+lsi)*1]), &(stack[((hsi*280+504)*1+lsi)*1]), &(stack[((hsi*210+294)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*1134+4795)*1+lsi)*1]), &(stack[((hsi*630+4165)*1+lsi)*1]), &(stack[((hsi*378+3787)*1+lsi)*1]),63);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*945+5929)*1+lsi)*1]), &(stack[((hsi*420+1099)*1+lsi)*1]), &(stack[((hsi*315+784)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(stack[((hsi*1890+6874)*1+lsi)*1]), &(stack[((hsi*945+5929)*1+lsi)*1]), &(stack[((hsi*630+4165)*1+lsi)*1]),63);
HRRPart0bra0ket0dd(inteval, &(stack[((hsi*2268+1519)*1+lsi)*1]), &(stack[((hsi*1890+6874)*1+lsi)*1]), &(stack[((hsi*1134+4795)*1+lsi)*1]),63);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*2268+1519)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
