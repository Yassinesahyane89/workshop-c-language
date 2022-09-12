#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, s=0;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number :");
    scanf("%d",&b);
    if( a == b){
        s = (a + b ) * 3;
    }else{
    s = a + b;
    }
    printf("somme is = %d",s);
}
