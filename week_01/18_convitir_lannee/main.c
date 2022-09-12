#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,j=1;
    printf("enter a year :");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0){
        j=0;
    }
    printf("Mois = %d\n",12);
    if(j==0){
        printf("Jours = %d\n",366);
        printf("Heur = %d\n",366*24);
        printf("Minutes = %d\n",366*24*60);
        printf("Secondes = %d\n",366*24*60*60);
    }else{
        printf("Jours = %d\n",365);
        printf("Heur = %d\n",365*24);
        printf("Minutes = %d\n",365*24*60);
        printf("Secondes = %d\n",365*24*60*60);
    }
}
