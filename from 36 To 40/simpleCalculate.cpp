#include <iostream>
#include <string.h>
using namespace std;

enum enOperation
{
    multi = 1,
    plus = 2,
    minus = 3,
    substract = 4
};

void readValues(int &first, int &second, int &operationNumber)
{
    cout << "Enter The First Number : ";
    cin >> first;
    cout << "Enter The Second Number : ";
    cin >> second;
    cout << "\nPlease Enter A Number To Make Your Operation : \n 1) MultiPlay ( * ) \n 2 ) Plus ( + ) \n 3 ) Minus ( - ) \n 4 ) Substract (/)\n";
    cin >> operationNumber;
}

int calculatYourNumbers(int first, int second, int operationNumber)
{
    if (operationNumber == enOperation::multi)
    {
        return first * second;
    }
    else if (operationNumber == enOperation::plus)
    {
        return first + second;
    }
    else if (operationNumber == enOperation::minus)
    {
        return first - second;
    }
    else if (operationNumber == enOperation::substract)
    {
        return first / second;
    }
    else
    {
        cout << "Please Enter A Valid Number And Check From The Operation Numebr ?? ";
        return 0;
    }
    return 0;
}
void printVlues(float result)
{
    cout << "Your Result is : " << result;
}

int main()
{
    int num1, num2, operationNumber;
    readValues(num1, num2, operationNumber);
    printVlues(calculatYourNumbers(num1, num2, operationNumber));
}