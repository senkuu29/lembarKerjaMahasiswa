#include <stdio.h>
#include <stdlib.h>
int main (){
    int massa=1000, v1=0, v2=20, t=10;
    printf("Massa = %d\n",massa);
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);
    printf("t = %d\n", t);
    
    int a;
    a = (v2 - v1) / t;

    int F;
    F=massa*a;

    printf("F = %d",F);
    return 0;
}
     



    


     

