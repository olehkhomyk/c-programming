#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("X value : %d\n", 10);
    printf("P value : %p\n", p);

    printf("\n");

    int **y = &p;

    printf("y value (address of p) y = %p\n", y);
    printf("*y value (value of p -> address of x) *y = %p\n", *y);
    printf("**y value (value by p value -> value of x) **y = %d\n", **y);

    printf("\n");

    printf("**y = 25; \n");

    **y = 25;

    printf("x value = %d\n", x);
}

