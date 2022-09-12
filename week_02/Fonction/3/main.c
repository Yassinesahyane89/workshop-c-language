#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPremier(int n){
   int k=0,i;
   for(i=2;i<=n/2;i++){
    if(n%i == 0){
        k=1;
    }
   }
   return k==0;
}
int main()
{
    int n;
    printf("entrer un nombre : ");
    scanf("%d",&n);
    if(isPremier(n))
      printf("%d is premier :",n);
    else
      printf("%d is not premier :",n);
}
