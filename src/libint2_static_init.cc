#include <libint2.h>
#include <libint2_iface.h>
#include <libint2_iface_internal.h>
#include <cstddef>
#include <cassert>
extern "C" {
void (*libint2_build_default[6][6][6][6])(const Libint_t*);
void (*libint2_build_eri[6][6][6][6])(const Libint_t*);
void libint2_static_init() {
libint2_build_eri[0][0][1][0] = _aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][1][1] = _aB_S__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][2][0] = _aB_S__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][2][1] = _aB_S__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][2][2] = _aB_S__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][3][0] = _aB_S__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][3][1] = _aB_S__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][3][2] = _aB_S__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][3][3] = _aB_S__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][4][0] = _aB_S__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][4][1] = _aB_S__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][4][2] = _aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][4][3] = _aB_S__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][4][4] = _aB_S__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][5][0] = _aB_S__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[0][0][5][1] = _aB_S__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[0][0][5][2] = _aB_S__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[0][0][5][3] = _aB_S__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[0][0][5][4] = _aB_S__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[0][0][5][5] = _aB_S__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][0][1][0] = _aB_P__0__P__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][1][1] = _aB_P__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][2][0] = _aB_P__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][2][1] = _aB_P__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][2][2] = _aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][3][0] = _aB_P__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][3][1] = _aB_P__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][3][2] = _aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][3][3] = _aB_P__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][4][0] = _aB_P__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][4][1] = _aB_P__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][4][2] = _aB_P__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][4][3] = _aB_P__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][4][4] = _aB_P__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][5][0] = _aB_P__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[1][0][5][1] = _aB_P__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[1][0][5][2] = _aB_P__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[1][0][5][3] = _aB_P__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[1][0][5][4] = _aB_P__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[1][0][5][5] = _aB_P__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[1][1][1][1] = _aB_P__0__P__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][2][0] = _aB_P__0__D__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][2][1] = _aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][2][2] = _aB_P__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][3][0] = _aB_P__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][3][1] = _aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][3][2] = _aB_P__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][3][3] = _aB_P__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][4][0] = _aB_P__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][4][1] = _aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][4][2] = _aB_P__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][4][3] = _aB_P__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][4][4] = _aB_P__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][5][0] = _aB_P__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[1][1][5][1] = _aB_P__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[1][1][5][2] = _aB_P__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[1][1][5][3] = _aB_P__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[1][1][5][4] = _aB_P__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[1][1][5][5] = _aB_P__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][0][1][1] = _aB_D__0__P__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][2][0] = _aB_D__0__D__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][2][1] = _aB_D__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][2][2] = _aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][3][0] = _aB_D__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][3][1] = _aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][3][2] = _aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][3][3] = _aB_D__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][4][0] = _aB_D__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][4][1] = _aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][4][2] = _aB_D__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][4][3] = _aB_D__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][4][4] = _aB_D__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][5][0] = _aB_D__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[2][0][5][1] = _aB_D__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[2][0][5][2] = _aB_D__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[2][0][5][3] = _aB_D__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[2][0][5][4] = _aB_D__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[2][0][5][5] = _aB_D__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[2][1][2][1] = _aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][2][2] = _aB_D__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][3][0] = _aB_D__0__F__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][3][1] = _aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][3][2] = _aB_D__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][3][3] = _aB_D__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][4][0] = _aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][4][1] = _aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][4][2] = _aB_D__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][4][3] = _aB_D__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][4][4] = _aB_D__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][5][0] = _aB_D__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[2][1][5][1] = _aB_D__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[2][1][5][2] = _aB_D__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[2][1][5][3] = _aB_D__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[2][1][5][4] = _aB_D__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[2][1][5][5] = _aB_D__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[2][2][2][2] = _aB_D__0__D__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][3][1] = _aB_D__0__F__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][3][2] = _aB_D__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][3][3] = _aB_D__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][4][0] = _aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][4][1] = _aB_D__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][4][2] = _aB_D__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][4][3] = _aB_D__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][4][4] = _aB_D__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][5][0] = _aB_D__0__H__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[2][2][5][1] = _aB_D__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[2][2][5][2] = _aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[2][2][5][3] = _aB_D__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[2][2][5][4] = _aB_D__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[2][2][5][5] = _aB_D__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][0][2][1] = _aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][2][2] = _aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][3][0] = _aB_F__0__F__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][3][1] = _aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][3][2] = _aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][3][3] = _aB_F__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][4][0] = _aB_F__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][4][1] = _aB_F__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][4][2] = _aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][4][3] = _aB_F__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][4][4] = _aB_F__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][5][0] = _aB_F__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[3][0][5][1] = _aB_F__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[3][0][5][2] = _aB_F__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[3][0][5][3] = _aB_F__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[3][0][5][4] = _aB_F__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[3][0][5][5] = _aB_F__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[3][1][2][2] = _aB_F__0__D__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][3][1] = _aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][3][2] = _aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][3][3] = _aB_F__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][4][0] = _aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][4][1] = _aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][4][2] = _aB_F__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][4][3] = _aB_F__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][4][4] = _aB_F__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][5][0] = _aB_F__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[3][1][5][1] = _aB_F__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[3][1][5][2] = _aB_F__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[3][1][5][3] = _aB_F__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[3][1][5][4] = _aB_F__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[3][1][5][5] = _aB_F__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[3][2][3][2] = _aB_F__0__F__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][3][3] = _aB_F__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][4][1] = _aB_F__0__G__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][4][2] = _aB_F__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][4][3] = _aB_F__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][4][4] = _aB_F__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][5][0] = _aB_F__0__H__1___TwoPRep_D__0__S__1___Ab__up_0;

