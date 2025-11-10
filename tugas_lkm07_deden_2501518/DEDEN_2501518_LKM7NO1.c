#include <stdio.h>

struct Karyawan {
    char nama[50];
    int id_karyawan;
    int gaji_pokok;
    int tunjangan;
    int potongan;
    float gaji_bersih;
};

int main() {
  int n;
  struct Karyawan data[100];
  
  printf("Masukkan jumlah karyawan: ");
  scanf("%d", &n);
  printf("\n");
  
  for(int i = 0; i < n; i++) {
      printf("karyawan ke-%d\n",i+1);
      
      printf("Nama\t\t: ");
      scanf("%s", data[i].nama);
      printf("ID Karyawan\t: ");
      scanf("%d", &data[i].id_karyawan);
      printf("Gaji Pokok\t: ");
      scanf("%d", &data[i].gaji_pokok);
      printf("Tunjangan\t: ");
      scanf("%d", &data[i].tunjangan);
      printf("Potongan\t: ");
      scanf("%d", &data[i].potongan);
      printf("\n");
      
      data[i].gaji_bersih = data[i].gaji_pokok + data[i].tunjangan - data[i].potongan;
      
  }
  
  printf("===== DATA GAJI KARYAWAN =====\n");
 printf("Nama\tID\tGaji Bersih\n");
 
  for(int i = 0; i < n; i++) {
    printf("%s\t%d\t%.2f\n", data[i].nama, data[i].id_karyawan, data[i].gaji_bersih);
    }
  return 0;
}