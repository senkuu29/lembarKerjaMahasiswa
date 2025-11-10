#include <stdio.h>
#include <string.h>

int main() {
   int jumlahHari;
   int urutan = 0;
   int totalPengunjung = 0;
   float rataRata;
   
   printf("=== Program Rata-rata Pengunjung Toko ===\n");
   printf("\n");
   printf("Masukan jumlah hari berjualan : ");
   scanf("%d", &jumlahHari);
   printf("\n");

   int A[jumlahHari];

   for (int i = 0; i < jumlahHari; i++) {
     printf("Masukkan jumlah pengunjung hari ke-%d: ", i + 1);
     scanf("%d", &A[i]);
     totalPengunjung += A[i];
     rataRata = totalPengunjung / jumlahHari;

   }
   printf("\n");
   printf("Rata-rata pengunjung per hari: %.2f orang", rataRata);
   return 0;
}
