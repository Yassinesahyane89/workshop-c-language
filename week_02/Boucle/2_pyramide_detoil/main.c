#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("entrer le nombre de ligne :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       for(j=n-1;j>i;j--){
        printf("   ");
       }
       for(j=0;j<(i*2)+1;j++){
        printf(" * ");
        }
        printf("\n");
    }
}
