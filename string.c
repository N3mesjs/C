/*
 * == Stringhe e Puntatori in C ==
 *
 * Questo programma dimostra come funzionano le stringhe e i puntatori in C,
 * inclusi array di caratteri, puntatori a stringhe letterali e indirizzi di memoria.
 *
 * == Concetti Chiave ==
 * - **Stringhe in C**: Array di char terminati da '\0'. Non esiste un tipo "stringa" nativo.
 * - **Array vs Puntatori**: char str[] crea un array modificabile; char *ptr punta a una costante.
 * - **Decadimento degli Array**: Gli array decadono a puntatori in chiamate di funzione.
 * - **%s in printf**: Si aspetta un puntatore a char e stampa fino a '\0'.
 * - **Dereferenziazione**: *ptr dà il valore puntato (primo char), non l'intera stringa.
 *
 * == Variabili ==
 * - str[]: Array di char inizializzato con "Hello, World!".
 * - test[]: Array di char inizializzato con "Hearts".
 * - ptr: Puntatore a stringa letterale "Hearts" (costante, read-only).
 *
 * == Output Atteso ==
 * - Stringhe stampate con %s.
 * - Indirizzi con %p (vareranno tra esecuzioni).
 * - Caratteri singoli con %c.
 */

#include <stdio.h>

int main(void) {
    // Dichiarazione di un array di char (stringa modificabile)
    char str[] = "Hello, World!";
    printf("%s\n", str);  // Stampa la stringa: str decade a puntatore

    // Array di char vs puntatore a stringa letterale
    char test[] = "Hearts";  // Array modificabile nello stack
    char *ptr = "Hearts";    // Puntatore a costante read-only
    printf("%s\n", test);    // Stampa "Hearts" dall'array
    printf("%s\n", ptr);     // Stampa "Hearts" dalla costante

    // Indirizzi di memoria
    printf("%p\n", test);    // Indirizzo di test[0] (inizio array)
    printf("%p\n", ptr);     // Indirizzo della stringa letterale
    printf("%p\n", &test);   // Indirizzo dell'array test (stesso di test)
    printf("%p\n", &ptr);    // Indirizzo della variabile ptr

    // Accesso ai caratteri singoli
    printf("%c\n", test[0]); // Primo char dell'array (notazione array)
    printf("%c\n", ptr[0]);  // Primo char puntato (notazione array)
    printf("%c\n", *test);   // Primo char dell'array (dereferenziazione)
    printf("%c\n", *ptr);    // Primo char della costante (dereferenziazione)
}