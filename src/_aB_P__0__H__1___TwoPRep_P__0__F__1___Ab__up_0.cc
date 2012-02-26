#include <libint2.h>
#include <HRRPart0bra0ket0PP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_P__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_P__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1170)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*189+3060)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]), &(stack[((hsi*63+0)*1+lsi)*1]),3);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*252+3249)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]), &(stack[((hsi*84+63)*1+lsi)*1]),3);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*378+3501)*1+lsi)*1]), &(stack[((hsi*252+3249)*1+lsi)*1]), &(stack[((hsi*189+3060)*1+lsi)*1]),3);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*324+3879)*1+lsi)*1]), &(stack[((hsi*135+255)*1+lsi)*1]), &(stack[((hsi*108+147)*1+lsi)*1]),3);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*504+4203)*1+lsi)*1]), &(stack[((hsi*324+3879)*1+lsi)*1]), &(stack[((hsi*252+3249)*1+lsi)*1]),3);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*630+4707)*1+lsi)*1]), &(stack[((hsi*504+4203)*1+lsi)*1]), &(stack[((hsi*378+3501)*1+lsi)*1]),3);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*378+3060)*1+lsi)*1]), &(stack[((hsi*168+516)*1+lsi)*1]), &(stack[((hsi*126+390)*1+lsi)*1]),6);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*504+3438)*1+lsi)*1]), &(stack[((hsi*216+684)*1+lsi)*1]), &(stack[((hsi*168+516)*1+lsi)*1]),6);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*756+3942)*1+lsi)*1]), &(stack[((hsi*504+3438)*1+lsi)*1]), &(stack[((hsi*378+3060)*1+lsi)*1]),6);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*648+0)*1+lsi)*1]), &(stack[((hsi*270+900)*1+lsi)*1]), &(stack[((hsi*216+684)*1+lsi)*1]),6);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*1008+5337)*1+lsi)*1]), &(stack[((hsi*648+0)*1+lsi)*1]), &(stack[((hsi*504+3438)*1+lsi)*1]),6);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*1260+6345)*1+lsi)*1]), &(stack[((hsi*1008+5337)*1+lsi)*1]), &(stack[((hsi*756+3942)*1+lsi)*1]),6);
HRRPart0bra0ket0PP(inteval, &(stack[((hsi*1890+1170)*1+lsi)*1]), &(stack[((hsi*1260+6345)*1+lsi)*1]), &(stack[((hsi*630+4707)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*1890+1170)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
