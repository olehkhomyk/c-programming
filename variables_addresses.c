#include <stdio.h>

int variablesAddresses(void) {
    int x = 10;
    int y = 20;

    printf("x value = %d\n", x);
    printf("x address = %p\n", (void *) &x);
    printf("x size = %zu\n", sizeof(x));

    printf("\n");

    printf("y value = %d\n", y);
    printf("y address = %p\n", (void *) &y);
    printf("y size = %zu\n", sizeof(y));

    return 0;
}

