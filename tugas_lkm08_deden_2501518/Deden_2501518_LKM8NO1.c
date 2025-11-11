#include <stdio.h>

int hitungVolume(int p, int l, int t) {
  int v;
  v = p * l * t; 
}

int main(){
  int p, l, t, v;

  printf("Masukkan Panjang Balok (cm): ");
  scanf("%d", &p);
  printf("Masukkan Lebar Balok (cm): ");
  scanf("%d", &l);
  printf("Masukkan Tinggi Balok (cm): ");
  scanf("%d", &t);

  v = hitungVolume(p, l, t);
  printf("Hasil Volumenya adalah: %d cm", v);
  
  return 0;
}