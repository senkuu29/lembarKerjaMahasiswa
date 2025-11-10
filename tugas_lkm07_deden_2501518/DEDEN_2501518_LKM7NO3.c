#include <stdio.h>

struct Buku{
    char judul[50];
    char penulis[50];
    char penerbit[50];
    int isbn;
};

int main() {
  int n;
  struct Buku data[100];
  
  printf("Masukkan jumlah buku: ");
  scanf("%d", &n);
  printf("\n");
 
      for(int i = 0; i < n; i++) {
      printf("Buku ke-%d\n",i+1);
      
      printf("Judul: ");
      scanf("%s", data[i].judul);
      printf("Penulis: ");
      scanf("%s", data[i].penulis);
      printf("Penerbit: ");
      scanf("%s", data[i].penerbit);
      printf("ISBN: ");
      scanf("%d", &data[i].isbn);
      printf("\n");
      
  }
  
  printf("Daftar buku di Perpustakaan:\n");
 printf("No\tJudul\tPenulis\tPenerbit\tISBN\n");
 
  for(int i = 0; i < n; i++) {
    printf("%d\t%s\t%s\t%s\t%d\n", i + 1, data[i].judul, data[i].penulis,data[i].penerbit,data[i].isbn);
  }

  return 0;
}