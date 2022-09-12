#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entrer un nombre :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%2d x %2d = %2d\n",n,i,n*i);
    }
}
