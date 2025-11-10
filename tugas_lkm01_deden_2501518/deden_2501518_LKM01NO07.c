#include <stdio.h>
#include <stdlib.h>
int main (){ 

  int hargaHp=1000000, hargaLaptop=5000000, hargaPb=100000;
  int hp  = 2, laptop = 1, pb = 2;
  float diskonHp = 0.15, diskonLaptop = 0.05, diskonPb = 0.20;

  float jumlahHargaHp, jumlahHargaLaptop, jumlahHargaPb;
  float jumlahHargaHpDiskon, jumlahHargaLaptopDiskon, jumlahHargaPbDiskon;
  int totalHp, totalLaptop, totalpb;

  jumlahHargaHp = hp*hargaHp;
  jumlahHargaLaptop =laptop*hargaLaptop;
  jumlahHargaPb = pb*hargaPb;

  jumlahHargaHpDiskon = jumlahHargaHp * diskonHp;
  jumlahHargaLaptopDiskon = jumlahHargaLaptop * diskonLaptop;
  jumlahHargaPbDiskon = jumlahHargaPb * diskonPb;

  totalHp = jumlahHargaHp - jumlahHargaHpDiskon;
  totalLaptop = jumlahHargaLaptop - jumlahHargaLaptopDiskon;
  totalpb = jumlahHargaPb - jumlahHargaPbDiskon;

  printf("total harga hp setelah diskon %.d\n total harga laptop setelah diskon %.d\n total harga pb setelah diskon %.d\n ", totalHp,totalLaptop, totalpb);

  


}