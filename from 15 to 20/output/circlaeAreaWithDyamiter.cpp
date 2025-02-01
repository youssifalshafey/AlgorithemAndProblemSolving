#include<iostream>
#include<math.h>
using namespace std;

float readDyameterFromUser(){
    float dyamiter;
    cout<<"Enter The Dyamiter : ";
    cin >> dyamiter;
    return dyamiter;
}

float calculateAreaOfCircleByDyamiter(float dyamiter){
    const float PI = 3.1415;
    return (dyamiter / 2) * PI;
}
void PrintResult(float result){
    cout<<"The Full Area Of The Circle Is "<<result;
}
int main(){
    PrintResult(calculateAreaOfCircleByDyamiter(readDyameterFromUser()));
}