#include<iostream>
#include<math.h>
using namespace std;

float readCircumfrenece(){
    float length;
    cout<<"Please Enter The Length : ";
    cin >> length;
    return length;
}
float calculateCircleArea(float length){
    const float PI = 3.14;
    return pow(length,2) / (PI * 4);
}
void printResult(float result){
    cout<<"The Result Of This Area Is "<<result;    
}
int main(){
    printResult(calculateCircleArea(readCircumfrenece()));
}