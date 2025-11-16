#include <stdio.h>
#include <stdlib.h>

int dataNilai(int kumpulanNilai[], int n) {
  int i;
  float totalNilai = 0.0;
  float rataRata;

  // menhitung rata-ratanya
  for (i = 0; i < n; i++) {
    totalNilai = totalNilai + kumpulanNilai[i]; 
  }

  // validasi nilai
  if (rataRata > 0)
  {
    rataRata = totalNilai / n;
  } else {
    printf("nilai tidak boleh kurang dari 0");
  }

   printf("\n");
   printf("Rata-rata kelas = %.2f\n", rataRata);
   printf("Kategori: ");

   if (rataRata < 60) {
    printf("Kelas Perlu Pembinaan.");
   }else if (rataRata >= 60 && rataRata <= 79) {
    printf("Kelas Cukup Baik.");
   }else if (rataRata >= 80 && rataRata <= 89) {
    printf("Kelas Sangat Baik.");
   }else{
    printf("Kelas Sangat Baik gacor kece mantap, ACC.");
   }
}

int main() {
  int i;
  int n;
  printf("Masukkan jumlah siswa: ");
  scanf("%d", &n);
  printf("Masukkan nilai %d siswa: \n",n);


  int angkaInput[n];

  for (i = 0; i < n; i++) {
    printf("Siswa ke-%d: ", i + 1);
    scanf("%d", &angkaInput[i]);
  }
  
  dataNilai(angkaInput, n);
  return 0;
}