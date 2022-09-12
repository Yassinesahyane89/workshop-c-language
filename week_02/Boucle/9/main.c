#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,b,p=1;
   printf("entrer le nombre de la base:");
   scanf("%d",&b);
   printf("entrer l'exposant:");
   scanf("%d",&n);
   while(n>=0){
    if(n==0){
        break;
    }
    p=p*b;
    n--;
   }
   printf("la puissance est : %d",p);
}
