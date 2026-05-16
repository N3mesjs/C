#include <stdio.h>

/*
 * SPECIFICA DELLA FUNZIONE
 * * PRE-condizione: 
 * L'argomento 'n' deve essere un numero intero maggiore o uguale a zero (n >= 0).
 * * POST-condizione: 
 * La funzione restituisce la somma dei primi 'n' numeri interi (1 + 2 + ... + n).
 * Nel caso speciale in cui n == 0, la funzione restituisce 0.
 */
int somma(int n) {
    if(n == 0){
        return 0;
    }

    return n + somma(n-1);
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", somma(n));
 return 0;
}
