#include <stdio.h>

int main() {
    int age = 30;

    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %d\n", age);

    printf("address stored in pAge: %p\n", pAge);
    printf("value pointed to by pAge: %d\n", *pAge);
}