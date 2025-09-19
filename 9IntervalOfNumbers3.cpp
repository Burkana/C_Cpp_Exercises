#include <iostream>
#include <stdio.h>

int main(){
int decimal,a,b;

    do{
  printf("Input interval a:");
        scanf_s("%d", &a);
      printf("Input interval b:");
        scanf_s("%d", &b);
    }while(a < 0 || b < 0 || a > b);


for(int i = a; i <= b; i++){
     decimal = i % 10;
    if(decimal==3)printf("%d\n", i);

}


return 0;
}
