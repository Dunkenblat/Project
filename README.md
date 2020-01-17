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
## Pętle
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

## Elementarz_1
* [x] [Zadanie1 - Napisz program obliczający wartość każdego z poniższych wyrażeń:](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/1.c)
```
n1=5+3*8/2-3
n2=2%2+2*2-2/2
n3=2*4*(5+9/2)
```

* [x] [Zadanie2 - W miejsce kropek „...” wpisz kod, tak aby powstały działające programy.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/2.c)
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

* [x] [Zadanie3 - Napisać program, który robi to co poprzedni program, ale tym razem zamiast pętli „for” należy użyć pętli „while”.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/3.c)

* [x] [Zadanie4 - Napisać program obliczający silnię z podanej, niezbyt dużej, liczby naturalnej.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/4.c)

* [x] [Zadanie5 - Student G. Apa dostał od kolegi na kartce kod programu zliczającego znaki odstępu, tabulacji i nowego wiersza. Niestety jego młodszy brat pociął kartkę na kawałki zawierające po jednym wierszu kodu, a następnie kawałki te wymieszał. Uporządkuj te kawałki, tak aby powstał działający program.](https://github.com/Dunkenblat/Project/blob/master/elementarz_1/5.c)
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

## Elementarz_2
## Jbernoulli
## Collatz
