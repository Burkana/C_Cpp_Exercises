#include <iostream>
#include <stdio.h>

int main(){
int decimal;

for(int i = 1; i <= 1000; i++){
     decimal = i % 10;
    if(decimal==7)printf("%d\n", i);

}

return 0;
}
