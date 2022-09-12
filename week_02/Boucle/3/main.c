#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,j=0,i;
    printf("entrer un nombre :");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            j=1;
        }
    }
    if(j==0){
        printf("%d est un nombre premier .",n);
    }else{
        printf("%d est un nombre nom premier .",n);
    }
}
