# Języki programowania - C

* [x] Napisać program tzw. Hello world
* [x] Katalog domowy użytkownika: pwd, ~. 
* [x] Ścieżka, ścieżka względna, katalog bieżący, rodzicielski.
* [x] Pliki: tworzenie, usuwanie, przenoszenie, zmiana nazwy. 
* [x] Polecenia: `ls`, `tree`, `cp`, `mv`, `cd`, `rm`, `rmdir`. Wykonać `man` polecenie. 

**Hello world** – program, którego jedynym celem jest wypisanie na standardowym wyjściu napisu "Hello World!" lub innego prostego komunikatu.

```c
#include <stdio.h>

int main() {
  printf("hello world");
}
```
# Laboratoria
## [Pętle](https://github.com/Dunkenblat/Project/tree/master/petle)
* [x] [Zadanie 1 - Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.](https://github.com/Dunkenblat/Project/blob/master/petle/1.c)

* [x] [Zadanie 2 -  Napisz program wyświetlający poniższą szachownicę:](https://github.com/Dunkenblat/Project/blob/master/petle/2.c)
```
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
 ```

* [x] [Zadanie 3 - Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.](https://github.com/Dunkenblat/Project/blob/master/petle/3.c)

* [x] [Zadanie 4 - Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.](https://github.com/Dunkenblat/Project/blob/master/petle/4.c)

* [x] [Zadanie 5 - Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.](https://github.com/Dunkenblat/Project/blob/master/petle/5.c)

* [x] [Zadanie 6 - Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.](https://github.com/Dunkenblat/Project/blob/master/petle/6.c)

* [ ] Zadanie 7 - Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.

* [ ] Zadanie 8 - Napisz program rozmieszczający poniższe wzory oddzielnie jeden pod drugim. Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.
``` 
*       ****    ****       *
**      ***      ***      **
***     **        **     ***
****    *          *    ****
```

## [Elementarz_1](https://github.com/Dunkenblat/Project/tree/master/elementarz_1)
* [x] [Zadanie 1 - Napisz program obliczający wartość każdego z poniższych wyrażeń:](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/1.c)
```
n1=5+3*8/2-3
n2=2%2+2*2-2/2
n3=2*4*(5+9/2)
```

* [x] [Zadanie 2 - W miejsce kropek „...” wpisz kod, tak aby powstały działające programy.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/2.c)
```c
/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
   
#include <stdio.h>
int main() {
   int tabela[] = {1, 2, 4, 6, 12};
   for (...)
      ...
   return 0;
}
```

* [x] [Zadanie 3 - Napisać program, który robi to co poprzedni program, ale tym razem zamiast pętli „for” należy użyć pętli „while”.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/3.c)

* [x] [Zadanie 4 - Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/4.c)

* [x] [Zadanie 5 - Student G. Apa dostał od kolegi na kartce kod programu zliczającego znaki odstępu, tabulacji i nowego wiersza. Niestety jego młodszy brat pociął kartkę na kawałki zawierające po jednym wierszu kodu, a następnie kawałki te wymieszał. Uporządkuj te kawałki, tak aby powstał działający program.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/5.c)
```c
/* zlicz znaki odstępu, tabulacji
{
}
#include &lt;stdio.h>
i nowego wiersza */
else if (c == '\t')
int main ()
int c;
nt = 0;
nl = 0;
while ((c=getchar()) != EOF)
++nl;
if (c == ' ')
++nb;
nb = 0;
return 0;
++nt;
int nb, nt, nl;
printf("%d %d %d\n", nb, nt, nl);
else if (c == '\n')
```

## [Elementarz_2](https://github.com/Dunkenblat/Project/tree/master/elementarz_2)
* [x] [Zadanie 1 - Poniższy – zawierający wiele błędów – program dla podanej z klawiatury liczby M ma obliczyć najmniejszą liczbę n, taką że 1 + 2 + 3 +...+ n >= M. Popraw wszystkie błędy w tym programie tak, aby poprawiony program prawidłowo obliczał liczbę n.](https://github.com/Dunkenblat/Project/blob/master/elementarz_2/1.c)
```c
#include <stdio.h>
int main() {
  int M;
  suma = 0;
  i = 1;
  print("Podaj liczbe M: ");
  scanf("%f\n", %M)
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }
  n=i+1;
  printf("Szukane n to: ", n);
  return 0;
}

```
Na konsoli, działanie programu, może wyglądać tak:
```
Podaj liczbę M: 11
Szukane n to: 5

Szukane n to 5, ponieważ:

1 + 2 + 3 + 4 < 10
1 + 2 + 3 + 4 + 5 >= 10
```

* [x] [Zadanie 2 - Zamiast komentarzy /* ... */ w programie poniżej wpisz kod tak, aby powstał program, który sprawdza czy podana liczba całkowita jest pierwsza.](https://github.com/Dunkenblat/Project/blob/master/elementarz_2/2.c)
```c
#include <stdio.h>
int main() {
  /* deklaracje zmiennych */
  printf("Podaj liczbe calkowita: ");
  /* wczytaj tę liczbę do zmiennej n */
  /* sprawdź czy n jest liczbą pierwszą */
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");
  return 0;
}
```

* [ ] Zadanie 3 - Oblicz wartość π (pi) z nieskończonej sumy

* [x] [Zadanie 4 - Zamiast komentarza /** ... */ i kropek ... poniżej wpisz kod, tak aby powstał program zliczający znaki odstępu, tabulacji i nowego wiersza tekstu wczytanego z stdin.](https://github.com/Dunkenblat/Project/blob/master/elementarz_2/4.c)
```c
#include <stdio.h>
int main() {
   /** deklaracje zmiennych lokalnych */
   nb = 0;  /* liczba znaków odstępu */
   nt = 0;  /* liczba znaków tabulacji */
   nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
      /** zliczaj białe znaki */
   }
   printf("liczba znaków odstępu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", ... );
   return 0;
}
```

## [Jbernoulli](https://github.com/Dunkenblat/Project/tree/master/jbernoulli)
## [Collatz](https://github.com/Dunkenblat/Project/tree/master/collatz)


