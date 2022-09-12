#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entrer un nombre : ");
    scanf("%d",&a);
    if(a>0){
        printf("le nombre positif");
    }else if(a==0){
        printf("le nombre est null");
    }else{
        printf("le nomnbre est negative");
    }
}
