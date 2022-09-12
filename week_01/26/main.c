#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,y,x1,y1,x2,y2,d1,d2,d3;

    printf("entrer le coordonnee de premier point de segment:\n\n");

    printf("   x = ");
    scanf("%d",&x1);
    printf("   y = ");
    scanf("%d",&y1);

    printf("entrer le coordonnee de deuxieme point de segment :\n\n");

    printf("   x = ");
    scanf("%d",&x2);
    printf("   y = ");
    scanf("%d",&y2);

    printf("entrer le coordonnee de point dans le plan :\n\n");
    printf("   x = ");
    scanf("%d",&x);
    printf("   y = ");
    scanf("%d",&y);

    d1=sqrt(pow((x-x1),2)+pow((y-y1),2));
    d2=sqrt(pow((x-x2),2)+pow((y-y2),2));
    d3=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    if(d3-d1==d2){
        printf("le point trouve dans le segment");
    }else{
        printf("le point ne trouve pas dans le segment");
    }
}
