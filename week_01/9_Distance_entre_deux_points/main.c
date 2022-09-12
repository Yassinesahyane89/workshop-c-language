#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    float distance;
    printf("entre le cordonnees de premier point .\n");
    printf("  x = ");
    scanf("%d",&x1);
    printf("  y = ");
    scanf("%d",&y1);
    printf("entre le cordonnees de deuxiem point .\n");
    printf("  x = ");
    scanf("%d",&x2);
    printf("  y = ");
    scanf("%d",&y2);
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("la distance entre le deux point : %.2f",distance);
}
