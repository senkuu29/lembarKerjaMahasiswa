#include <stdio.h>

struct Toko{
    char namaBarang[50];
    int hargaSatuan;
    int stok;
    int totalNilai;
};

int main() {
  int n;
  struct Toko data[100];
  
  printf("Input Data Barang: ");
  scanf("%d", &n);
  printf("\n");
 
 if(n < 5){
     printf("Barang Harus Lebih Atau Sama dengan Lima (5)\n");
 }else {
 
      for(int i = 0; i < n; i++) {
      printf("Barang ke-%d\n",i+1);
      
      printf("Nama Barang\t: ");
      scanf("%s", data[i].namaBarang);
      printf("Harga Satuan\t: ");
      scanf("%d", &data[i].hargaSatuan);
      printf("Jumlah Stok\t: ");
      scanf("%d", &data[i].stok);
      printf("\n");
      
      data[i].totalNilai = data[i].hargaSatuan * data[i].stok;
      
  }
  
  printf("Daftar Barang\n");
 printf("Nama\t\tHarga\tJumlah\tTotal Nilai\n");
 
  for(int i = 0; i < n; i++) {
    printf("%s\t\t%d\t%d\t%d\n", data[i].namaBarang, data[i].hargaSatuan, data[i].stok,data[i].totalNilai);
  }
 }
  return 0;
}