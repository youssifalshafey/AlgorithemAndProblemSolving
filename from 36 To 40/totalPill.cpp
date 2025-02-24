#include<iostream>
using namespace std;



int readPill(string msg){
    int number ;
    do{
        cout<<msg;
        cin>>number;
    }while(number <= 0);
    return number;
}   
float calculatTheTottalPill(int cashPaid , int totalPill){
    return totalPill - cashPaid ;
}
void printValue(float resualt){
    cout<<"The Total Pill Is "<< resualt;
}
int main(){
    int totalPill = readPill("Please Enter The Tottal Pill : ");
    int cashPaid = readPill("Please Enter The Cash Paid : ");
    printValue(calculatTheTottalPill(cashPaid , totalPill));
}