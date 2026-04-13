#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("Valore di a: %d\n", a);          // Stampa il valore di a
    printf("Indirizzo di a: %p\n", &a);     // Stampa l'indirizzo di a
    printf("Valore di p: %p\n", p);       // Stampa l'indirizzo di a (valore di p)
    printf("Indirizzo di p: %p\n", &p);     // Stampa l'indirizzo di p
    printf("Valore di pp: %p\n", pp);     // Stampa l'indirizzo di p (valore di pp)
    printf("Indirizzo di pp: %p\n", &pp);   // Stampa l'indirizzo di pp
    printf("Valore puntato da p: %d\n", *p);   // Stampa il valore di a dereferenziando p
    printf("Valore puntato da pp: %d\n", **pp);  // Stampa il valore di a dereferenziando pp    
    printf("indirizzo puntato da pp: %p\n", *pp);  // Stampa l'indirizzo di a dereferenziando pp

    return 0;
}