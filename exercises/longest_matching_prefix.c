#include <stdio.h>
#include <assert.h>

int prefix(char *s1, char *s2, int l);
int longest_matching_prefix(char *s1, char *s2, int lung1, int lung2);
void consegna_moodle();
void test_longest_matching_prefix();

int main() {
    //test_longest_matching_prefix();
    consegna_moodle();
}

int prefix(char *s1, char *s2, int l){
    for(int i=0; i<l; i+=1){
        if(s1[i]!=s2[i])
            return 0;
    }
    return 1; 
}

int longest_matching_prefix(char *s1, char *s2, int lung1, int lung2){
    int count=0;

    for (int i=0; i<lung2; i++){
        for(int j=0; j<lung1; j++){
            if(prefix(s1, &s2[i], j)){
                count = j;
            }
        }
    }

    return count;
}

void consegna_moodle() {
    int dim1, dim2;
    scanf("%d", &dim1);
    scanf("%d", &dim2);
    char S1[dim1], S2[dim2];
    scanf("%s", S1);
    scanf("%s", S2);
    int l = longest_matching_prefix(S1, S2, dim1, dim2);
    printf("longest_matching_prefix(%s,%s,%d,%d) = %d ",S1,S2,dim1,dim2,l);
    for(int i=0; i<l; i+=1)
        printf("%c", S1[i]);
    printf("\n");
}

void test_longest_matching_prefix() {
    assert(longest_matching_prefix("giorn", "buongiornissimo", 5,15)==5);
    assert(longest_matching_prefix("giorno", "buongiornissimo", 6,15)==5);
    assert(longest_matching_prefix("xgi", "buongiornissimo", 3, 15)==0);
    printf("Tutti i test superati con successo!\n");
}