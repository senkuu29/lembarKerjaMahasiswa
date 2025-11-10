#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, n;

  printf("Input nilai n: ");
  scanf("%d",&n);

  for( i = 1; i < n; i += 2){
    printf("%d", i);
  }
}