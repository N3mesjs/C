#include <stdio.h>

/** 
 * Scrivere una funzione: void permuta(char s[])
 * che stampa tutte le permutazioni di s[].
 * La stringa s[] è composta da caratteri distinti, 
 * e termina con il carattere di fine stringa '\0'.
 * 
 * idea ad esempio per s[] = "abc":
 * prendo la prima lettere e faccio tutte le permutazioni delle lettere rimanenti "bc",
 * poi prendo la seconda lettera e faccio tutte le permutazioni delle lettere r
 * e via cosi.
 */

void permuta(char s[], int low, int high){
    if(low == high){
        printf("%s\n", s);
        return;
    } else {
        for(int i=low; i<=high; i++){
            // metto il i-esimo carattere in prima posizione
            char temp = s[low];
            s[low] = s[i];
            s[i] = temp;

            permuta(s, low+1, high);

            // ripristino la stringa originale
            temp = s[low];
            s[low] = s[i];
            s[i] = temp;

            printf("low: %d, high: %d, i: %d, s: %s\n", low, high, i, s);
        }
    }
}

int main() {
    char s[] = "abc";
    permuta(s, 0, 2);
    return 0;
}