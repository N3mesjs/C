#include <stdio.h>
#include "assert.h"

/*
 * Funzione che determina se una matrice di interi
 * di dimensione righe x colonne è simmetrica. 
 */


int matrice_simmetrica(int *mat, int righe, int colonne);
void test_matrice_simmetrica();
void consegna_moodle();
void leggi_array(int *a, int size);


int main() {

    //test_matrice_simmetrica();
    consegna_moodle();

}


int matrice_simmetrica(int *mat, int righe, int colonne){
if(righe!=colonne) {
    printf("La matrice non è simmetrica");
    return 0;
};

for(int i=0; i<righe; i++){
    for(int j=0; j<colonne; j++){
        int a = mat[i+j];
        int m = mat[];

        if(m != mat[i][j]) {
            printf("La matrice non è simmetrica");
            return 0;
        }
    }
}

}


void test_matrice_simmetrica() {

    int X1[3][3]={  {1,2,3},
                    {2,3,4},
                    {3,4,7} };
    assert(matrice_simmetrica(X1[0],3,3)==1);

    int X2[2][3]={  {1,2,3},
                    {2,3,4} };
    assert(matrice_simmetrica(X2[0],2,3)==0);

    int X3[3][3]={  {1,2,3},
                    {2,3,4},
                    {6,4,7} };
    assert(matrice_simmetrica(X3[0],3,3)==0);
	printf("test_matrice_simmetrica: tutti i test superati con successo\n");
}


void consegna_moodle() {

    int righe, colonne;
    scanf("%d %d", &righe, &colonne);    
    int matrice[righe][colonne];
    leggi_array(*matrice, righe*colonne); 

    if (matrice_simmetrica(&matrice[0], righe, colonne))
        printf("Matrice simmetrica");
    else
        printf("Matrice non simmetrica");

}


/* 
    PRE: size è il numero di elementi dell'array a 
    POST: letti size interi da tastiera, i-esimo intero immesso in a[i-1]
*/
void leggi_array(int *a, int size) {

    for(int i=0; i<size; i+=1)
        scanf("%d", a+i);
}
