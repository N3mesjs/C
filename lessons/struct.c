#include <stdio.h>

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Student {
    char name[50];
    int age;
} Student;

void translate(Point*p, double dx, double dy) {
    p->x += dx;
    p->y += dy;
    /**
     * The '->' operator is used to access members of a struct through a pointer.
     * It is a shorthand for dereferencing the pointer and then accessing the member.
     * For example, 'p->x' is equivalent to '(*p).x'.
     */
}

int main() {

    struct Point p1;

    p1.x = 3.5;
    p1.y = 4.5;

    printf("Original Point: (%.2f, %.2f)\n", p1.x, p1.y);
    translate(&p1, 1.0, -2.0);
    printf("Translated Point: (%.2f, %.2f)\n", p1.x, p1.y);

    // --------- Using typedef for Student struct ---------

    Student Turing = {
        "Alan Turing",
        41
    };

    Student classmates[3] = {
        {"Alice", 20},
        {"Bob", 22},
        {"Charlie", 21}
    };

    for(int i=0; i<3; i++) {
        printf("Classmate %d: Name: %s, Age: %d\n", i+1, classmates[i].name, classmates[i].age);
    }
    
}