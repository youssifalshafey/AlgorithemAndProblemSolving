#include <iostream>
using namespace std;

void readValue()
{
    float number;
    cout << "Enter The Number : ";
    cin >> number;
    return number;
}

void printValues(float recievingNumber)
{
    float powerOfTwo = recievingNumber * recievingNumber;
    float powerOfThree = recievingNumber * recievingNumber * recievingNumber;
    float powerOfFour = recievingNumber * recievingNumber * recievingNumber * recievingNumber;
    cout << "The power Of Two Equal = " << powerOfTwo;
    cout << "The power Of Three Equal = " << powerOfThree;
    cout << "The power Of Four Equal = " << powerOfFour;
}

int main()
{

    printValues(readValue());
}