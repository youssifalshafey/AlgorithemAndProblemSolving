#include <iostream>
#include <math.h>
using namespace std;
void readLengthAndHight(float &a, float &b , float &c)
{
    cout << "Please Enter The A : ";
    cin >> a;
    cout << "Please Enter The B : ";
    cin >> b;
    cout << "Please Enter The c : ";
    cin >> c;
}

float calculateCircleArea(float a, float b , float c)
{
    const float PI = 3.14;
    float p = (a+b+c) / 2 ;
    return PI * pow((a*b*c)/( 4 * sqrt(p * (p-a) * (p-b) * (p-c))),2);
}
void printResult(float res)
{
    cout << "The circle Area Is " << res;
}
int main()
{
    float a, b , c;
    readLengthAndHight(a, b , c);
    printResult(calculateCircleArea(a, b , c));
}