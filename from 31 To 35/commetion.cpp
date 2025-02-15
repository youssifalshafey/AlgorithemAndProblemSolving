#include <iostream>
using namespace std;

void readSalaryFromUser(int &salary)
{
    do
    {
        cout << "Enter Your Salary : ";
        cin >> salary;
    } while (salary < 0);
}


int calculateTheCommetion(int salaryRecieving)
{
    int result = 1 ;
    if (salaryRecieving > 1000000)
    {
        result = salaryRecieving * 0.01 ;
    }else if(salaryRecieving > 500000){
        result = salaryRecieving * 0.02 ;
    }
    else if(salaryRecieving > 100000){
        result = salaryRecieving * 0.03 ;
    }
    else if(salaryRecieving > 50000){
        result = salaryRecieving * 0.05 ;
    }
    else {
        result = salaryRecieving ;
    }
    return result;
}

void printResultOnScreen(int receivingValue)
{
    cout << "Your Salary After Commmetion Is " << receivingValue << endl;
}

int main()
{
    int salary;
    readSalaryFromUser(salary);
    printResultOnScreen(calculateTheCommetion(salary));
}