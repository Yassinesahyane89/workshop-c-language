#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,s=0,max=0;
    while(n!=0){
        printf("entrer le nombre %d :",i+1);
        scanf("%d",&n);
        while(n>100){
        printf("Error!!!!!!entrer le nombre %d :",i+1);
        scanf("%d",&n);
       }
       s+=n;
       if(n>max){
            max=n;
        }
        i++;
    }
    printf("la somme des nombre  : %d\n",s);
    printf("le maximum de nombre : %d\n",max);
}
