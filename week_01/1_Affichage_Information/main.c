#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

int main()
{
    char nom[50];
    char prenom[50];
    int age;
    char sexe[20];
    int NTele;
    printf("entrer votre nom : ");
    scanf("%s",&nom);
    printf("entrer votre prenom : ");
    scanf("%s",&prenom);
    printf("entrer votre age : ");
    scanf("%d",&age);
    getchar();
    printf("entrer voter sexe : ");
    scanf("%s",&sexe);
    printf("entrer votre numero de telephone : ");
    scanf("%d",&NTele);
    printf("\n");
    printf("Affichage information : \n");
    printf("nom : %s \n",nom);
    printf("prenom : %s \n",prenom);
    printf("Age : %d \n",age);
    printf("Sexe : %s \n",sexe);
    printf("numero de telephone : %d \n",NTele);
}
