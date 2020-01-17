#include <stdio.h>

int main() {
  int n,f,steps=0;
  printf("Podaj liczbę: ");
  scanf("%d",&n);
    while(n>1) {
      if(n%2==0)
	  f=n/2;
      else
	  f=3*n+1;
      n=f;
      printf("\n%d ", n);
      steps++;
    }
  printf("\n\nBy dojść do 1 program musi wykonać %d kroków\n", steps);
  return 0;
}
