#include <stdio.h>
#include <stdlib.h>

void merge_sort(int *T, int first, int m, int last)
{
    int n1 = m - first + 1;
    int n2 = last - m;
    int i, j, k;
    int L[n1], R[n2];

    for(i = 0 ; i < n1 ; i++){
        L[i] = T[first + i];
    }

    for(j = 0 ; j < n2 ; j++){
        R[j] = T[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = first;
    while(i < n1 && j < n2){
        if( L[i] <= R[j]){
            T[k] = L[i];
            i++;
        }else{
            T[k] = R[j];
            j++;
        }
        k++;
    }
    while( i < n1){
        T[k] = L[i];
        i++;
        k++;
    }

    while( j < n2){
        T[k] = R[j];
        j++;
        k++;
    }
}

void merge(int *T, int first, int last){
   int m;

   if(first<last){

    m = (first + last) / 2 ;

    merge(T, first, m);
    merge(T, m+1, last);

    merge_sort(T, first, m, last);

   }
}

void afficher(int *T, int n)
{
    int i;
    for(i = 0 ; i < n ; i++){
        printf("%d  ",T[i]);
    }
}
int main()
{
    int T[]={12,-1,4,0,12,43,55,-9,11};
    int size = sizeof(T)/sizeof(T[0]);
    printf("le tableau avant tri\n");
    afficher(T,size);
    merge(T,0,size-1);
    printf("\nle tableau apre tri\n");
    afficher(T,size);

}
