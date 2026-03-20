#include <stdio.h>

/*
 * Dati due interi n1 e n2 tali che n1 > 0, n2 > 0 e n1 <= n2, 
 * stampare le tabelline di tutti gli interi n tali che n1 <= n <= n2.
 */


int main () {

    /*
        PRE: 0 < n1 <= n2
        POST: Per ogni n. n1<=n<=n2. stampato n*1 n*2 n*3 ... n*10
        
     */
    
    int n1, n2;

    printf("Inserisci n1 e n2: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 > 0 && n2 > 0 && n1 <= n2) {
        for (int i=n1; i<=n2; i++) {
            for(int j=1; j<=10; j++) {
                printf("%d ", i*j);
            }
            printf("\n");
        }
    } else {
        printf("Input non valido. Assicurati che 0 < n1 <= n2.\n");
        return 1;
    }

    return 0;
}
