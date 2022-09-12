#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Mille ,metr;
    printf("entrer la distance en metre .");
    scanf("%f",&metr);
    printf("la distance en Mille :");
    Mille = metr*1609;
    printf("%f",Mille);
}
