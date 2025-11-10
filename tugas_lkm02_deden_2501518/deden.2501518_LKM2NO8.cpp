#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int totalTugas = 10, pengerjaan = 0;
  printf("total tugas yang di kerjakan : ");
  scanf("%d", &pengerjaan);
  
  if(pengerjaan > 10){
      printf("tidak ada tugas sebanyak itu kamu berbohong");
    }else if(pengerjaan >= 9){
      printf("lulus");
    }else if (pengerjaan > 6 && pengerjaan < 9) {
      printf("perlu pengerjaan tugas tambahan");
    }else{
    printf("perlu pengerjaan projek tambahan");
  }
  return 0;
}