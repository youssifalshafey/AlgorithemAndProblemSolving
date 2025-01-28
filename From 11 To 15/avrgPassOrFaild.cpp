#include <iostream>
using namespace std;
enum enPassOrFaild
{
    pass = 1,
    faild = 2
};
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
enPassOrFaild checkPassOrFaild(float Avrg){
    if ( Avrg >=50 )
        return enPassOrFaild::pass;
    else 
        return enPassOrFaild::faild;
}
void printSumNumbers(float Avrg)
{
    cout << "The Avarage Of three Numbers Is : " << Avrg << " You Are ";
    if(checkPassOrFaild(Avrg) == enPassOrFaild::pass)
        cout<<"Passed\n";
    else 
        cout<<"Faild\n";
}
int main()
{
    int num1, num2, num3;
    readNumberFormUser(num1, num2, num3);
    printSumNumbers(calculateNumbers(num1, num2, num3));
}