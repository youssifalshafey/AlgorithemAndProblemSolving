#include <iostream>
using namespace std;
enum enNumberInRang
{
    All = 1,
    Odd = 2,
    Even = 3
};
void readValues(int &N)
{
    cout << "Enter The Number : ";
    cin >> N;
}
int NumberInRang()
{
    int number;
    cout << "What Do You Want To Sum \n";
    cout << "1 ) All\n";
    cout << "2 ) Odd \n";
    cout << "3 ) Even\n";
    cin >> number;
    return number;
}
enNumberInRang SumOddOrEvenOrAll(int Number)
{
    if (Number % 2 == 0)
    {
        return enNumberInRang::Even;
    }
    return enNumberInRang::Odd;
}
void printValuesByForLoop(int N, int Rang)
{
    int sum = 0;
    switch (Rang)
    {
    case 1:
        cout << "Sum Of All Numbers ";
        for (int i = 0; i <= N; i++)
        {
            sum += i;
        }
        cout << sum;
        break;
    case 2:
        cout << "Sum Of Even Numbers ";
        for (int i = 0; i <= N; i++)
        {
            if (SumOddOrEvenOrAll(i) == enNumberInRang::Odd)
                sum += i;
        }
        cout << sum;
        break;
    case 3:
        cout << "Sum Of Odd Numbers ";
        for (int i = 0; i <= N; i++)
        {
            if (SumOddOrEvenOrAll(i) == enNumberInRang::Even)
                sum += i;
        }
        cout << sum;
        break;

    default:
        break;
    }
}

// void printValuesByWhileLoop(int N, int Rang)
{
    int sum = 0;
    int i = 0;
    switch (Rang)
    {
    case 1:
        cout << "Sum Of All Numbers ";
        while (i <= N)
        {
            sum += i;
            i++;
        }
        cout << sum;
        break;
    case 2:
        cout << "Sum Of Even Numbers ";
        while (i <= N)
        {
            if (SumOddOrEvenOrAll(i) == enNumberInRang::Even)
                sum += i;
            i++;
        }
        cout << sum;
        break;
    case 3:
        cout << "Sum Of Odd Numbers ";
        while (i <= N)
        {
            if (SumOddOrEvenOrAll(i) == enNumberInRang::Even)
                sum += i;
            i++;
        }
        cout << sum;
        break;

    default:
        break;
    }
}

int main()
{
    int N = 0;
    readValues(N);
    printValuesByForLoop(N, NumberInRang());
    // printValuesByWhileLoop(N, NumberInRang());
}