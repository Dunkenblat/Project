#include <stdio.h>
#include <string.h>


void swap(char* a, char* b) {
  char c; c=*a; *a=*b; *b=c;
}

void rewers(char* str, int l, int r) {
	if (r <= l) return;
	swap(str+l, str+r);
	rewers(str, l+1, r-1);
}

int main(void)
{
	char buf[100];
    printf("Pamiętaj!!!\n");
    printf("Łańcuch nie może się składać z polskich znaków!\n");
    printf("Spacja przerywa łańcuch!\n\n");
    printf("Podaj łańcuch znaków do odwrócenia: \n");
	scanf("%s", buf);
	rewers(buf, 0, strlen(buf)-1);
	printf("Odwrócony łańcuch znaków:\n\"%s\"\n", buf);

	return 0;
}
