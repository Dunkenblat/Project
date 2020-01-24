#include <stdio.h>
#include "f_collatz.h"

void table() {
printf("|%4s|%6s|%6s|%6s|\n","n","True","Steps","MAX");
printf("----------------------------\n");
}

void result(int num, int steps, int max) {
  printf("|%4d|  True|%6d|%6d|\n", num, steps, max);
}

int number() {
  int num;
  printf("Podaj liczbę: ");
  scanf("%d", &num);
  printf("\n");
  return num;
}

int max(int max, int n) {
  if (max < n) {
    max = n;
  }
  return max;
}

void collatz(int n) {
  int k=0, z=0;
  int x=n;
  while(n>1) {
    int y;
    max(z, n);
    z=max(z, n);
    if (n%2==0)
      y=n/2;
    else
      y=3*n+1;
    n=y;
    k++;
  }
  result(x, k, z);
  x++;
}

void collatz_loop(int i) {
  for(int j=1; j<=i; j++)
    {
      collatz(j);
    }
}