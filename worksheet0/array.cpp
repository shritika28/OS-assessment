#include <stdio.h>

int main()
{
    int arr [] = {10, 30, 2000};
    int* arr_ptr = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d\n", *(arr_ptr + i));
    }
    printf("The pointer of the array is: %p\n", arr_ptr);
    return 0;
}