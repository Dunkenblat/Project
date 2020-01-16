## Języki programowania - C

* [x] Napisać program tzw. Hello world(https://github.com/Dunkenblat/Project/blob/master/laboratorium2.md)
* [ ] Przygotowac program do konwersji z F na C
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
