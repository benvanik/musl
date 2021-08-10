#include "libc.h"

#define a_cas a_cas
static inline int a_cas(volatile int *p, int t, int s) {
  return __sync_val_compare_and_swap(p, t, s);
}

#ifndef a_barrier
#define a_barrier a_barrier
static inline void a_barrier() { __sync_synchronize(); }
#endif
