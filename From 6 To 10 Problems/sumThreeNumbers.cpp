#include <iostream>
using namespace std;
struct threeNumbers
{
    int num1;
    int num2;
    int num3;
};

threeNumbers readNumberFormUser()
{
    threeNumbers numbers;
    cout << "Please Enter The First Number : ";
    cin >> numbers.num1;
    cout << "Please Enter The Second Number : ";
    cin >> numbers.num2;
    cout << "Please Enter The First Number : ";
    cin >> numbers.num3;
    return numbers;
}

int calculateNumbers(threeNumbers numbers)
{
    int sum = numbers.num1 + numbers.num2 + numbers.num3;
    return sum;
}

void printSumNumbers(threeNumbers numbers)
{
    cout << "The Sum Of Three Numbers " << numbers.num1 << " + " << numbers.num2 << " + " << numbers.num3 << " = " << calculateNumbers(numbers);
}
int main()
{
    printSumNumbers(readNumberFormUser());
}