#include <stdio.h> //standar input output h header
#include <stdlib.h>
#include <string.h>

int main (){
  //Program konversi CM ke KM
  float ukuran_CM, hasil;
  
  printf("masukan ukuran cm: ");
  scanf("%f",&ukuran_CM); 
  
  hasil = ukuran_CM / 100000;
  printf("%.f km\n", hasil);
  return 0;
}

