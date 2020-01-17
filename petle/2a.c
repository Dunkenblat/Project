#include <stdio.h>

int main (){
  int a = 1;
  int i;
  int b;         //b - szerokość szachownicy
  int h;        //h - wysokość szachownicy
  
  printf("%s", "Podaj szerokość szachownicy:");
  scanf("%d", &b);
  printf("%s", "Podaj wysokość szachownicy:");
  scanf("%d", &h);

  for(i = 1; i <= b; i++){
    printf("*");
    printf(" * ");
    /*while(a <= h) {
      printf("* \n");
      printf(" *\n");
      a++;
    }
    */
  }
  return 0;
}
