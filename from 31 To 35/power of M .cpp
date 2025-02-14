#include <iostream>
using namespace std;

void readValue(float &Number, float &Power)
{

    cout << "Enter The Number : ";
    cin >> Number;
    cout << "Enter The Power : ";
    cin >> Power;
}

void printValues(float Number, float Power)
{
    if(Power == 0 ){
        return 1;
    }
    int resultOfPower = 1;
    for (int i = 0; i < Power; i++)
    {
        resultOfPower *= Number;
    }
    cout << Number << " Of Power Of " << Power << " = " << resultOfPower << endl;
}

int main()
{
    float number, power;
    readValue(number, power);
    printValues(number, power);
}