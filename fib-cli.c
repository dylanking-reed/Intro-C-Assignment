#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc == 2) {
    printf("%zu\n", fib(atoll(argv[1])));
    return 0;
  } else {
    printf("usage: %s <n>\n", argv[0]);
    return 1;
  }
}
