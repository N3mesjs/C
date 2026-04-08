#include <stdio.h>

void function1(int a)
{
    printf("function1 called with argument: %d\n", a);
}
void function2(int b)
{
    printf("function2 called with argument: %d\n", b);
}
void function3(int c)
{
    printf("function3 called with argument: %d\n", c);
}

void (*pFunction[3])(int) = {
        function1,
        function2,
        function3
};

/**
 * This one is the same as writing:
 * void (*pFunction[3])(int) = {&function1, &function2, &function3};
 * 
 * because in C, the name of a function can be used as a 
 * pointer to that function, and the address-of operator 
 * (&) is optional when assigning a function to a function 
 * pointer. So both of the above declarations are valid and 
 * will work the same way.
 */

int main()
{

    for (int i = 0; i < 3; i++)
    {
        pFunction[i](i + 1);
        // Alternatively, you can also use the following syntax:
        // (*pFunction[i])(i + 1);
        // for c its the same thing beacause the function pointer is 
        //dereferenced automatically when called with ().
    }
}