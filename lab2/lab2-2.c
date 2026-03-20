#include <stdio.h>

/*
 * Scrivete un programma che trovi tutti i numeri perfetti
 * tra due estremi. Sia estremi che i numeri trovati dovranno
 * essere interi. Un numero perfetto si definisce tale quando
 * la somma di tutti i suoi divisori eccetto se stesso è uguale
 * al numero stesso.
 *
 * Il programma deve stampare i valori trovati, utilizzare
 * printf("Numero %d perfetto\n", n);
 *
 * Il programma deve leggere i limiti inferiore e superiore
 * come input dal terminale.
 */

int perfectNumber(int n)
{
    int sum = 0;
    for (int j = 1; j <= (n/2); j++)
    {
        if (n % j == 0)
        {
            sum += j;
        }
    }

    if (sum == n)
    {
        printf("Numero %d perfetto\n", n);
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{

    // Le prossime righe di codice implementano il meccanismo di lettura dei limiti da terminale
    // Quando eseguite il programma potete scrivere questi due valori, separati da spazio, e poi premere Invio per eseguire.
    int limInf, limSup, sum;

    printf("Inserisci limite inferiore e superiore: ");
    scanf("%d %d", &limInf, &limSup);

    if (limInf <= limSup)
    {
        for (int i = limInf; i <= limSup; i++)
        {
            perfectNumber(i);
        }
    }
    else
    {
        printf("Dati errati inseriti!");
        return 1;
    }

    return 0;
}
