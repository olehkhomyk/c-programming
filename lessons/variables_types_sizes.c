#include <stdio.h>

int variablesTypesAndSizes(void) {
    int age = 25;
    float temperature = 36.6f;
    double precise_temperature = 36.6;
    char letter = 'A';

    printf("age = %d\n", age);
    printf("temperature = %f\n", temperature);
    printf("precise_temperature = %f\n", precise_temperature);
    printf("letter = %c\n", letter);

    printf("\n");

    printf("size of temperature = %zu\n", sizeof(temperature));
    printf("size of precise_temperature = %zu\n", sizeof(precise_temperature));


    /**
    printf("sizeof(char) = %zu bytes\n", sizeof(char));
    printf("sizeof(short) = %zu bytes\n", sizeof(short));
    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(long) = %zu bytes\n", sizeof(long));
    printf("sizeof(long long) = %zu bytes\n", sizeof(long long));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    **/

    return 0;
}
