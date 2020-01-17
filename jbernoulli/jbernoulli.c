#include <stdio.h>

int main()
{
        int z = 1; 
    for (int i=1, i<=1001, i++)
    { 
    z = i^2; z += z;
    printf("%d", z);
    }
    printf("%d", z);

    return 0;
}