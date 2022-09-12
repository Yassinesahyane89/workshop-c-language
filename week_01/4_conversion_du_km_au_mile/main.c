#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Mille ,metr;
    printf("entrer la distance en mile .");
    scanf("%f",&Mille);
    printf("la distance en meter :");
    metr = (Mille/1.609)*1000;
    printf("%f",metr);
}