libint2_build_eri[3][2][5][1] = _aB_F__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[3][2][5][2] = _aB_F__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[3][2][5][3] = _aB_F__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[3][2][5][4] = _aB_F__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[3][2][5][5] = _aB_F__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[3][3][3][3] = _aB_F__0__F__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][2] = _aB_F__0__G__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][4][3] = _aB_F__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][4][4] = _aB_F__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][1] = _aB_F__0__H__1___TwoPRep_F__0__P__1___Ab__up_0;

libint2_build_eri[3][3][5][2] = _aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[3][3][5][3] = _aB_F__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[3][3][5][4] = _aB_F__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[3][3][5][5] = _aB_F__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][0][2][2] = _aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][3][1] = _aB_G__0__F__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][3][2] = _aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][3][3] = _aB_G__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][4][0] = _aB_G__0__G__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][4][1] = _aB_G__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][4][2] = _aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][4][3] = _aB_G__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][4][4] = _aB_G__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][5][0] = _aB_G__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[4][0][5][1] = _aB_G__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[4][0][5][2] = _aB_G__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[4][0][5][3] = _aB_G__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[4][0][5][4] = _aB_G__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[4][0][5][5] = _aB_G__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[4][1][3][2] = _aB_G__0__F__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][3][3] = _aB_G__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][4][1] = _aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][4][2] = _aB_G__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][4][3] = _aB_G__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][4][4] = _aB_G__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][5][0] = _aB_G__0__H__1___TwoPRep_P__0__S__1___Ab__up_0;

libint2_build_eri[4][1][5][1] = _aB_G__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[4][1][5][2] = _aB_G__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[4][1][5][3] = _aB_G__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[4][1][5][4] = _aB_G__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[4][1][5][5] = _aB_G__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[4][2][3][3] = _aB_G__0__F__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][2] = _aB_G__0__G__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][4][3] = _aB_G__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][4][4] = _aB_G__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][1] = _aB_G__0__H__1___TwoPRep_D__0__P__1___Ab__up_0;

libint2_build_eri[4][2][5][2] = _aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[4][2][5][3] = _aB_G__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[4][2][5][4] = _aB_G__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[4][2][5][5] = _aB_G__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[4][3][4][3] = _aB_G__0__G__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][4][4] = _aB_G__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][2] = _aB_G__0__H__1___TwoPRep_F__0__D__1___Ab__up_0;

libint2_build_eri[4][3][5][3] = _aB_G__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[4][3][5][4] = _aB_G__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[4][3][5][5] = _aB_G__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[4][4][4][4] = _aB_G__0__G__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][3] = _aB_G__0__H__1___TwoPRep_G__0__F__1___Ab__up_0;

libint2_build_eri[4][4][5][4] = _aB_G__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[4][4][5][5] = _aB_G__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][0][3][2] = _aB_H__0__F__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][3][3] = _aB_H__0__F__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][4][1] = _aB_H__0__G__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][4][2] = _aB_H__0__G__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][4][3] = _aB_H__0__G__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][4][4] = _aB_H__0__G__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][5][0] = _aB_H__0__H__1___TwoPRep_S__0__S__1___Ab__up_0;

libint2_build_eri[5][0][5][1] = _aB_H__0__H__1___TwoPRep_S__0__P__1___Ab__up_0;

libint2_build_eri[5][0][5][2] = _aB_H__0__H__1___TwoPRep_S__0__D__1___Ab__up_0;

libint2_build_eri[5][0][5][3] = _aB_H__0__H__1___TwoPRep_S__0__F__1___Ab__up_0;

libint2_build_eri[5][0][5][4] = _aB_H__0__H__1___TwoPRep_S__0__G__1___Ab__up_0;

libint2_build_eri[5][0][5][5] = _aB_H__0__H__1___TwoPRep_S__0__H__1___Ab__up_0;

libint2_build_eri[5][1][3][3] = _aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][2] = _aB_H__0__G__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][4][3] = _aB_H__0__G__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][4][4] = _aB_H__0__G__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][1] = _aB_H__0__H__1___TwoPRep_P__0__P__1___Ab__up_0;

libint2_build_eri[5][1][5][2] = _aB_H__0__H__1___TwoPRep_P__0__D__1___Ab__up_0;

libint2_build_eri[5][1][5][3] = _aB_H__0__H__1___TwoPRep_P__0__F__1___Ab__up_0;

libint2_build_eri[5][1][5][4] = _aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0;

libint2_build_eri[5][1][5][5] = _aB_H__0__H__1___TwoPRep_P__0__H__1___Ab__up_0;

libint2_build_eri[5][2][4][3] = _aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][4][4] = _aB_H__0__G__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][2] = _aB_H__0__H__1___TwoPRep_D__0__D__1___Ab__up_0;

libint2_build_eri[5][2][5][3] = _aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0;

libint2_build_eri[5][2][5][4] = _aB_H__0__H__1___TwoPRep_D__0__G__1___Ab__up_0;

libint2_build_eri[5][2][5][5] = _aB_H__0__H__1___TwoPRep_D__0__H__1___Ab__up_0;

libint2_build_eri[5][3][4][4] = _aB_H__0__G__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][3] = _aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0;

libint2_build_eri[5][3][5][4] = _aB_H__0__H__1___TwoPRep_F__0__G__1___Ab__up_0;

libint2_build_eri[5][3][5][5] = _aB_H__0__H__1___TwoPRep_F__0__H__1___Ab__up_0;

libint2_build_eri[5][4][5][4] = _aB_H__0__H__1___TwoPRep_G__0__G__1___Ab__up_0;

libint2_build_eri[5][4][5][5] = _aB_H__0__H__1___TwoPRep_G__0__H__1___Ab__up_0;

libint2_build_eri[5][5][5][5] = _aB_H__0__H__1___TwoPRep_H__0__H__1___Ab__up_0;

}
};


