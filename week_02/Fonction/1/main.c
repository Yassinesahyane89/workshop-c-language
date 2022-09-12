#include <stdio.h>
#include <stdlib.h>

int add(int a ,int b){
  return  a + b;
}
int main()
{
    int a , b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,add(a,b));
    return 0;
}
