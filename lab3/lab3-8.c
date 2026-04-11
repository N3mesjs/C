#include <stdio.h>

/*
* Dato un array di interi positivi (maggiori di 0), un nuovo valore e un indice, incrementare l'array inserendo il nuovo valore nella posizione indicata dall'indice.
* Il programma deve poi stampare il nuovo array. 
* Il programma non deve utilizzare nuove variabili di tipo array, ma modificare l'array di input.
* Inoltre il programma deve sfruttare la conoscenza dei puntatori per accedere agli elementi (non usare A[i] eccetto che per la stampa).
* 
* Per esempio se l'array fosse [2,11,14,3,6,8], il nuovo valore 7 e la posizione 3, l'array incrementato e la stampa attesa dal programma sarebbe:
* "2, 11, 14, 7, 3, 6, 8"
*
* Notate che l'array deve essere dichiarato di dimensione
* maggiore del numero di elementi con cui si inizializza 
* (perché andremo ad inserirne 1), perciò si assume che le 
* restanti posizioni dell'array siano inizializzate a 0. 
* Ad esempio se l'array sopra è stato dichiarato come 
* int[9] allora sarebbe inizializzato come 
* int a[9] = {2,11,14,3,6,8,0,0,0}. 
*
*/

void leggi_array(int *X, int dim);
void incrementa_array(int* A, int length, int x, int pos);

int main() {

    // Per testare più velocemente il vostro algoritmo
    // potete usare le istruzioni fornite sotto. 
    // Quando siete pronti a consegnare potete ricommentare le seguenti righe.
    
    
    int length = 10;
    int A[10] = {1,8,4,7,12,3,2,0,0,0}; 
    int x = 5;
    int pos = 4;
    
     
    // Decommentare le seguenti istruzioni per la consegna. 
    // int length, x, pos;
    // scanf("%d", &length);
    // scanf("%d", &x);
    // scanf("%d", &pos);

    // int A[length];
    //leggi_array(A, length);
    
    incrementa_array(A,length,x,pos);
    
    printf("[");
    for (int i = 0; (i<length) && (A[i]!=0); i++)
        printf(" %d",A[i]);
    printf(" ]\n");

    return 0;
}

/**
 * @param {int*} X the address of the first element of an array of integers
 * @param {int} dim The dimension of the array
 * @return {void}
 * 
 * A function to build an array based on user input
 */

void leggi_array(int *X, int dim){
    int i=0;

    while(i<dim) {
        scanf("%d", X);
        X++;
        i++;
    }
}

/**
 * @param {int*} A the address of the first element of an array of integers
 * @param {int} lenght, lenght of the array
 * @param {int} x is the element we want to insert
 * @param {int} pos is the index where we want to insert the new element 
 * @return {void}
 * 
 * A function to insert a new element inside an array with 
 * given index and value of the element
 */

void incrementa_array(int* A, int length, int x, int pos){
    int i = length-1;
    A += length-1;

    while(i>pos){
        *A = *(A-1);
        A--;
        i--;
    }
    *A = x;
}
