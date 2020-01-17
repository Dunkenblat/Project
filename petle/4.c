#include <stdio.h>

int main() {
  int liczba = 0;
  int suma = 0;
  printf("%s", "Podaj liczbę: ");
  scanf("%d", &liczba);
  for (int i=1; i<=liczba; i++){
    suma += i;
    printf("%d\n", suma);
  }
  printf("Suma od 1 do podanej liczby: %d\n", suma);
  if(liczba < 1){
    printf("liczba nie może być mniejsza niż 1!\n");
  }
  return 0;
}
