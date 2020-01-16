## Języki programowania - C

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
## Collatz.c
/*program powinien wskazać maksymalną liczbę, która pokaże się podczas wyliczania

*/
#include <stdio.h>

int main()
{
	int n,f,cnt=0;

	printf("Podaj liczbę: ");
	scanf("%d",&n);
	
	while(n>1)
	{
	
	if(n%2==0)
		f=n/2;
	else
		f=3*n+1;

	n=f;
	printf("\n%d ", n);
	
	cnt++;
	}

	printf("\n\nBy dojść do 1 program musi wykonać %d kroków\n", cnt);
	return 0;
}
# Laboratoria
## Pętle
* [x] 1. Napisz program, który wypisuje kolejne potęgi liczby 2 nie przekraczające 2010.
* [x] 2. Napisz program wyświetlający poniższą szachownicę.
* [x] 3. Napisz program, który wczyta dwie liczby całkowite a i b (a<b) a następnie wypisze wszystkie liczby całkowite pomiędzy a i b.
* [x] 4. Napisz program, który wyliczy sumę liczb naturalnych od 1 do liczby n podanej przez użytkownika. Kiedy użytkownik poda liczbę mniejszą niż 1, to program powinien wypisać stosowny komunikat o błędzie.
* [x] 5. Napisz program, który wczyta ze stdin 6 liczb całkowitych do tablicy, a następnie wypisze zawartość tej tablicy od początku i od końca.
* [x] 6. Napisz program, który wczyta ze stdin 6 liczb rzeczywistych do tablicy, a następnie wyszuka i wypisze największą i najmniejszą liczbę umieszczoną w tej tablicy.
* [x] 7. Napisz program, który ze stdin wczyta 6 liczb rzeczywistych do tablicy, a następnie wypisze liczbę liczb dodatnich w niej zawartych.
* [x] 8. Napisz program rozmieszczający wzory oddzielnie jeden pod drugim. Użyj pętli for do generowania wzorów. Do wypisywania gwiazdek należy użyć instrukcji putchar('*') (powodującej wyświetlanie ich obok siebie). Uwaga: dwa ostatnie wzory wymagają, by każdy wiersz zaczynał się od odpowiedniej liczby spacji.
