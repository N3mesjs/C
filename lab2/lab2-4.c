#include <stdio.h>

/* 
 * Definire una funzione che, dati due interi: base ed esponente, restituisce 
 * base elevata ad esponente. Il prototipo della funzione è il seguente: 
 * 
 * int potenza(int base, int esponente);
 *
 * La funzione deve soddisfare le seguenti PRE e POST:
 * PRE - base è un intero >=1 ed esponente un intero >= 0.
 * POST - la funzione restituisce base^esponente.
 * 
 * Es. se l'input è: "2 3" stampa 
 * 8
 * Es. se l'input è: "15 0" stampa
 * 1
 * 
 */

long long int potenza(int base, int exp) {
    long long int result = 1;

    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    return result;
}

int main (void) {

    int base, exp;
    
    printf("Inserisci base ed esponente: ");
    scanf("%d %d", &base, &exp);

    if (base < 1 || exp < 0) {
        printf("Errore: la base deve essere >= 1 e l'esponente >= 0.\n");
        return 1;
    }

    printf("%lld\n", potenza(base, exp));

    return 0;
}