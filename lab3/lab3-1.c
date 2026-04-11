#include <stdio.h>
#include <assert.h>

/*
    Funzione che controlla se due array con lo stesso numero di elementi sono uguali.
*/


/* 
    PRE: X e Y sono due array di interi con dim elementi 
    POST: restituisce   1 se per 0<=i<dim. X[i]=Y[i]
                        0 altrimenti
*/
int confronta_array(int *X, int *Y, int dim);
void consegna_moodle();

/* 
    PRE: X punta ad un array di dim elementi
    POST: X riempito con valori letti da tastiera
*/
void leggi_array(int *X, int dim);
void test_confronta_array();


int main(void) {

    //test_confronta_array();
    consegna_moodle();

}


/**
 * In the following code, we don't need to use the *X[i]
 * syntax because using the [] operatoor it will automatically
 * deference the pointer to access the value at that index.
 */

/**
 * @params {*int, *int, int} X, Y, dim
 * @return {int} 1 if the arrays are equal, 0 otherwise
 * 
 * The function confronta_array takes two arrays of integers
 * and check if they are equal by comparing each element of the arrays.
 * If any element is different, it returns 0. If all elements are the same,
 * it returns 1.
 */

int confronta_array(int *X, int *Y, int dim) {
    for(int i=0; i<dim; i++) {
        if (X[i]!=Y[i]) {
            return 0;
        }
    }
    return 1;
}


void leggi_array(int *X, int dim) {

    for(int i=0; i<dim; i+=1) {
        scanf("%d", &X[i]);
    }
}


void test_confronta_array() {

    int X[]={1,2,3,4};
    int Y[]={1,2,3,4};
    assert(confronta_array(X,Y,4)==1);

    int Y2[]={1,3,2,4};
    assert(confronta_array(X,Y2,4)==0);

    int Y3[]={1,2,3,1};
    assert(confronta_array(X,Y3,4)==0);

    int Y4[]={2,2,3,4};
    assert(confronta_array(X,Y4,4)==0);

    int X2[]={};
    int Y5[]={};
    assert(confronta_array(X2,Y5,0)==1);

    printf("Tutti i test superati con successo!\n");
}


void consegna_moodle() {

    int dim;
    scanf("%d", &dim);
    int A[dim], B[dim];
    leggi_array(A, dim);
    leggi_array(B, dim);

    if (confronta_array(A, B, dim)==1) 
        printf("Gli array sono uguali\n");
    else 
        printf("Gli array non sono uguali\n");

}
