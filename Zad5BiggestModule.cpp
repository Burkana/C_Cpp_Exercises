#include <iostream>
#include <stdio.h>

int main(){
     int a,b,Sum = 0,br;
         
     printf("Input value of a: ");
     scanf_s("%d", &a);
     printf("Input value of b: ");
     scanf_s("%d", &b);
     
     Sum = a + b;
    for(int i = 1; i <= Sum; i++){

        if(a%i==0 && b%i==0)br = i;

        
    }

      printf("%d", br);

return 0;     
}