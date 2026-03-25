#include <stdio.h>

/*
   PRE: lung>0, lung=|A|
   POST restituisce l'indirizzo del valore minore in B
*/
int * ind_minimo(int B[], int lung) {
    int * p = B;
    for(int i=1; i<lung; i+=1) {
       if(B[i] < *p) 
           p=&B[i];
    }
    return p;
}

int main () {
  int A[] = {4,1,2,3};
  int *p = ind_minimo(A, 4);
  printf("%d\n", *p);
}