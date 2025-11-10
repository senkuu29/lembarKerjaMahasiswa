#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  int jumlahPenarikan = 0, kapasitasPenarikan = 5000000;

  printf("tuliskan nominal penarikan uang: ");
  scanf("%d", &jumlahPenarikan );

  if(jumlahPenarikan > kapasitasPenarikan){
    printf("anda melebihi limit penarikan");
  }

  return 0;
}