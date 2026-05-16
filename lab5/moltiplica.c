#include <stdio.h>

/**
 * PRE: la variabile b deve essere >= di 0
 * POST: viene restituita la somma della variabile a sommata
 * a se stessa b volte
 * VARIANTE E DECRESCITA: a ogni ricorsione la variabile b decresce 
 * di 1 fin quando non si arriva alla situaizone in cui b coincida a 0
 * 
 */
int moltiplica(int a, int b) {
    /* scrivere ricorsivamente la funzione che moltiplica a*b. Assumere b ≥ 0 */

    if(b==0){
        return 0;
    }

    return a + moltiplica(a, b-1);
}


int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d\n", moltiplica(a,b));
 return 0;
}