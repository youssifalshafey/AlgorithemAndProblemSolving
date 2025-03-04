#include <iostream>
#include <math.h>
using namespace std;
enum enPrimeOrNot
{
    prime = 1,
    notPirme = 2
};
int readNumber(string message)
{
    int number;
    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}
enPrimeOrNot checkFromTheNumber(int number)
{
    int nNumber = round(number / 2);
    for (int i = 2; i <= nNumber; i++)
    {
        if (number % i == 0)
            return enPrimeOrNot::notPirme;
    }
    return enPrimeOrNot::prime;
}
string checkNumber(enPrimeOrNot enNumber)
{
    switch (enNumber)
    {
    case enPrimeOrNot::notPirme:
        return "Not Prime Number ";
        break;
    case enPrimeOrNot::prime:
        return " Prime Number ";
        break;
    default:
        return 0;
        break;
    }
}
void printWholeResult(string Result)
{
    cout << Result;
}
int main()
{

    printWholeResult(checkNumber(checkFromTheNumber(readNumber("Enter A Positive Number : "))));
}