#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, s1, s2, delta;
    printf("             Equation(aX^2 + bX + c)          \n");
    printf("enter value a :");
    scanf("%f",&a);
    printf("enter value b :");
    scanf("%f",&b);
    printf("enter value c :");
    scanf("%f",&c);
    delta = (b * b) - 4 * a * c;
    if(delta > 0){
        printf("\nequation accept two solution\n");
        s1 = ((-b + sqrt(delta))/(2*a));
        s2 = ((-b - sqrt(delta))/(2*a));
        printf("    s1 = %f\n",s1);
        printf("    s2 = %f\n",s2);
    }else if(delta == 0){
        printf("\nequation accept One solution\n");
        s1 = ((-b)/(2*a));
        printf("    s1 = %f",s1);
    }else{
        printf("\nequation don't accept solution");
    }
}
