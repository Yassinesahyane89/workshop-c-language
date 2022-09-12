#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lon, lar;
    printf("longueur : ");
    scanf("%d",&lon);
    printf("largeur : ");
    scanf("%d",&lar);
    printf("circonference = %d",2*(lon * lar));
}
