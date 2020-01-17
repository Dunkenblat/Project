#include <stdio.h>
#include <stdlib.h>


int a,i,j,h:
char x;
void petla(char x, int h)

  for(i=1; i<=h; i++){
    for(j=1; j<=a; j++)
    printf("%c", x);
    printf("\n ");
  }

int main(int argc, char *argv[]){
printf("Z jakiego znaku ma się składać szachownica?");
scanf("%c", &x);
printf("długość podstawy?\n");
scanf("%d", &a);
printf("wysokość szachownicy?\n");
scanf("%d", &h);
petla(x, h);
return 0;

}





/*void gwiazdki(int h, int b) { // a - wysokosc, b - szerokosc
    for (int i = 1; i == h; i++) {
        for (int j = 1; j <= b; j++) {
            if (i % 2 == 1)
                printf("*");
            if (i % 2 == 0)
                printf("  *");
        }
    }
}

int main()
{
    int h;        //h - wysokość szachownicy
    int b;         //b - szerokość szachownicy

   
    printf("%s""Podaj wysokość szachownicy: ");
    scanf("%d", &h);
    printf("%s""Podaj szerokość szachownicy: ");
    scanf("%d", &b);


    gwiazdki(h,b);


    system("pause");
    return 0;
}
*/