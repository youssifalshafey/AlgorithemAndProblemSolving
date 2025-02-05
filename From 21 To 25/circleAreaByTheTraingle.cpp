#include <iostream>
#include <math.h>
using namespace std;
void readLengthAndHight(float &a, float &b)
{
    cout << "Please Enter The A : ";
    cin >> a;
    cout << "Please Enter The B : ";
    cin >> b;
}

float calculateCircleArea(float a, float b)
{
    const float PI = 3.14;
    return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}
void printResult(float res)
{
    cout << "The circle Area Is " << res;
}
int main()
{
    float a, b;
    readLengthAndHight(a, b);
    printResult(calculateCircleArea(a, b));
}