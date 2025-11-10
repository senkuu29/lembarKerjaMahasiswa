#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int nilai;

     printf("masukan nilai ujian : ");
     scanf("%d", &nilai);

     if(nilai >= 60){
        printf(" lulus ujian");
     }else{
        printf("mengulang ujian");
     }
}