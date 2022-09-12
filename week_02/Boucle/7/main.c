#include <stdio.h>
#include <stdlib.h>

int main()
{
    int U0=1,U1=1,Un,n,i;
    printf("entrer la valeur de n : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        Un=U1+U0;
        U0=U1;
        U1=Un;
    }
    printf("nieme terùe de la suite de fibonacci est: %d",Un);
}
