#include <stdio.h>

int main() {
  int i, j, k, a, b = 0;
  printf("Podaj szerokość szachownicy:\n");
  scanf("%d", &a);
  printf("podaj wysokość szachownicy:\n");
  scanf("%d", &b);
  printf("\n");

  for(i = 1; i <= b; i++){
    for(j = 1; j <= a; j++){
      printf("* ");
    }
    printf("\n");
    for(k = 1; k <= a; k++){
      printf(" *");
    }
    printf("\n");
  }
  return 0;
}
