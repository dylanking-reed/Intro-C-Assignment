#ifndef FINDING_DIVISORS_H
#define FINDING_DIVISORS_H
#include <stdint.h>
#include <stddef.h>
typedef struct Uint64Pairs {
  uint64_t vals[2];
} Uint64Pair;

typedef struct Uint64Slices {
  uint64_t *vals;
  size_t len; 
} Uint64Slice;

Uint64Pair find_divisor(Uint64Slice x);

#endif
