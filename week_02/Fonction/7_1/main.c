#include <stdio.h>
#include <stdlib.h>

void permut(int *a , int *b){
   int c;
   c = *a;
   *a = *b;
   *b = c;
}

int pivot(int *T, int first , int last){
    int i , j , pv ;
    j = first;
    pv = first;
    for(i = first + 1 ; i <= last ; i++){
        if (T[i]<=T[pv]){
            j++;
            permut(T+j , T+i);
        }
    }
    permut(T+pv , T+j);
    return j;
}

void TriRapid(int T , int first , int last){

  int pv;

  if(first < last){
    pv = pivot(T , first , last);
    TriRapid(T, first , pv-1);
    TriRapid(T , pv+1 , last);
  }

}

void afficher(int *T, int n){
   int i;
   for(i = 0 ; i < n ; i++){
    printf("%d   ",T[i]);
   }
}

int main()
{
    int T[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(T)/sizeof(T[0]);
    printf("le tableau avant tri\n");
    afficher(T,size);
    TriRapid(T , 0 , size-1);
    printf("\nle tableau apres tri\n");
    afficher(T,size);

}
