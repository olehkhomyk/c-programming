#include <stdio.h>

void inspect(int arr[])
{
    printf("inside inspect sizeof(arr) = %zu\n", sizeof(arr));
    printf("inside inspect sizeof(arr[0]) = %zu\n", sizeof(arr[0]));
}

int array_pointers_in_func(void)
{
    int numbers[3] = {10, 20, 30};

    printf("inside main sizeof(numbers) = %zu\n", sizeof(numbers));
    printf("inside main sizeof(numbers[0]) = %zu\n", sizeof(numbers[0]));

    inspect(numbers);

    return 0;
}
