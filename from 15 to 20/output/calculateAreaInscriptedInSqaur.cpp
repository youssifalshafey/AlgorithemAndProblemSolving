#include<iostream>
#include<math.h>
using namespace std;

float readDyameterFromUser(){
    float lengthOfSqaur;
    cout<<"Enter The Dyamiter : ";
    cin >> lengthOfSqaur;
    return lengthOfSqaur;
}

float calculateAreaOfCircleByDyamiter(float lengthOfSqaur){
    const float PI = 3.1415;
    return (PI * pow(lengthOfSqaur , 2)) / 4;
}
void PrintResult(float result){
    cout<<"The Full Area Of The Circle Is "<<result;
}
int main(){
    PrintResult(calculateAreaOfCircleByDyamiter(readDyameterFromUser()));
}