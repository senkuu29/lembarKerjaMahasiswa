#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int jumlahSiswa = 0;
  printf("masukan jumlah siswa : ");
  scanf("%d", &jumlahSiswa);
  
 if (jumlahSiswa % 5 == 0) {
        printf("Buat kelompok dengan maksimal anggota 5 orang.\n");
    } else if (jumlahSiswa % 4 == 0) {
        printf("Buat kelompok dengan maksimal anggota 4 orang.\n");
    } else {
        printf("Buat kelompok dengan maksimal anggota 3 orang.\n");
    }
    return 0;
}