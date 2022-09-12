#include <stdio.h>
#include <stdlib.h>

void Affiche_Carre(int *T, int *n){
   int i;

   for(i=0;i<*n;i++){
    printf("T[%d] = %d\n",i+1,T[i]*T[i]);
   }

}

void Carre(int a){
   printf("%d",a*a);
}
int main()
{
  int i, n;
  printf("entrer le nombre des element de tableau :");
  scanf("%d",&n);
  int T[n];
  for(i=0;i<n;i++){
    printf("T[%d] = ",i+1);
    scanf("%d",&T[i]);
  }
  Affiche_Carre(T,&n);
  printf("\n");
  for(i=0;i<n;i++){
    Carre(T[i]);
    printf("\n");
  }
}
