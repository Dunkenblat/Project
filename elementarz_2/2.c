#include <stdio.h>

int main() {
  int n, i;
  printf("Podaj liczbę całkowitą, by sprawdzić, czy jest liczbą pierwszą: ");
  scanf("%d", &n);
  for(i = 2; i < n; i++){
    if(n%i == 0){
      printf("%d nie jest liczbą pierwszą\n", n);
      return 0;
    }
  }
  if( n==i ){
    printf("%d jest liczbą pierwszą\n", n);
  }
  return 0;
}
