#include "moving.h"
#include "finding-divisors.h"
#include "powers.h"
#include "fibonacci.h"
#include <assert.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>

void moving_test() {
  assert(strcmp(choose_mover(10), "Alice") == 0);
  assert(strcmp(choose_mover(20), "Alice") == 0);
  assert(strcmp(choose_mover(25), "Bob") == 0);
  assert(strcmp(choose_mover(30), "Bob") == 0);
}

void finding_divisors_test() {
  uint64_t _a[4] = {3, 8, 12, 20}; 
  Uint64Slice a = (Uint64Slice){ _a, 4 };
  uint64_t as[2] = {3, 12};
  assert(memcmp(find_divisor(a).vals, as, sizeof(as)) == 0);

  uint64_t _b[5] = {5, 3, 1, 8, 10}; 
  Uint64Slice b = (Uint64Slice){ _b, 5 };
  uint64_t bs[2] = {1, 5};
  assert(memcmp(find_divisor(b).vals, bs, sizeof(bs)) == 0);
  
  uint64_t _c[4] = {5, 6, 7, 6}; 
  Uint64Slice c = (Uint64Slice){ _c, 4 };
  uint64_t cs[2] = {6, 6};
  assert(memcmp(find_divisor(c).vals, cs, sizeof(cs)) == 0);
  
  uint64_t _d[3] = {6, 7, 8}; 
  Uint64Slice d = (Uint64Slice){ _d, 3 };
  uint64_t ds[2] = {0, 0};
  assert(memcmp(find_divisor(d).vals, ds, sizeof(ds)) == 0);


  uint64_t _e[1] = {4}; 
  Uint64Slice e = (Uint64Slice){ _e, 1 };
  uint64_t es[2] = {0, 0};
  assert(memcmp(find_divisor(e).vals, es, sizeof(es)) == 0);

  uint64_t _f[3] = {6, 7, 8}; 
  Uint64Slice f = (Uint64Slice){ _f, 3 };
  uint64_t fs[2] = {0, 0};
  assert(memcmp(find_divisor(f).vals, fs, sizeof(fs)) == 0);

  uint64_t _g[1] = {4}; 
  Uint64Slice g = (Uint64Slice){ _g, 1 };
  uint64_t gs[2] = {0, 0};
  assert(memcmp(find_divisor(g).vals, gs, sizeof(gs)) == 0);

  /* Test case is not applicable -- "ISO C Forbids zero-size array". 
  uint64_t _h[0] = {}; 
  Uint64Slice h = (Uint64Slice){ _h, 0 };
  uint64_t hs[2] = {0, 0};
  assert(memcmp(find_divisor(h).vals, hs, sizeof(hs)) == 0);
  */
}

void powers_test() {
  assert(powers(18) == 5);
}

void fibonacci_test() {
  assert(fib(1) == 1);
  assert(fib(2) == 1);
  assert(fib(3) == 2);
  assert(fib(4) == 3);
  assert(fib(5) == 5);
}

int main(void) {
  printf("Testing...\n");
  moving_test();
  finding_divisors_test();
  powers_test();
  fibonacci_test();
  printf("Tests passed.\n");
  return 0;
}
