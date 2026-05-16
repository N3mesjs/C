#include <stdio.h>

/*
* Scrivete un programma che calcoli la trasposta di una matrice generica.
*
* L'operazione consiste nello scambiare le righe con le colonne.
*
* Esempio:
* |a b c| ____ |a d|
* |d e f|      |b e|
*              |c f|
*
*/

//Funzione ausiliaria lettura array
void leggi_array_loc(int* A, int dim){
    for(int i =0; i<dim; i++){
        scanf("%d", A+i);
    }
}

//Funnzione ausiliaria stampa matrice
void stampa_matrice_loc(int *M, int r, int c){
    for (int i = 0; i < r; i += 1){ 
        for (int j = 0; j < c; j += 1){ 
            printf("%d ", *(M + j + i*c));
        } 
        printf("\n"); 
    } 
}


int main()
{
    // Per testare più velocemente il vostro algoritmo potete 
    // usare la matrice sotto (modificandola secondo le vostre necessità)
    // invece di leggerla da input con scanf. Quando siete pronti a
    // consegnare potete ricommentare le 2 righe seguenti.
    
    //int righe = 3, colonne = 3;
    //int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // creiamo e instanziamo le variabili di supporto per la dimensione della matrice
    int righe, colonne;
    scanf("%d %d", &righe, &colonne);

    // definiamo ed instanziamo la matrice
    int mat1[righe][colonne];
    leggi_array_loc(*mat1, righe*colonne);


    // dichiarate la matrice che conterrà la trasposta
    
    // riempite la matrice appena dichiarat in modo che risulti la trasposta della matrice mat1

    int matRisultato[3][3];

    for(int i = 0; i<righe; i++){
        for(int j = 0; j<colonne; j++){
            matRisultato[j][i] = mat1[i][j];
        }
    }

    //stampiamo il risultato
    stampa_matrice_loc(*matRisultato, colonne, righe);

    return 0;
}