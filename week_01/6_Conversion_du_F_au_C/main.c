#include <stdio.h>
#include <stdlib.h>

int main()
{
   float F;
   float C;
   printf("entrer la temperateur en fahrenheit ::");
   scanf("%f",&F);
   printf("la temperateur en degre Celsius :");
   C = (F-32)/1.8;
   printf("%f",C);
}
