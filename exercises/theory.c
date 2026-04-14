#include <stdio.h>

void invertiRighe(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a[][3] = {5, 9, 1, 3, 4, 8};
    int *p[] = {a[0], a[1]};
    invertiRighe(p[0], p[1]);
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}