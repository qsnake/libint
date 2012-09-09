#include <libint2.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1184)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*180+2984)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]), &(stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*270+3164)*1+lsi)*1]), &(stack[((hsi*126+150)*1+lsi)*1]), &(stack[((hsi*90+60)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*360+3434)*1+lsi)*1]), &(stack[((hsi*270+3164)*1+lsi)*1]), &(stack[((hsi*180+2984)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*378+3794)*1+lsi)*1]), &(stack[((hsi*168+276)*1+lsi)*1]), &(stack[((hsi*126+150)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*540+4172)*1+lsi)*1]), &(stack[((hsi*378+3794)*1+lsi)*1]), &(stack[((hsi*270+3164)*1+lsi)*1]),6);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*600+4712)*1+lsi)*1]), &(stack[((hsi*540+4172)*1+lsi)*1]), &(stack[((hsi*360+3434)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(stack[((hsi*300+2984)*1+lsi)*1]), &(stack[((hsi*150+544)*1+lsi)*1]), &(stack[((hsi*100+444)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(stack[((hsi*450+3284)*1+lsi)*1]), &(stack[((hsi*210+694)*1+lsi)*1]), &(stack[((hsi*150+544)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(stack[((hsi*600+3734)*1+lsi)*1]), &(stack[((hsi*450+3284)*1+lsi)*1]), &(stack[((hsi*300+2984)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(stack[((hsi*630+0)*1+lsi)*1]), &(stack[((hsi*280+904)*1+lsi)*1]), &(stack[((hsi*210+694)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(stack[((hsi*900+5312)*1+lsi)*1]), &(stack[((hsi*630+0)*1+lsi)*1]), &(stack[((hsi*450+3284)*1+lsi)*1]),10);
HRRPart1bra0ket0ff(inteval, &(stack[((hsi*1000+0)*1+lsi)*1]), &(stack[((hsi*900+5312)*1+lsi)*1]), &(stack[((hsi*600+3734)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(stack[((hsi*1800+1184)*1+lsi)*1]), &(stack[((hsi*1000+0)*1+lsi)*1]), &(stack[((hsi*600+4712)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1800+1184)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
