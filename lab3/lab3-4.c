#include <stdio.h>
#include <assert.h>

/*
    Scrivere una funzione che rimuova un elemento da un array.  
*/

int cancella(int *arr, int *dim, int element);

int main(void) {

    int dim, x, i;
    scanf("%d", &dim);
    int A[dim];

    //Lettura array A
    for(i=0; i<dim; i+=1) 
        scanf("%d", A+i);
    scanf("%d", &x);
    
    //// Completate l'invocazione della funzione cancella sostituendo ... con la lista dei parametri attuali
    if (!cancella(A, &dim, x)) 
        printf("impossibile rimuovere l'elemento di indice %d da", x);
    
    //Stampa array A
    for(i=0; i<dim; i+=1)
        printf(" %d", A[i]);
    printf("\n");
}

/**
 * @param {int*} array The address of the first element of the array
 * @param {int} dimension The dimension of the array
 * @param {int} element is the index of the element to remove
 * @returns {boolean} 1 if element was removed, 0 it the element couldn't be removed.
 * 
 * PRE: Array has to be with dimension dim
 * POST: It will return 0 if the element couldn't be remove else 1.
 * the array will become with dimension dim-1 and dim will be 
 * updated to dim-1
 * 
 * 
 */

int cancella(int *arr, int *dim, int element) {
    if (element < 0 || element >= *dim) return 0;

    for (int i = element; i < *dim - 1; i++) {
        arr[i] = arr[i + 1];
    }

    *dim -= 1;

    return 1;
}