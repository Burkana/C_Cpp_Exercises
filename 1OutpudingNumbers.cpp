#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int n;
printf("N=");
scanf_s("%d", &n);


for(int i = 1; i <= n; i++)// for second form
{       printf("\n");
    for(int j = i; j <= n; j ++)
      printf("%d ", i);
}
 printf("\n");
for(int i = n; i >= 1; i--)//for first form
{       printf("\n");
    for(int j = i; j <= n; j++)
      printf("%d ", i);

}
printf("\n");



for(int i = 0; i <= n; i++){
    printf("\n");   
     

    for(int j = i; j <= n - i; j++){printf("%d ", i+1);
   
   } 
    for(int j = i; j >= n - i; j--){printf("%d ", i); }
    
   
 
}



return 0;
}
