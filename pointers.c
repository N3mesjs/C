#include <stdio.h>

void exchange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int age = 30;

    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %d\n", age);

    printf("address stored in pAge: %p\n", pAge);
    printf("value pointed to by pAge: %d\n", *pAge);

    printf("-------\n");

    /**
     * Exchange function that takes 2 integers
     * pointers as arguments and swaps their values.
     * So this show us how pointers can reduce
     * the lines of code and make it more efficient
     * taking the address of the variables and
     * modifying its values directly
     */
    int a = 10;
    int b = 20;

    printf("Before exchange: a = %d, b = %d\n", a, b);
    exchange(&a, &b);
    printf("After exchange: a = %d, b = %d\n", a, b);
}