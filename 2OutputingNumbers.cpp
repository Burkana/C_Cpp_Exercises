#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int n,row=1,m=2;
printf("N=");
scanf_s("%d", &n);


for(int i = 1; i <= n; i++)
{ 
  printf("%d ", i);
  if(i==row){ printf("\n"); row += m; m++;}// i = 1 ;i = 3 ; i = 6; i = 10 row capacity = 1 full row capacity = 3; full row capacity
 
    
}

return 0;

}
