#include <iostream>
using namespace std;

struct twoNumbers
{
    int num1;
    int num2;
};

twoNumbers readNumbers()
{
    twoNumbers numbers;
    cout << "Enter First Number : ";
    cin >> numbers.num1;
    cout << "Enter Seocnd Number : ";
    cin >> numbers.num2;
    return numbers;
}

int MaxOfTwoNumbers(twoNumbers numbers)
{
    if (numbers.num1 > numbers.num2)
        return numbers.num1;
    else
        return numbers.num2;
}

void printGreaterNumber(twoNumbers numbers)
{
    cout << "THE GREATER NUMBER BETWEEN " << numbers.num1 << " AND " << numbers.num2 << " IS " << MaxOfTwoNumbers(numbers);
}
int main()
{
    printGreaterNumber(readNumbers());
}