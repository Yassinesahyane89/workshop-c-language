#include <stdio.h>
#include <stdlib.h>

int main()
{
   float F;
   float C;
   printf("entrer la temperateur en degre Celsius :");
   scanf("%f",&C);
   printf("la temperateur en fahrenheit :");
   F = (C*1.8)+32;
   printf("%f",F);
}
