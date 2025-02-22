#include<iostream>
using namespace std ;
enum enOperationType{Add = '+' , MultiPlay = '*' , Divide = '/' , Substract = '-'};

float readValues(string Message){
    float Number ; 
    cout<<Message ;
    cin>>Number ;
    return Number;
}

enOperationType readOperationType(){
    char OT ;
    cout<<"Enter Your Operation ('+' , '*' , '/' , '-')";
    cin>>OT;
    return (enOperationType)OT;
}

void PrintAllValuesOnScreen(float First , float Second , enOperationType type){
    switch (type)
    {
    case enOperationType::Add :
        cout<<First + Second ;
        break;
    case enOperationType::MultiPlay :
        cout<<First * Second ;
        break;
    case enOperationType::Divide :
        cout<<First / Second ;
        break;
    case enOperationType::Substract :
        cout<<First - Second ;
        break;
    default:
    cout<<"Please Enter A Valid Number And Check From Your Operation ";
    system_error();
        break;
    }
}

int main(){
float NUmber1 = readValues("Please Enter Your Values ");
float NUmber2 = readValues("Please Enter Your Values ");

enOperationType operationType = readOperationType();

PrintAllValuesOnScreen(NUmber1 , NUmber2 , operationType);
}