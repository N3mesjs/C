#include <stdio.h>
#include <assert.h>

/*
 * Scrivere una funzione che, dato un array di stringhe,
 * restituisca la stringa di lunghezza massima. 
 * 
 */

char* stringa_lung_max(char *s, int dim, int *lenght) 
{   
    if(dim <= 0 ){
        *lenght = 0;
        return NULL;
    }

    *lenght = 0;
    int longestString = 0;

    for(int i=0; i<dim; i++){
        int j = 0;
        while (s[i * 256 + j] != '\0') {
            j++;
        }

        if(j > *lenght){
            *lenght = j;
            longestString = i;
        }
    }

    return &s[longestString*256];
}

void test_stringa_lung_max() {

    int lung;
    char s[5][256]={{"ciao"}, {"ciaociao"}, {""}, {"hello"},{"c"}};
    assert(stringa_lung_max(s[0], 5, &lung)==s[1] && lung==8);
    printf("test stringa_lung_max superati\n");

}


int main() {

    //test_stringa_lung_max();
    
    int num_stringhe, lung;
    scanf("%d", &num_stringhe);

    char stringhe[num_stringhe][256];
    for(int i=0; i<num_stringhe;i+=1) {
        scanf("%255s", stringhe[i]);
    }

    char *s_max; 
    
    s_max = stringa_lung_max(stringhe[0], num_stringhe, &lung);
    
    if (s_max==NULL) 
        printf("array vuoto\n");
    else 
        printf("%s \n", s_max);
    
}
