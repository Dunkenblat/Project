#include <stdio.h>

int main()
{
        int a,b = 1;
        printf("%s", "Podaj a: ");
        scanf("%d", &a);
        printf("%s", "Podaj b: ");
        scanf("%d", &b);
        puts("Liczby całkowite pomiędzy a i b to:");
        while(a < b)
        {
            
            printf("%d\n", a);
            a++;
        }
        if(a > b)
        {
            printf("\nPodano błędny przedział!\n\n");
        }
        return 0;
}
