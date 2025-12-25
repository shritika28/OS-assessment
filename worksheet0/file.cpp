#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string num;

    ifstream MyReadFile("foo.txt");

    while (getline(MyReadFile, num))
    {
        sum += stoi(num);
    }

    MyReadFile.close();
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}