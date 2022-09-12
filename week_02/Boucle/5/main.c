#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=0,b,j=0;
    printf("entrer un nombre :");
    scanf("%d",&n);
    while(n>0){
       a =(10*a)+n%10;
       n/=10;
       j++;
    }
    printf("linvers est %d",a);
}
