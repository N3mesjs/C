#include <stdio.h>

/*
    Funzione che, date due stringhe, controlla se una stringa è il prefisso della seconda
*/

/**
 * @param {char*} s1 the address of the first character of the first string
 * @param {char*} s2 the address of the first character of the second string
 * @return {int} 1 if s1 is a prefix of s2, 0 otherwise
 * 
 * PRE: s1 and s2 are null-terminated strings
 * POST: It will return 1 if s1 is a prefix of s2, 0 otherwise
 */
int prefisso(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i]) return 0;
        i++;
    }

    return s1[i] == '\0';
}


int main(void) {

    char a[20], b[20];
    scanf("%s %s", a, b);

    if(prefisso(a, b)) 
        printf("%s prefisso di %s\n", a, b);
    else
        printf("%s non prefisso di %s\n", a, b);
    

}
