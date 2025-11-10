#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  const char correctPassword[] = "helloWorld123";
  char input[100] ;
  int berhasil = 0, gagal = 0;

  do {
    printf("Masukkan password: ");
    scanf("%s", input);
    gagal++;

    if(strcmp(input, correctPassword)== 0){
        printf("Login Berhasil!\n");
        berhasil = 1;
        break;
    }else{
      if(gagal < 3) {
        printf("Password salah! Sisa percobaan: %d\n",3 - gagal);
      }
    }
  } while (gagal < 3);

  if(!berhasil && gagal == 3){
    printf("Akun terkunci!\n");
  }
  return 0;
}