#include <stdio.h>

int main() {
  int tablica[6];
  printf("Podaj 6 liczb calkowitych: \n");
  scanf("%d %d %d %d %d %d", &tablica[0], &tablica[1], &tablica[2], &tablica[3], &tablica[4], &tablica[5]);
  printf("Liczby w kolejności od początku do końca: %d %d %d %d %d %d\n", tablica[0], tablica[1], tablica[2], tablica[3], tablica[4], tablica[5]);
  printf("Liczby w kolejności od końca do początku: %d %d %d %d %d %d\n", tablica[5], tablica[4], tablica[3], tablica[2], tablica[1], tablica[0]);
  return 0;
}
