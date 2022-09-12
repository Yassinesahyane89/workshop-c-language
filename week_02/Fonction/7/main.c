#include <stdio.h>
#include <stdlib.h>
//void echange(int *t,i,j){
//    int tmp;
//    tmp=t[i];
//    t[i]=t[j];
//    t[j]=t[i];
//}
//
//void partition(int *t, int i, int j){
//  int compt = deb;
//  int pivot=t[deb];
//  int i;
//  for(i=deb+1 ; i<=fin ;i++){
//    compt++;
//    echange(t,compt,i);
//  }
//  echange(t,compt,deb);
//  return compt;
//}
//
//void tri_rapide_bis(int *t, int debut, int fin){
//   int pivot=partition(t,debut,fin);
//   tri_rapide_bis(t,debut,pivot-1);
//   tri_rapide_bis(t,pivot+1,fin);
//
//}
//
//void tri_rapide(int *t, int n){
//   tri_rapide_bis(t,0,n-1);
//}
//int main()
//{
//    int n,i;
//   printf("veuillez la dimension de tableau : ");
//   scanf("%d",&n);
//   int T[n];
//   for(i=0;i<n;i++){
//    printf("T[%d] = ",i+1);
//    scanf("%d",&T[i]);
//   }
//   printf("tableau avant tri :\n");
//   for(i=0;i<n;i++){
//    printf("T[%d] = %d",i+1,T[i]);
//   }
//}



void permuter(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void triRapid(int tab[], int first, int last) {
    int pivot, i, j;
    if(first < last) {
        pivot = first;
        i = first;
        j = last;
        while (i < j) {
            while(tab[i] <= tab[pivot] && i < last)
                i++;
            while(tab[j] > tab[pivot])
                j--;
            if(i < j) {
                permuter(&tab[i], &tab[j]);
            }
        }
        permuter(&tab[pivot], &tab[j]);
        triRapid(tab, first, j - 1);
        triRapid(tab, j + 1, last);
    }
}
int main() {
    int tab[100], nbr, i;

    printf("\n Entrer le nombre total d'elements :  ");
    scanf("%d", &nbr);

    printf("\n Entrer les elements du tableau  :  ");
    for(i = 0; i < nbr; i++){
       printf("T[%d] = ");
       scanf("%d",&tab[i]);
    }

//    triRapid(tab, 0, nbr - 1);
//
//    printf("\n Tableau trié : ");
//    for(i = 0; i < nbr; i++)  {
//        printf(" %4d", tab[i]);
//    }
//    printf("\n");
    return 0;
}
