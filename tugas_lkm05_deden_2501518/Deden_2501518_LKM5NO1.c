#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int A[15];

    printf("Masukkan 15 bilangan bulat acak: ");
    for (i = 0; i <= 14; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("\nBilangan ganjil: ");
    for (i = 0; i <= 14; i++)
    {
        if (A[i] % 2 != 0)
        {
            printf(" %d", A[i]);
        }
    }

    printf("\nBilangan genap: ");
    for (i = 0; i <= 14; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf(" %d", A[i]);
        }
    }

    return 0;
}