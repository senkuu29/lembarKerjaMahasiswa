#include <stdio.h>
#include <string.h>

int main() {
   int jumlahBilangan;
   
   printf("=== Program Menghitung Bilangan Genap ===\n");
   printf("\n");
   printf("Masukan jumlah bilangan bulat : ");
   scanf("%d", &jumlahBilangan);
   printf("\n");

   int A[jumlahBilangan];

   for (int i = 0; i < jumlahBilangan; i++) {
     printf("Masukkan bilangan ke-%d: ", i + 1);
     scanf("%d", &A[i]);
    }

    printf("\n");
    
   for (int i = 0; i < jumlahBilangan; i++) {
    if (A[i] % 2 == 0)
      {
        printf("Jumlah bilangan genap: %d", A[i]);
      }
    }
   return 0;
}
