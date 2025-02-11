#include <iostream>
using namespace std;
enum oddOrEven
{
    Odd = 1,
    Even = 2
};
int readValueFromUser(int &N)
{
    cout << "Enter Your Value : ";
    cin >> N;
    return N;
}
oddOrEven checkOddOrEven(int Number)
{
    if (Number % 2 != 0)
    {
        return oddOrEven::Odd;
    }
    return oddOrEven::Even;
}
void printSummitionOfOddNumbers(int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (checkOddOrEven(i) == oddOrEven::Even)
        {
            sum += i;
        }
    }
    cout << "Summition From " << 1 << " To " << N << " Is " << sum;
}
void printValuesUsingWhileLoop(int N)
{
    int i = 0;
    int sum = 0;
    while (i < N)
    {
        i++;
        if (checkOddOrEven(i) == oddOrEven::Even)
            sum += i;
    }
        cout << "Summition Of Using While Loop Is " << sum;
}

int main()
{
    int N;
    readValueFromUser(N);
    printSummitionOfOddNumbers(N);
    cout<<"\n********************\n";
    printValuesUsingWhileLoop(N);
}