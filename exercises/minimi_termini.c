#include <stdio.h>

/*
    Funzione che riduce una frazione ai minimi termini
*/

/**
 * PRE: denominatore diverso da 0
 * POST: num e den sono ridotti ai minimi termini
 */
void minimi_termini(int *num, int *den){
    int lim = (*num <= *den) ? *num : *den;
    int mcd = 1;

    for(int i = 1; i<=lim; i++){
        if(*num % i == 0 && *den % i == 0){
            mcd = i;
        }
    }

    *num /= mcd;
    *den /= mcd;
}


int main() {
          
    int num, den;
    scanf("%d", &num);
    scanf("%d", &den);
    printf("%d/%d=", num, den);

    // INVOCARE QUA MINIMI_TERMINI()
    minimi_termini(&num, &den);
    //

    printf("%d/%d\n", num, den);

}
