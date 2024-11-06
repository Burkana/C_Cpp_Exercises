#include <iostream>
#include <stdio.h>



int main(){
     int n;

     do{
     printf("Input number between 1 and 56: ");
     scanf_s("%d", &n);
        if(n < 1 || n > 56) printf("Error\n");
     }while(n < 1 || n > 56); 
     printf("GoodJob");
      

     return 0;
}