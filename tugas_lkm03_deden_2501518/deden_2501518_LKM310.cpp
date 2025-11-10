#include <stdio.h>
#include <stdlib.h>


main() {
  int kodeMenu, jumlahPorsi,harga, totalBayar, subtotal;
  float diskon = 0;

   printf("\n");
   printf("=== Program Kasir Kantin Kampus ===\n");
   printf("Menu:\n");
   printf(" 1. Nasi Goreng - Rp15.000\n");
   printf(" 2. Mie Ayam - Rp12.000\n");
   printf(" 3. Soto Ayam - Rp10.00\n");

   printf("----------------------------------\n");
   printf("Pilih menu (1-3): ");
   scanf("%d",&kodeMenu);
   printf("Jumlah porsi: ");
   scanf("%d",&jumlahPorsi);

   switch (kodeMenu) {
        case 1:
            harga = 15000;
            printf("\n");
            printf("Anda membeli Nasi Goreng %d porsi\n",jumlahPorsi);

             if (jumlahPorsi >= 5) {
                diskon = (harga * jumlahPorsi) * 0.10;
              }
            break;
        case 2:
            harga = 12000;
            printf("\n");
            printf("Anda membeli Mie Ayam %d porsi\n",jumlahPorsi);

            if (jumlahPorsi > 6) {
                diskon = (harga * jumlahPorsi) * 0.08;
            }
            break;
        case 3:
            harga = 10000;
            printf("\n");
            printf("Anda membeli Soto Ayam %d porsi\n",jumlahPorsi);

             if (jumlahPorsi >= 3) {
                diskon = (harga * jumlahPorsi) * 0.05;
              }
            break;
        default:
            printf("Pilihan cuaca tidak valid\n");
            break;
    }

    subtotal = harga * jumlahPorsi;
    totalBayar = subtotal - diskon;

    printf("Total bayar: Rp%d\n", totalBayar);
    printf("\n");

    return 0;
}