#include <stdio.h>

/*
 * Stampare l'insieme dei divisori non banali 
 * di un numero x>0 oppure se è primo. 
 */

int main() {
    int x;
    int count = 0;

    printf("Inserisci un numero >= di 1: ");
    scanf("%d", &x);

    if (x <= 1) {
        printf("Input non valido. Inserisci un numero maggiore di 1.\n");
        return 1;
    }

    for(int i = 2; i <= (x/2); i++) {
        if (x % i == 0) {
            printf("Numero %d divisibile per %d\n", x, i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("Numero %d è primo\n", x);
    }
    
}
