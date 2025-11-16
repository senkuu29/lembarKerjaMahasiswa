#include <stdio.h>
#include <stdlib.h>

void tipeBilangan(int kumpulanAngka[], int n) {
int bilanganPositif = 0;
int bilanganNegatif = 0;
int bilanganNol = 0;

printf("=== pengelompokan ===\n");
for (int i = 0; i < n; i++) {
  int angka = kumpulanAngka[i]; 
  printf("Angka %d adalah: ", angka);

  if (kumpulanAngka[i] > 0) {
    printf("Positif\n");
    bilanganPositif = bilanganPositif + 1;
  } else if (kumpulanAngka[i] < 0) {
    printf("Negatif\n");
    bilanganNegatif = bilanganNegatif + 1;
  }else{
    printf("Nol\n");
    bilanganNol = bilanganNol + 1;
  }
}
printf("\n");
printf("=== jumlah hasil ===\n");
printf("jumlah bilangan positif ada: %d\n", bilanganPositif);
printf("jumlah bilangan negatif ada: %d\n", bilanganNegatif);
printf("jumlah bilangan nol ada: %d\n", bilanganNol);
}

int main(){
   int i; 
   int n;
 
    printf("Masukkan mau berapa nilai yang akan anda input: ");
    scanf("%d", &n);

    int angkaInput[n];

    printf("\n");
    for ( i = 0; i < n; i++) {
      printf("Masukkan nilai ke-%d: ", i + 1);
      scanf("%d", &angkaInput[i]);
    }
    printf("\n");
    tipeBilangan(angkaInput, n);
    return 0;
}