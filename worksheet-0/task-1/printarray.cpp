#include <iostream>
using namespace std;

void print_array(int** arr, int width, int height);

int main()
{
    int rows = 3;
    int cols = 4;
    
    int **arr = new int*[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];

    int value = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            arr[i][j] = value++;
    
    print_array(arr, cols, rows);
    return 0;
}

void print_array(int** arr, int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}