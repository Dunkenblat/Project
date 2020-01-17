#include <stdio.h>

int main()
{
  int c, n, factorial = 1;
  printf("Podaj liczbę do obliczenia silni\n");
  scanf("%d", &n);
  
  for (c = 1; c <= n; c++)
  factorial = factorial * c;
  printf("Silnia liczby %d wynosi %d\n", n, factorial);
}
