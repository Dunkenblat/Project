#include <stdio.h>
#include "f_collatz.h"

int main(void) {
  int n;
  n = number();
  table();
  collatz_loop(n);

  return 0;
}
