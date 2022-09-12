#include <stdio.h>
#include <stdlib.h>

int Re_lineaire(int *T,int n,int a)
{
    int i;
     for(i=0;i<n;i++){
      if(T[i]==a){
        return i;
      }
   }
   return -1;
}

int main()
{
   int n,i,a,k=-1;
   printf("entrer la dimension de tableau :");
   scanf("%d",&n);
   int T[n];
   for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
   }
   printf("\nentrer la valeur :");
   scanf("%d",&a);
   k=Re_lineaire(T,n,a);
   if(k!=0){
     printf("position de %d est %d",a,k+1);
   }else{
    printf("Errorr!!!!!");
   }
}
