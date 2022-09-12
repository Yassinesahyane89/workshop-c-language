#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a=-15, b=-10, m, fa,fm;
    printf("   la solution de l'equation x3+12x2+1=0 .\n");
    while((b-a)>0.00001){
        m=a+(b-a)/2;
        fa=a*a*a+12*a*a+1;
//        fb=b*b*b+12*b*b+1;
        fm=m*m*m+12*m*m+1;
        if(fa*fm<=0)
            b=m;
        else
            a=m;
    }
    fa=a*a*a+12*a*a+1;
    printf("la solution est %.7f  %.7f",a,fa);
      return 0;

}
