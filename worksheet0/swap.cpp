#include <iostream>
#include <cstring>
using namespace std;

void swap(void * x, void * y, size_t size);

int main()
{
    int a = 2;
    int b = 3;
    cout << "Before swapping, a = " << a << ", b = " << b << "\n";
    swap(&a, &b, sizeof(int));
    cout << "After swapping, a = " << a << ", b = " << b << "\n";
    return 0;
}

void swap(void* x, void* y, size_t size)
{
    char* temp = new char[size];
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
    delete[] temp;
}