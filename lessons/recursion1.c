#include <stdio.h>

/**
 * Scrivere una funzione che dato un array a[] di dim
 * n >= 0, abbia come effetto multilaterale l'inversione
 * di a[].
 * Quindi richiede una funzione ricorsiva che inverta
 * l'array e che come effetto multilaterale modifichi 
 * l'array originale.
 * 
 * Analizziamo il problema:
 * La situazione diventa interessante quando n>1,
 * altrimenti l'array è gia l'inverso di se stesso.
 */

void invertiAux(int arr[], int low, int high);

void inverti(int arr[], int n){
    if(n >= 2) {
        invertiAux(arr, 0, n-1);
    } else {
        return;
    }
}

void invertiAux(int arr[], int low, int high){
    if(low == high) return;
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    invertiAux(arr, low+1, high-1);
}

int main() {
    int dim = 5;
    int arr[] = {1, 2, 3, 4, 5};

    inverti(arr, dim);
    for(int i=0; i<dim; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}