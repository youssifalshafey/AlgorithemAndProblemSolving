#include <iostream>
using namespace std;

int posotiveNumber(int &N)
{
    do
    {
        cout << "Enter A Positive Number ? ";
        cin >> N;
    } while (N < 1);
    return N;
}

void printValues(int N)
{
    int Multi = 1;
    for (int i = 1; i <= N; i++)
    {
        Multi *= i;
    }
    cout << "Multi = " << Multi;
}

int main()
{
    int N;
    posotiveNumber(N);
    printValues(N);
}