#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a ,b, i=0,c=0;
    printf("entrer la nombre");
    scanf("%d",&a);
    printf("le nombre en inverse :");
    while(a>0){
        b=a%10;
        c=(c*10)+b;
        a/=10;
    }
    printf("%d",c);*/



    int i,j;
    for(i=0;i<10;i++){
            printf("%d",i);
        for(j=0;j<10;j++){
            if(j==5){
                break;
            }
            printf("%d",j);
        }
        printf("\n\n");
    }


































}
