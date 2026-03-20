#include <stdio.h>

/*
    Funzione che riduce una frazione ai minimi termini
*/

void minimiTermini(int *num, int *den)
{
    int a = *num;
    int b = *den;
    int mcd = 1;
    int limite = (a >= b) ? b : a;

    for (int i = 1; i <= limite; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            mcd = i;
        }
    }
    a /= mcd;
    b /= mcd;

    *num = a;
    *den = b;
}

int main()
{

    int num, den;

    printf("Inserisci numeratore: ");
    scanf("%d", &num);
    printf("\n");

    printf("Inserisci denominatore che sia diverso da 0: ");
    scanf("%d", &den);
    printf("\n");

    printf("%d/%d=", num, den);

    minimiTermini(&num, &den);

    printf("%d/%d\n", num, den);
}