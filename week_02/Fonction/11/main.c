#include <stdio.h>
#include <stdlib.h>
void perm(int * a,int * b){
   int c;
   c=*a;
   *a=*b;
   *b=c;
}
int main()
{
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("Avant permutation :\n");
    printf("a = %d\nb=%d",a,b);
    printf("Apres permutation :\n");
    perm(&a,&b);
    printf("a = %d\nb=%d",a,b);
}
