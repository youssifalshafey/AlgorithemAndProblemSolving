#include <iostream>
#include <math.h>
using namespace std;

const float PI = 3.14;

float readNumberFromUser()
{
    float area;
    cout << "Enter The Area : ";
    cin >> area;
    return area;
}

float calculateAreaOfCircle()
{
    return pow(readNumberFromUser(), 2) * PI;
}

void printWholeResult(float result)
{
    cout << "The Area Of This Circle " << result;
}
int main()
{
    printWholeResult(calculateAreaOfCircle());
}