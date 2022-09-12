#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1,m1,s1,h2,m2,s2;

    printf("                 entrer un instants dans le format HH:MM:SS \n");

    printf("entrer le premier instants ");
    scanf("%d:%d:%d",&h1,&m1,&s1);

    printf("entrer le second instants ");
    scanf("%d:%d:%d",&h2,&m2,&s2);

    if(h1>h2 || m1>m2 || s1>s2){
        printf("Le deuxième instant vient avant le premier");
    }else if(h1<h2 || m1<m2 || s1<s2){
        printf("Le premier instant vient avant le deuxième");
    }else{
        printf("Il s'agit du même instant.");
    }

    return 0;
}
