#include <stdio.h>
#include <string.h>

int main() {
   int jumlahHalte;
   int urutan = 0;
   int total = 0;
   
   printf("=== Program Total Penumpang Bus ===\n");
   printf("\n");
   printf("Masukan jumlah halte : ");
   scanf("%d", &jumlahHalte);
   printf("\n");

   int A[jumlahHalte];

   for (int i = 0; i < jumlahHalte; i++) {
     printf("Masukkan jumlah penumpang di halte ke-%d: ", i + 1);
     scanf("%d", &A[i]);
     total += A[i];
   }
   printf("\n");
   printf("Total penumpang selama perjalanan: %d orang", total);
   return 0;
}
