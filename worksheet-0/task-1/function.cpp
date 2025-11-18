#include <iostream>
#include <string>
using namespace std;

int element_checker(int* a, int* b, int length);

int main()
{
    int arr1 [] = {1, 2, 3, 4};
    int arr2 [] = {1, 2, 4, 4};
    int checker = element_checker(arr1, arr2, sizeof(arr1) / sizeof(int));
    string value;
    if (checker == 0)
    {
        value = "not equal";
    }
    else
    {
        value = "equal";
    }
    cout << "All the elements of arr1 and arr2 are: " << value;

    return 0;
}

int element_checker(int* a, int* b, int length)
{
    if ((a == NULL) || (b == NULL))
    {
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}