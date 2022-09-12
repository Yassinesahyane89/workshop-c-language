#include<stdio.h>
#include <string.h>

int main(){
   float C, F;
   printf("entrer la temperateur en Fahrenheit :");
   scanf("%f",&F);
   printf("la valeur en degre celsius :");
   C=(F-32)/1.8;
   if(C<10){
    printf("tres froid");
   }else if (C>10 && C<20){
    printf("froid");
   }else if(C>20 && C<50){
    printf("chaud");
   }else{
       printf("tres chaud");
   }
   printf("%f",C);
}
