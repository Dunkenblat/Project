/*#include <stdio.h>

int main (){
  int i;
  int j;
  int b;         //b - szerokość szachownicy
  int h;        //h - wysokość szachownicy
  
  printf("%s", "Podaj szerokość szachownicy:");
  scanf("%d", &b);
  printf("%s", "Podaj wysokość szachownicy:");
  scanf("%d", &h);

  for(int i = 0; i < h; i++){
    for(int j = 0; j < b; j++){
      if(i%2 == 0)
        printf("*");
      if(i%2 == 1)
        printf(" ");
      j++;
    }
    i++;
  }
  return 0;
}
*/

#include <stdio.h>

int main() {
  int b;         //b - szerokość szachownicy
  int h;        //h - wysokość szachownicy
  
  printf("Podaj szerokość szachownicy:");
  scanf("%d", &b);
  printf("Podaj wysokość szachownicy:");
  scanf("%d", &h);

  for(int i = 0; i < h; i++){
    for(int j = 0; j < b; j++){
      if(i%2 == 0)
        printf("*");
      if(i%2 == 1)
        printf(" +");
      j++;
    }
    i++;
  }
  return 0;
}