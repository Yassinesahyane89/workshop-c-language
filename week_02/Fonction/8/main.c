#include <stdio.h>
#include <stdlib.h>

int Re_binaire(int *T,int n,int a)
{
    int i,low,high,m;
    low=0;
    high=n-1;

    while(high>=low){
        m=(low+high)/2;
        if(a==T[m]){
           return m;
        }
        if(T[m]<a){
            low=m+1;
        }else{
            high=m-1;
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
   k=Re_binaire(T,n,a);
   if(k!=0){
     printf("position de %d est %d",a,k+1);
   }else{
    printf("Errorr!!!!!");
   }
}
