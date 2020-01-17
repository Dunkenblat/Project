#include <stdio.h>
#define size 5

int main() {
  int tab[size] = {1, 2, 4, 6, 12};
  int i=5;
  while (i<=size && i>0) {
    i--;
    printf ("Element numer %d przyjmuje wartość %d\n", i, tab[i]);
  }
  return 0;
}
