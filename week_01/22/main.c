#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float m, a;
   printf("veuillez entrer la moyenne :");
   scanf("%f",&m);
   if(m<10)
    printf("il est recalé");
   else if (m >=10 && m<12)
    printf("passable");
   else if (m>=12 && m< 14 )
    printf("assez bien");
   else if (m>=14 && m<16)
    printf("bien");
   else
    printf("tres bien");


}
