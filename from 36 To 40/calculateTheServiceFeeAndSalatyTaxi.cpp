#include <iostream>
using namespace std;
int readValue(string msg)
{
    int number = 0;
    cout << msg;
    cin >> number;
    return number;
}
float calculateTheServiceFee(int numberFee)
{
    return (numberFee * 0.1) + numberFee;
}
float calculatSalaryTaxi(float SalaryTaxi)
{
    return (SalaryTaxi * 0.16) + SalaryTaxi;
}
void printWholeResultOnScreen(float TotalSalary)
{
    cout << "\nYour Total Service After Salary Is " << TotalSalary;
}
int main()
{
    int NumberFee = readValue("Please Enter The Number : ");
    cout<<"Your Number IS : "<<NumberFee;
    float numberAfterFee = calculateTheServiceFee(NumberFee);
    cout<<"\nThe Number After Fee Is : "<<numberAfterFee;
    float numberAfterServices = calculatSalaryTaxi(numberAfterFee);
    cout<<"\nNumber After Taxi IS : "<<numberAfterServices;
    printWholeResultOnScreen(numberAfterServices);
}