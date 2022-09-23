#include "powers.h"
#include <stdio.h>

uint64_t uint64_pow(uint64_t a, uint64_t b) {
  uint64_t acc = a;
  if (b == 0) return 1;
  for (;b > 1;b--) acc *= a;
  return acc;
}

uint64_t powers(uint64_t n) {
  uint64_t res = 0;
  for (uint64_t a = 2; a*a < n;a++) {
    for (uint64_t b = 2; uint64_pow(a, b) <= n; b++) {
      res++;
    }
  }
  return res;
}
