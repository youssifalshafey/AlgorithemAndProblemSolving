#include <iostream>
using namespace std;

struct twoNumbers
{
    int num1;
    int num2;
    int num3;
};

twoNumbers readNumbers()
{
    twoNumbers numbers;
    cout << "Enter First Number : ";
    cin >> numbers.num1;
    cout << "Enter Seocnd Number : ";
    cin >> numbers.num2;
    cout<<"Enter The Third Number: " ;
    cin >> numbers.num3;
    return numbers;
}

int MaxOfTwoNumbers(twoNumbers numbers)
{
    if (numbers.num1 > numbers.num2 && numbers.num1 > numbers.num3)
        return numbers.num1;
    else if(numbers.num2 > numbers.num3)
        return numbers.num2;
    else
        return numbers.num3;
}

void printGreaterNumber(twoNumbers numbers)
{
    cout << "THE GREATER NUMBER BETWEEN " << numbers.num1 << " AND " << numbers.num2 << " AND "<<numbers.num3 << " IS " << MaxOfTwoNumbers(numbers);
}
int main()
{
    printGreaterNumber(readNumbers());
}