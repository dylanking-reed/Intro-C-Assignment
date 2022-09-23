#include "fibonacci.h"

uint64_t fib(uint64_t n) {
  uint64_t a = 1;
  uint64_t b = 1;
  uint64_t c;
  for (;n > 1; n--) {
     c = a + b;
     a = b; 
     b = c;
  }
  return a;
}
