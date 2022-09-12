#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=0,n;
    printf("entrer la nombre n :");
    scanf("%d",&n);
    printf("%d\n%d\n",1,2);
    for(i=3;i<=n;i++){
            k=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                k=1;
            }
        }
        if(k==0){
            printf("%d\n",i);
        }
    }
}
