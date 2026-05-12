#include <stdio.h>

int remove_at(int array[], int index, int *length) {
    for (int i = index; i < *length; i++) {
        array[i] = array[i + 1];
    }
    *length = *length - 1;

    return 0;
}


int arrayRemoveItemCImpl(void) {
    int numbers[5] = {10, 20, 30, 40, 50};
    int length = 5;

    for (int i = 0; i < length; i++) {
        printf("Array value %d\n", numbers[i]);
    }

    printf("\n");
    printf("removed 2 index value\n");
    remove_at(numbers, 2, &length);
    printf("\n");

    for (int i = 0; i < length; i++) {
        printf("Array value %d\n", numbers[i]);
    }

    /**
    * Calculate array element count when the array is available in the same scope.
    *
    * Example:
    * sizeof(numbers)    = 16  // 4 int elements * 4 bytes each
    * sizeof(numbers[0]) = 4   // one int = 4 bytes
    * 16 / 4 = 4 elements
    *
    * Important:
    * This works only for real arrays in the same scope.
    * It does NOT work after passing the array to a function,
    * because function parameters like int numbers[] become int *numbers.
    */
    int dynamicCalcLength = sizeof(numbers) / sizeof(numbers[0]);
    printf("dynamicCalcLength = %d\n", dynamicCalcLength);

    printf("length = %d\n", length);

    return 0;
}
