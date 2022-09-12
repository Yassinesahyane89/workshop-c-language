#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   if(n%2 == 0){
    printf("pair");
   }else{
    printf("impair");
   }
}
