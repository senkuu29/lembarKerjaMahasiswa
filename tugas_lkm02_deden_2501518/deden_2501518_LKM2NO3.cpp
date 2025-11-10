#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  int jumlahPenumpang = 0, kapasitasLimitPenumpang = 6;

  printf("masukan jumlah penumpang: ");
  scanf("%d", &jumlahPenumpang );

  if(jumlahPenumpang > kapasitasLimitPenumpang){
    printf("Anda melebihi batas penumpang.");
  }

  return 0;
}