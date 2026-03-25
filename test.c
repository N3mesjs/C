#include <stdio.h>

int c = 2;

int main(void) {

    int a = 3;
    int *p = &a;
    int *q = p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    printf("&a = %p\n", &a);
    printf("&p = %p\n", &p);
    printf("&q = %p\n", &q);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("&c = %p\n", &c);
    printf("c = %d\n", c);
    
}