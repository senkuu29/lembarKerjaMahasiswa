#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int kehadiran = 0;
  printf("total kehadiran : ");
  scanf("%d", &kehadiran);
  
  if(kehadiran >= 80){
     printf("lulus");
    }else if(kehadiran >= 60 && kehadiran < 80){
      printf("perlu perbaikan");
  }else{
    printf("tidak lulus");
  }
}