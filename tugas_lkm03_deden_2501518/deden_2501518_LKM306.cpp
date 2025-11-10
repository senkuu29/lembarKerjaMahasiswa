#include <stdio.h>

main() {
  int beratBadan;
  float tinggiBadan, BMI;

  printf("Masukan berat badan (kg): ");
  scanf("%d", &beratBadan);
  printf("Masukan tinggi badan (meter): ");
  scanf("%f", &tinggiBadan);

  BMI = beratBadan / (tinggiBadan * tinggiBadan);

 if (BMI < 18.5) {
    printf("BMI Anda: %.2f\n",BMI);
    printf("Kategori: Kurus");
 } else if ( BMI >= 18.5 && BMI <= 24.9) {
    printf("BMI Anda: %.2f\n",BMI);
    printf("Kategori: Normal");
 } else if ( BMI >= 25 && BMI <= 29.9) {
    printf("BMI Anda: %.2f\n",BMI);
    printf("Kategori: Gemuk");
 } else {
   printf("Kategori: Obesitas");
 }
 
}