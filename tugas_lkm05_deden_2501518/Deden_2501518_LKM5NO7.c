#include <stdio.h>
#include <string.h>

int main() {
   int jumlahLari;
   int urutan = 0;
   int total = 0;
   float rataRata;
   
   printf("Masukan jumlah berapa kali lari dalam seminggu : ");
   scanf("%d", &jumlahLari);
   printf("\n");

   int A[jumlahLari];

   for (int i = 0; i < jumlahLari; i++) {
     printf("Masukkan jumlah langkah hari ke-%d: ", i + 1);
     scanf("%d", &A[i]);
     total += A[i];

   }
   printf("\n");
   printf("Total langkah selama seminggu: %d langkah", total);
   return 0;
}
