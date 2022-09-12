#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Entry a character :");
    scanf("%c",&c);
    switch(c){
    case 'a' :  printf("voyelle");
                break;
    case 'e' :  printf("voyelle");
                break;
    case 'i' :  printf("voyelle");
                break;
    case 'o' :  printf("voyelle");
                break;
    case 'u' :  printf("voyelle");
                break;
    case 'A' :  printf("voyelle");
                break;
    case 'E' :  printf("voyelle");
                break;
    case 'I' :  printf("voyelle");
                break;
    case 'O' :  printf("voyelle");
                break;
    case 'U' :  printf("voyelle");
                break;
        default: printf("not a voyell");
                 break;
    }

}
