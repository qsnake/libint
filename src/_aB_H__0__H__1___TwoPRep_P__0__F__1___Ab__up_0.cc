#include <libint2.h>
#include <HRRPart0bra0ket0HP.h>
#include <HRRPart1bra0ket0HD.h>
#include <HRRPart1bra0ket0HF.h>
#include <HRRPart1bra0ket0HP.h>
#include <HRRPart1bra0ket0ID.h>
#include <HRRPart1bra0ket0IP.h>
#include <HRRPart1bra0ket0KP.h>
#include <_aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

extern "C" {
void _aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6370)
const int contrdepth = inteval->contrdepth;
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1323+19600)*1+lsi)*1]), &(stack[((hsi*588+441)*1+lsi)*1]), &(stack[((hsi*441+0)*1+lsi)*1]),21);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*1764+20923)*1+lsi)*1]), &(stack[((hsi*756+1029)*1+lsi)*1]), &(stack[((hsi*588+441)*1+lsi)*1]),21);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*2646+22687)*1+lsi)*1]), &(stack[((hsi*1764+20923)*1+lsi)*1]), &(stack[((hsi*1323+19600)*1+lsi)*1]),21);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*2268+25333)*1+lsi)*1]), &(stack[((hsi*945+1785)*1+lsi)*1]), &(stack[((hsi*756+1029)*1+lsi)*1]),21);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*3528+27601)*1+lsi)*1]), &(stack[((hsi*2268+25333)*1+lsi)*1]), &(stack[((hsi*1764+20923)*1+lsi)*1]),21);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*4410+31129)*1+lsi)*1]), &(stack[((hsi*3528+27601)*1+lsi)*1]), &(stack[((hsi*2646+22687)*1+lsi)*1]),21);
HRRPart1bra0ket0HP(inteval, &(stack[((hsi*1764+19600)*1+lsi)*1]), &(stack[((hsi*784+3318)*1+lsi)*1]), &(stack[((hsi*588+2730)*1+lsi)*1]),28);
HRRPart1bra0ket0IP(inteval, &(stack[((hsi*2352+21364)*1+lsi)*1]), &(stack[((hsi*1008+4102)*1+lsi)*1]), &(stack[((hsi*784+3318)*1+lsi)*1]),28);
HRRPart1bra0ket0HD(inteval, &(stack[((hsi*3528+23716)*1+lsi)*1]), &(stack[((hsi*2352+21364)*1+lsi)*1]), &(stack[((hsi*1764+19600)*1+lsi)*1]),28);
HRRPart1bra0ket0KP(inteval, &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*1260+5110)*1+lsi)*1]), &(stack[((hsi*1008+4102)*1+lsi)*1]),28);
HRRPart1bra0ket0ID(inteval, &(stack[((hsi*4704+35539)*1+lsi)*1]), &(stack[((hsi*3024+0)*1+lsi)*1]), &(stack[((hsi*2352+21364)*1+lsi)*1]),28);
HRRPart1bra0ket0HF(inteval, &(stack[((hsi*5880+0)*1+lsi)*1]), &(stack[((hsi*4704+35539)*1+lsi)*1]), &(stack[((hsi*3528+23716)*1+lsi)*1]),28);
HRRPart0bra0ket0HP(inteval, &(stack[((hsi*13230+6370)*1+lsi)*1]), &(stack[((hsi*5880+0)*1+lsi)*1]), &(stack[((hsi*4410+31129)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(stack[((hsi*13230+6370)*1+lsi)*1]);
/** Number of flops = 0 */
}

};
