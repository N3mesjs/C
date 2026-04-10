#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr; // p points to the first element of the array

    printf("Array elements no.3: %d\n", arr[2]);
    printf("%p\n", p); // prints the address of the first element of the array
    printf("%p\n", &arr[0]); // prints the address of the first element of the array
    printf("%d\n", *p); // prints the value of the first element of the array (1)
    printf("%d\n", *(p + 2)); // prints the value of the third element of the array (3)
    printf("%d\n", p[2]); // prints the value of the third element of the array (3)

    return 0;
}