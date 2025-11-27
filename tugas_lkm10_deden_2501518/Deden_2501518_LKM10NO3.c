#include <stdio.h>
#include <string.h>

#define MAKS 20

typedef struct {
    char nama[20];
    int nilai;
}siswa;

int cariBerdasarkanNilai(siswa siswa[], int n, int nilaiCari) {
  int ditemukan = 0;
    for (int i = 0; i < n; i++) {
        if (siswa[i].nilai == nilaiCari) {
           printf("Siswa %s ditemukan pada indeks %d\n", siswa[i].nama, i);
           ditemukan = 1;
        }
    }
   if (!ditemukan) {
        printf("Tidak ada siswa dengan nilai %d\n", nilaiCari);
    }
}

int main() {
  int n;
  int nilaiCari;
  siswa data[MAKS];

  printf("Masukkan jumlah siswa: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
        printf("\nNama siswa %d: ", i + 1);
        scanf("%s", data[i].nama);

        printf("Nilai siswa %d: ",i + 1);
        scanf("%d", &data[i].nilai);
    }

  printf("Masukkan nilai yang dicari: ");
  scanf("%d", &nilaiCari);
  cariBerdasarkanNilai(data, n, nilaiCari);

  return 0;
}