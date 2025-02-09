#include <iostream>
using namespace std;

int readValues()
{
    int count = 0;
    cout << "Please Enter The Number Which you want to stop : ";
    cin >> count;
    return count;
}

void printValues(int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << i<<endl;
    }
}

int main()
{
    printValues(readValues());
    return 0;
}