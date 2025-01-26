#include<iostream>
using namespace std;
enum numberType {Odd = 1 , Even = 2};

int readNumber(){
    int number ;
    cout<<"Enter The Number : ";
    cin>>number;
    return number;
}
numberType checkNumberType (int number){
    if(number % 2 == 0){
        return numberType::Even;
    }else{
        return numberType::Odd;
    }
}
void printNumberType(numberType number){
    if(number == numberType::Even){
        cout<<"Odd Number \n";
    }else if(number == numberType::Odd){
        cout<<"Even Number \n";
    }
}
int main(){
    printNumberType(checkNumberType(readNumber()));
}