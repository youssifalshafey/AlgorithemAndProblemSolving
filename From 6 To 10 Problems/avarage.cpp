#include <iostream>
using namespace std;

void readNumberFormUser(int &num1, int &num2, int &num3)
{
    cout << "Please Enter The First Number : ";
    cin >> num1;
    cout << "Please Enter The Second Number : ";
    cin >> num2;
    cout << "Please Enter The First Number : ";
    cin >> num3;
}

float calculateNumbers(int num1, int num2, int num3)
{
    float avarage = float((num1 + num2 + num3) / 3);
    return avarage;
}

void printSumNumbers(float Avrg)
{
    cout << "The Avarage Of three Numbers Is : " << Avrg;
}
int main()
{
    int num1, num2, num3;
    readNumberFormUser(num1, num2, num3);
    printSumNumbers(calculateNumbers(num1, num2, num3));
}