#include <stdio.h>

/*
 * Dato un array di interi di lunghezza N, scrivere un programma che stampa
 * "Array palindromo" se l'array è palindromo o "Array non palindromo" se non lo è.
 * Un array è definito palindromo se invertendolo rimane uguale (es. [1, 2, 3, 2, 1] è palindromo)
 * 
 * Per questa l'implementazione ci rifaremo letteralmente alla
 * definizione data sopra: creeremo una funzione che 
 * inverte un array ed una che confronta due array. 
 * Realizzate le due funzioni secondo i prototipi forniti
 * ed infine usatele all'interno di una funzione 
 * palindromo che realizzi la consegna. 
 */

int confronta_array(int *X, int *Y, int dim);
void inverti(int *A, int dim);
void leggi_array(int *X, int dim);
int palindromo(int array[], int n);


int main(){
    int N;
    //leggere da input grandezza array
    scanf("%d", &N);

    int array[N];
    //leggere da input dati array
    leggi_array(array, N);

    if(palindromo(array, N) == 1){
        printf("Array palindromo\n");
    } else printf("Array non palindromo\n");
    
}

/**
 * @param {int*} X the address of the first element of the first array
 * @param {int} dim The dimension of the array
 * @return {void}
 * 
 * PRE: X is an array with dimension dim
 * POST: X will be filled with the values read from user input
 */
void leggi_array(int *X, int dim){
    for(int i=0; i<dim; i++) {
        scanf("%d", &X[i]);
    }
}

/**
 * @param {int*} X the address of the first element of the first array
 * @param {int*} Y the address of the first element of the second array
 * @param {int} dim The dimension of the arrays
 * @return {int} 1 if the arrays are equal, 0 otherwise
 * 
 * PRE: X and Y are arrays with dimension dim
 * POST: It will return 1 if the arrays are equal, 0 otherwise
 */
int confronta_array(int *X, int *Y, int dim){
    for(int i=0; i<dim; i++) {
        if(X[i] != Y[i]) return 0;
    }

    return 1;
};

/**
 * @param {int*} A the address of the first element of the array
 * @param {int} dim The dimension of the array
 * @return {void}
 * 
 * PRE: A is an array with dimension dim
 * POST: A will be inverted in place
 */
void inverti(int *A, int dim) {
    int temp;

    for(int i=0; i<dim/2; i++) {
        temp = A[i];
        A[i] = A[dim-1-i];
        A[dim-1-i] = temp;
    }
}

/**
 * @param {int*} array the address of the first element of the array
 * @param {int} n The dimension of the array
 * @return {int} 1 if the array is a palindrome, 0 otherwise
 * 
 * PRE: array is an array with dimension n
 * POST: It will return 1 if the array is a palindrome, 0 otherwise
 */

int palindromo(int array[], int n){
    int inverted[n];
    for(int i=0; i<n; i++) {
        inverted[i] = array[i];
    }

    inverti(inverted, n);

    return confronta_array(array, inverted, n);
}