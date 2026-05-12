#include <stdio.h>

// makes copy of argument not referencing to variable instance.
void change_value1(int value) {
    value = 100;
}

void change_value2(int *value) {
    *value = 100;
}

int changeArgumentsValueByAddress(void) {
    int x = 10;

    printf("x = %d\n", x);

    printf("Call changeValue1(x);\n");
    change_value1(x);

    // Value of x still going to be 10;
    printf("x = %d\n", x);
    printf("\n");

    printf("Call changeValue2(&x);\n");
    change_value2(&x);
    printf("x = %d\n", x);

    return 0;
}
