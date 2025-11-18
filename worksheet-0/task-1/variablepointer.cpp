#include <stdio.h>

int main()
{
    int n = 1;
    int* ptr_to_n = &n;
    n = *ptr_to_n + 1;
    printf("%d", n);
    return 0;
}