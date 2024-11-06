#include <iostream>
#include <stdio.h>

int main(){
int a,b,c;

    do{
  printf("Input interval a:");
        scanf_s("%d", &a);
      printf("Input interval b:");
        scanf_s("%d", &b);
       
    }while(a < 0 || b < 0 || a > b );

    do{
      printf("Input stopping number in the interval[%d;%d]:", a, b);
        scanf_s("%d", &c);
    }while(a >c || b < c);

for(int i = b; i >= a; i--){
 
 if(i%2==0 && i%3==0){ 
    if(i==c)break;
    printf("%d\n", i);
  
   }
 
 

}


return 0;
}
