  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
  int jumlahMahasiswa = 0, kapasitasMatkul = 45;

  printf("berapa mahasiwa yang mengontrak mata kuliah algoritma pemrograman sekarang? ");
  scanf("%d", &jumlahMahasiswa );

  if(jumlahMahasiswa < kapasitasMatkul){
    printf("kuota kelas masih tersedia.");
  }
  return 0;
}
