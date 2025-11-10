#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i, m, n;

  printf("Input nilai m: ");
  scanf("%d",&m);
  printf("Input nilai n: ");
  scanf("%d",&n);

  for( i = m; i < n; i++){
    printf("%d", i);
  }
}