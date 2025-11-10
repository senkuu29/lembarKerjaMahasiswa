#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int A[10];
    int genapKali = 1, ganjilTambah = 0;

    printf("Masukkan 10 bilangan bulat acak: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++) {
      if (i % 2 == 0)
      {
        genapKali *= A[i];
      }else{
        ganjilTambah += A[i];
      }
      
    }
    printf("\nHasil penjumlahan bilangan dengan indeks ganjil: %d", ganjilTambah);
    printf("\nHasil perkalian bilangan dengan indeks genap: %d\n ", genapKali);
    return 0;
}