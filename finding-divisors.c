#include "finding-divisors.h"
#include <stddef.h>

Uint64Pair find_divisor(Uint64Slice x) {
  for (size_t i = 0; i < x.len; i++) {
    for (size_t j = 0; j < x.len; j++) {
      if (x.vals[i] % x.vals[j] == 0 && i != j) {
        return (Uint64Pair){{x.vals[j], x.vals[i]}};
      }
    }
  }
  return (Uint64Pair){{0, 0}};
}
