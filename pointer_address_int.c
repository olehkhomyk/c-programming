#include <stdio.h>

int pointerAddressInt(void)
{
    int x = 10;
    int *p = &x;

    printf("x value = %d\n", x);
    printf("x address = %p\n", (void *)&x);
    printf("\n");

    printf("p value = %p\n", (void *)p);
    printf("p address = %p\n", (void *)&p);
    printf("\n");

    printf("value through p = %d\n", *p);
    printf("\n");

    printf("Call: *p = 20 ");
    printf("\n");

    *p = 20;

    printf("new x value = %d\n", x);
    printf("\n");


    printf("Call: x = 30 ");
    printf("\n");
    x = 30;

    printf("new *p value = %d\n", *p);

    return 0;
}