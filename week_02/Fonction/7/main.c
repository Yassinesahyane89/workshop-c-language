#include <stdio.h>
#include <stdlib.h>

void permute(int *a, int *b){
   int k;
   k=*a;
   *a=*b;
   *b=k;
}

int pivot(int *T, int deb, int fin){

  int i, j, pv;
  pv=deb;
  j=deb;
  for(i=deb+1 ; i<=fin ; i++)
  {
    if(T[i]<=T[pv]){
        j++;
        permute(T+i , T+j);
    }
  }
  permute(T+j,T+pv);
  return j;
}

void TriRapid(int *V, int deb, int fin){

   int pv;
   if(deb < fin){
    pv=pivot(V,deb,fin);
    TriRapid(V,deb,pv-1);
    TriRapid(V,pv+1,fin);
   }

}

main(){
    int *T, n, i;
    printf("n = ");
    scanf("%d",&n);
    T=(int*)malloc(n*sizeof(int));
    for(i=0 ; i<n ;i++){
        printf("T[%d] = ", i+1);
        scanf("%d",T+i);
    }
    TriRapid(T, 0, n-1);
    for(i=0 ; i<n ;i++){
        printf("T[%d] = %d",i+1,T[i]);
    }
}
