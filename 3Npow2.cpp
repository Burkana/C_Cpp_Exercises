#include <iostream>
#include <stdio.h>
#include <math.h>


int main(){
 int n,m=1;
printf("N=");
scanf_s("%d", &n);

for(int i = 1; i <= n+1; i++){
    
    printf("%d", m);
    m = pow(2,i);
    printf("\n");
}

return 0;
}


