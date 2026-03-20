#include <stdio.h>

/*
 * Stampare una piramide rovesciata utilizzando il carattere #,  
 * in modo che la punta della piramide sia in basso e la base in alto. 
 * 
 */

#define HEIGHT 6

int main (void) {
    int spaces;

    spaces = 0;
    for (int i = HEIGHT; i > 0; i--) {
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < (i*2)-1; j++) {
            printf("#");
        }
        printf("\n");
        spaces++;
    }
}
