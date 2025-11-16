#include <stdio.h>
#include <stdlib.h>

int suhuRata (int kumpulanSuhu[], int n) {
  int i;
  float totalSuhu = 0.0;
  float rataRata;

  for (i = 0; i < n; i++) {
    totalSuhu = totalSuhu + kumpulanSuhu[i]; 
  }

  if (n > 0) {
    rataRata = totalSuhu / n;
  }

  printf("Rata-rata suhu mingguan: %.2f derajat\n", rataRata);
  printf("\n");
  printf("Rata-rata Cuaca: ");


    if (rataRata < 25)
    {
      printf("Cuaca tergolong dingin.");
    }else if (rataRata >= 25 && rataRata <= 30)
    {
      printf("Cuaca tergolong hangat.");
    }else{
      printf("Cuaca SANGAT PUANASSSS.");
    }
  
}

int main() {
   int i; 
   const int UKURAN_ARRAY = 7;
   int angkaInput[UKURAN_ARRAY];

    printf("\n");

    for ( i = 0; i < UKURAN_ARRAY; i++) {
      printf("Masukkan suhu hari ke-%d: ", i + 1);
      scanf("%d", &angkaInput[i]);
    }

    printf("\n===== Hasil =====\n");
    suhuRata(angkaInput,UKURAN_ARRAY);
    return 0;
}
 