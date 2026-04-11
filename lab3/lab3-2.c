#include<stdio.h>

/*
    Dato un array, stampare se è palindromo o no
*/


int palindromo(int array[], int n) {
    for(int i=0; i<n/2; i++) {
        if(array[i]!=array[n-1-i]) return 0;
    }

    return 1;
}


int main(){
    int N;
    //leggere da input grandezza array
    scanf("%d", &N);

    int array[N];

    //leggere da input dati array
    for(int i = 0; i < N; i++){
        scanf("%d", array+i);
    }

    if(palindromo(array, N) == 1){
        printf("Array palindromo\n");
    } else printf("Array non palindromo\n");
    
}
