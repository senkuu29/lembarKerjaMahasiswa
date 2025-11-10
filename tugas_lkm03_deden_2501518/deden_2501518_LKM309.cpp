#include <stdio.h>
#include <stdlib.h>

main() {
   int kode;
   float celcius, hasil;

   printf("\n");
   printf("=== Program Ramalan Cuaca Mimin ===\n");
   printf(" 1. Cerah\n");
   printf(" 2. Hujan\n");
   printf(" 3. Berawan\n");
   printf(" 4. Badai\n");
   printf(" 5. Kabut\n");
   printf("Pilih Kondisi cuaca (1-5): ");
   scanf("%d",&kode);
   printf("Masukan suhu dalam Celcius: ");
   scanf("%f",&celcius);

   hasil = (celcius * 9/5) + 32 ;

  printf("\n");
  printf("=== Hasil Ramalan Cuaca ===\n");
  switch (kode) {
        case 1:
            printf("Cuaca : Cerah\n");
            break;
        case 2:
            printf("Cuaca : Hujan\n");
            break;
        case 3:
             printf("Cuaca : Berawan\n");
            break;
        case 4:
             printf("Cuaca : Badai\n");
            break;
        case 5:
            printf("Cuaca : Kabut\n");
            break;
        default:
            printf("Pilihan cuaca tidak valid\n");
            break;
    }
    printf("Suhu : %.2f °C\n", celcius);
    printf("Suhu : %.2f °F\n", hasil);

    return 0;
}