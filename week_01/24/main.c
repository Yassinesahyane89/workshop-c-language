#include <stdio.h>
#include <stdlib.h>

int main()
{
     int randomnumber;
     srand(time(NULL));
    randomnumber = rand() % 7;
    switch(randomnumber){
    case 0 : printf("Lundi");
           break;
    case 1 : printf("Mardi");
           break;
    case 2 : printf("Mecredi");
           break;
    case 3 : printf("Jeudi");
           break;
    case 4: printf("Vendredi");
           break;
    case 5: printf("Samedi");
           break;
    case 6: printf("Dimanche");
           break;
    }
}
