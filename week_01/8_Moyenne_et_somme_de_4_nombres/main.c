#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i=0;
    float s=0;
    char c;
    printf("enter number %d :",i+1);
    scanf("%d",&a);
    i++;
    s+=a;
    getchar();
    printf("do you want to add other number (Y/N): ");
    scanf("%c",&c);
    if(c == 'N'){
        printf("le moyenne est %.2f:",s/i);
        return 0;
    }
     printf("enter number %d :",i+1);
    scanf("%d",&a);
    i++;
    s+=a;
    getchar();
    printf("do you want to add other number (Y/N): ");
    scanf("%c",&c);
    if(c=='N'){
        printf("le moyenne est : %.2f",s/i);
        return 0;
    }
     printf("enter number %d :",i+1);
    scanf("%d",&a);
    i++;
    s+=a;
    getchar();
    printf("do you want to add other number (Y/N): ");
    scanf("%c",&c);
    if(c=='N'){
        printf("le moyenne est : %.2f",s/i);
        return 0;
    }
     printf("enter number %d :",i+1);
    scanf("%d",&a);
    i++;
    s+=a;
    getchar();
    printf("do you want to add other number (Y/N): ");
    scanf("%c",&c);
    if(c=='N'){
        printf("le moyenne est : %.2f",s/i);
        return 0;
    }

}
