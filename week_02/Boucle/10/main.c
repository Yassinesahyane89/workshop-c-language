#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s=0,n;
    for(i=0;i<10;i++){
        printf("entrer nombre %d : ",i+1);
        scanf("%d",&n);
        if(n<0){
            continue;
        }
        s=s+n;
    }
    printf("la some est : %d",s);
}
