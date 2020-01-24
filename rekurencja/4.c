#include <stdio.h>

  int nwd(int a,int b) {
  int c;
  while(b!=0) {
    c=a%b;
    a=b;
    b=c;
  }
  return a;
}

int main(void) {
  int a, b;
  printf("podaj 2 liczby\n");
  scanf("%d %d", &a, &b);
  printf("nwd(%d,%d) = %d\n", a, b, nwd(a,b));

  return 0;
}
