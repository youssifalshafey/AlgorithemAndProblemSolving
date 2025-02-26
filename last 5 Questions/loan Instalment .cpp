#include<iostream>
using namespace std;
int readValue(string msg){
int number;
do{
    cout<<msg;
    cin>>number;
}while (number <= 0);
return number;
}
float calculatTheTotalyMonth(int totalMoney , int MonthlyPayment){
    return totalMoney / MonthlyPayment;
}

int main(){
    int totalyINstalent = readValue("Please Enter The Installent : ");
    int monthlyPayment = readValue("Please Enter The Monthly Payment : ");
    cout<<"The Totaly Monthes Is : "<<calculatTheTotalyMonth(totalyINstalent , monthlyPayment);
}