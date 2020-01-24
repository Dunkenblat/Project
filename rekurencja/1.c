#include <stdio.h>

int power(int n, int k){
  if (k == 0) {
    return 1;
  } 
  else {
    return n * power(n, k - 1);
  }
}


int main(void) {
  int n, k;
  printf("podaj podstawę n:");
  scanf("%d", &n);
  printf("podaj wykładnik k:");
  scanf("%d", &k);
  printf("%d^%d = %d\n", n, k, power(n, k));

  return 0; 
}
