#include <stdio.h>

/* 
    Dato un N, controllare se la congettura di Golbach è verificata per ogni n<=N.
*/

int is_prime(int n)
{
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) return 0;
    }
    printf("%d è primo\n", n);
    return 1;
};
/*
    PRE: n>2 e pari
    POST: Restituisce   1 se esiste (x,y).x+y=n, x e y sono primi;
                        0 altrimenti
*/
int goldbach_singolo(int num, int *x, int *y)
{
    for(int i=2; i<num; i++) {
        if (is_prime(i) && is_prime(num-i)) {
            *x = i;
            *y = num - i;
            return 1;
        }
    }
    return 0;
};

/*
    PRE: n>2 e pari
    POST: restituisce 0 se la congettura di Goldbach vale per ogni i. 2<i<=n
                      k se la congettura di Goldbach non è verificata per k
*/
int golbach_sequenza(int n)
{
    int res, x, y;
    int failed = 0;
    for (int i=4; i<=n; i+=2) {
        res = goldbach_singolo(i, &x, &y);
        if (res==0) {
            return i;
        } else {
            printf("%d = %d + %d\n", i, x, y);
        }
    }
    return 0;
};

/*
    PRE:
    POST restituisce 1 se n > 2 e pari
                     0 altrimenti 
*/
int verifica_input(int n)
{
    if (n>2 && n%2==0)
        return 1;
    else
        return 0;
};

int main() {

    int N, res;

    scanf("%d", &N);
    if ( !verifica_input(N) ){
        printf("Errore: la congettura di Goldbach è definita per interi pari e maggiori di 2, ricevuto %d\n", N);
        return 1;
    } 

    res = golbach_sequenza(N);
    if (res==0) 
        printf("Congettura di Goldbach verificata fino a %d\n", N);
    else 
        printf("Congettura di Goldbach non verificata per %d\n", res);
}
