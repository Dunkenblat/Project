/*2. Napisać funkcję rekurencyjną C(n,k) obliczającą współczynnik Newtona n po k, 
czyli liczbę podzbiorów k-elementowych zbioru n-elementowego.
*/

#include <stdio.h>
#include <stdlib.h>

int newton(int n, int k) {
    if ((k==0) || (n==k)) return 1;
    else return newton(n-1, k-1)+ newton(n-1, k);
}
int main() {
    int n,k;
    printf("Podaj n: ");
    scanf("%i",&n);
    printf("Podaj k: ");
    scanf("%i",&k);
    printf("Wspołczynnik Newtonowski %i po %i wynosi: %i\n",n,k,newton(n, k));
    return 0;
}
