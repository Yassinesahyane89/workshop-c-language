#include <stdio.h>
#include <stdlib.h>
void tri_bulles(int *T,int n){
  int i,j,c;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(T[i]>T[j]){
            c=T[i];
            T[i]=T[j];
            T[j]=c;
        }
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n",T[i]);
  }

}
int main()
{
   int n,i;
   printf("entrer la dimension de tableau :");
   scanf("%d",&n);
   int T[n];
   for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
   }
   tri_bulles(T,n);
}
