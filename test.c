#include <stdio.h>

int c = 2;

int main(void) {

    int a = 3;
    {
        a += 1;
        int c = 4;
        int *p = &c;
    }
    printf("%d,%d\n", a, *p);

}