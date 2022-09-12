#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("entrer la valeur de a :");
    scanf("%f",&a);
    printf("entrer la valeur de b :");
    scanf("%f",&b);
    printf("a + b = %.2f \n",a+b);
    printf("a - b = %.2f \n",a-b);
    printf("a * b = %.2f \n",a*b);
    printf("a / b = %.2f \n",a/b);
    printf("a % b = %d", (int)a % (int)b );
}
