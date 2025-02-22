#include <iostream>
using namespace std;
float readNumber(string message)
{
    float number;
    cout << message;
    cin >> number;
    return number;
}
float checkNumber(float number)
{
    float sum = 0 ;
    while (number != -99)
    {
     sum+=readNumber("Please Enter Number And Check If True Or Not : ");
    }
    return sum;
}
void printResult(float number)
{
    cout << "Congratulation You Enter The Right Number ";
    cout << number;
}
int main()
{
    float number = readNumber("Please Enter Number And Check If True Or Not : ");
    printResult(checkNumber(number));
}