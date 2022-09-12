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
bool divededby(int n,int a){
  return isPremier(n/a);
}
int main()
{
    int a,b;
    printf("a =  ");
    scanf("%d",&a);
    printf("b =  ");
    scanf("%d",&b);

    if(divededby(a,b))
      printf("%d is premier ",a/b);
    else
      printf("%d is not premier ",a/b);
}
