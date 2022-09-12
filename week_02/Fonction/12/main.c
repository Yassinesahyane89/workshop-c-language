#include <stdio.h>
#include <stdlib.h>

void insere(int *a, int *n){
   int b, pos, i;
   printf("entrer  la valeur inserer : ");
   scanf("%d",&b);
   printf("entrer la position : ");
   scanf("%d",&pos);
   pos--;
   (*n)++;
   for(i=*n-1;i>pos;i--)
    {
       a[i]=a[i-1];
    }
   a[i]=b;
//   printf("%d",a[i]);
   for(i=0;i<*n;i++){
    printf("%d\n",a[i]);
   }

}

int main()
{
    int n,i,arr[100];
    printf("entrer le nombre des element de tableau :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("la valeur %d :",i+1);
        scanf("%d",&arr[i]);
    }
    insere(arr,&n);
}
