#include <iostream>
#include <math.h>
using namespace std;
void readDataFromUser(int &height, int &base)
{
    cout << "Enter The Height : ";
    cin >> height;
    cout << "Enter The base : ";
    cin >> base;
}

int clculateAreaOfRectangle(int height, int base)
{
    return (base * 0.5) * height;
}

void printResultOnScreen(int height, int base)
{
    cout << "The Area Of This Triangle IS " << clculateAreaOfRectangle(height, base);
}
int main()
{
    int height, base;
    readDataFromUser(height, base);
    printResultOnScreen(height, base);
}