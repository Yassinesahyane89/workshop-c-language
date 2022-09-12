#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,a;
    char arr[20];
    printf("veuillez entrer date ce form dd/mm/aaaa :\n");
    printf("entrer le jour :");
    scanf("%d",&d);
    printf("entrer le mois :");
    scanf("%d",&m);
    printf("entrer l'annee:");
    scanf("%d",&a);
    printf("votre date : ");
    switch(m){
    case 1 : printf("%d-Janvier-%d",d,a);
             break;
    case 2 : printf("%d-fevrier-%d",d,a);
             break;
    case 3 : printf("%d-mars-%d",d,a);
             break;
    case 4 : printf("%d-avril-%d",d,a);
             break;
    case 5 : printf("%d-mai-%d",d,a);
             break;
    case 6 : printf("%d-juin-%d",d,a);
             break;
    case 7 : printf("%d-juillet-%d",d,a);
             break;
    case 8 : printf("%d-aout-%d",d,a);
             break;
    case 9 : printf("%d-septembre-%d",d,a);
             break;
    case 10 : printf("%d-octobre-%d",d,a);
             break;
    case 11 : printf("%d-novempbre-%d",d,a);
             break;
    case 12 : printf("%d-decembre-%d",d,a);
             break;

    }
}
