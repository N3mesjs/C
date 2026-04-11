#include <stdio.h>

/*
    Funzione che inverte i valori di un array  
 */


/* 
    PRE: L'array A ha dimensione dim 
    POST: ...
*/
void inverti(int *A, int dim);
void stampa_array(int *A, int dim);
void leggi_array(int *X, int dim);


int main(void) {
         
    int dim;
    scanf("%d", &dim);
    int A[dim];
    leggi_array(A, dim);
        
    inverti(A, dim);
    stampa_array(A, dim);

}


void inverti(int *A, int dim) {
    for(int i=0; i<dim/2; i++) {
        int temp = A[i];
        A[i] = A[dim-1-i];
        A[dim-1-i] = temp;
    }
}


void stampa_array(int *A, int dim) {

    printf("[");
    for (int i = 0; i < dim; i+=1)
        printf(" %d",A[i]);
    printf(" ]\n");

}


void leggi_array(int *X, int dim) {
    for(int i=0; i<dim; i+=1)
        scanf("%d", &X[i]);
}
