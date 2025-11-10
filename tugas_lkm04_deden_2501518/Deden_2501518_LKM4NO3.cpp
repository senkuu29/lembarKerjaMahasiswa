#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, n;
  int faktorial = 1;

  printf("Input nilai n: ");
  scanf("%d",&n);

  printf("Proses: %d! = ",n);

  i=n;
  while( i > 0){
    printf("%d", i);
    if(i > 1){
      printf(" x ");
    }
    faktorial *= i;
    i--;
  }

  printf("\nFaktorial dari %d adalah %d\n",n, faktorial );
}