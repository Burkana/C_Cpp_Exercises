#include <iostream>
#include <stdio.h>

int main(){
int n,num,min;

    do{
  printf("How many number to input:");
    scanf_s("%d", &n);
    }while(n < 0);

for(int i = 1; i <= n; i++){
      printf("Num%d=", i);
      scanf_s("%d", &num);
      if(min > num) min = num;

}
printf("MinNumber: %d", min);


}
