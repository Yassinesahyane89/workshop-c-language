#include <stdio.h>
#include <stdlib.h>
void echange(int *a,int *b){
    int c;
     c=*a;
     *a=*b;
     *b=c;
}

int main()
{
    int a , b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("avant echange :\n");
    printf("a = %d\nb = %d\n",a,b);
    printf("apres echange :\n");
    echange(&a,&b);
    printf("a = %d\nb = %d\n",a,b);
}
