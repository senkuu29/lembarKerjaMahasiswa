#include <stdio.h>
#include <stdlib.h>

void tampilAngkaGenap(int kumpulanAngka[], int n) {
    int i;
    int genapDitemukan = 0;
    printf("Angka genap yang ditemukan: ");

    for (i = 0; i < n; i++) {
      if (kumpulanAngka[i] % 2 == 0) {
          printf("%d ", kumpulanAngka[i]);
          genapDitemukan = 1;
      }
    }
    printf("\n");
}

int main() {
    int n; 
    int i; 

    printf("Masukkan Mau Berapa Angka Yang Akan Anda Input (n): ");
    scanf("%d",&n);

    int angkaInput[n];

    printf("\n");

    for (i = 0; i < n; i++) {
        printf("Masukkan Angka ke-%d: ", i + 1);
        scanf("%d", &angkaInput[i]);
    }

    printf("\n--- Hasil ---\n");
    tampilAngkaGenap(angkaInput, n);

    return 0;
}