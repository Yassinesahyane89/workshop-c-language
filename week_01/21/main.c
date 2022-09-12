#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c;
   printf("entrer un character :");
   scanf("%c",&c);
   if(c>=65 && c<=90){
    printf("character est majuscull .");
   }else{
    printf("character non majuscull .");
   }
}
