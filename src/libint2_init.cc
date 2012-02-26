#include <libint2.h>
#include <libint2_iface.h>
#include <libint2_iface_internal.h>
#include <cstddef>
#include <cassert>
extern "C" {
size_t libint2_need_memory_default(int max_am) {
assert(max_am <= 0);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_default > LIBINT2_MAX_HRR_LSRANK_0_default ? LIBINT2_MAX_HRR_HSRANK_0_default : LIBINT2_MAX_HRR_LSRANK_0_default);
return 0; // unreachable
}
size_t libint2_need_memory_eri(int max_am) {
assert(max_am <= 5);
if (max_am == 0) return LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_0_eri > LIBINT2_MAX_HRR_LSRANK_0_eri ? LIBINT2_MAX_HRR_HSRANK_0_eri : LIBINT2_MAX_HRR_LSRANK_0_eri);
assert(max_am <= 5);
if (max_am == 1) return LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_1_eri > LIBINT2_MAX_HRR_LSRANK_1_eri ? LIBINT2_MAX_HRR_HSRANK_1_eri : LIBINT2_MAX_HRR_LSRANK_1_eri);
assert(max_am <= 5);
if (max_am == 2) return LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_2_eri > LIBINT2_MAX_HRR_LSRANK_2_eri ? LIBINT2_MAX_HRR_HSRANK_2_eri : LIBINT2_MAX_HRR_LSRANK_2_eri);
assert(max_am <= 5);
if (max_am == 3) return LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_3_eri > LIBINT2_MAX_HRR_LSRANK_3_eri ? LIBINT2_MAX_HRR_HSRANK_3_eri : LIBINT2_MAX_HRR_LSRANK_3_eri);
assert(max_am <= 5);
if (max_am == 4) return LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_4_eri > LIBINT2_MAX_HRR_LSRANK_4_eri ? LIBINT2_MAX_HRR_HSRANK_4_eri : LIBINT2_MAX_HRR_LSRANK_4_eri);
assert(max_am <= 5);
if (max_am == 5) return LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN + LIBINT2_MAX_VECTOR_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN * (LIBINT2_MAX_HRR_HSRANK_5_eri > LIBINT2_MAX_HRR_LSRANK_5_eri ? LIBINT2_MAX_HRR_HSRANK_5_eri : LIBINT2_MAX_HRR_LSRANK_5_eri);
return 0; // unreachable
}
void libint2_init_default(Libint_t* inteval, int max_am, LIBINT2_REALTYPE* buf) {
if (buf != 0) inteval->stack = buf;
else inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_default(max_am)];
assert(max_am <= 0);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_default * LIBINT2_MAX_VECLEN;
}
void libint2_init_eri(Libint_t* inteval, int max_am, LIBINT2_REALTYPE* buf) {
if (buf != 0) inteval->stack = buf;
else inteval->stack = new LIBINT2_REALTYPE[libint2_need_memory_eri(max_am)];
assert(max_am <= 5);
if (max_am == 0)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_0_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 5);
if (max_am == 1)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_1_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 5);
if (max_am == 2)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_2_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 5);
if (max_am == 3)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_3_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 5);
if (max_am == 4)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_4_eri * LIBINT2_MAX_VECLEN;
assert(max_am <= 5);
if (max_am == 5)
inteval->vstack = inteval->stack + LIBINT2_MAX_STACK_SIZE_5_eri * LIBINT2_MAX_VECLEN;
}
void libint2_cleanup_default(Libint_t* inteval) {
delete[] inteval->stack;
inteval->stack = 0;
inteval->vstack = 0;
}
void libint2_cleanup_eri(Libint_t* inteval) {
delete[] inteval->stack;
inteval->stack = 0;
inteval->vstack = 0;
}
};


