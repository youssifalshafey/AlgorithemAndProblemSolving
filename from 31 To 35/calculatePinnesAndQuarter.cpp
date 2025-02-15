#include <iostream>
using namespace std;

struct piggyBankContent
{
    float Pinney = 1, Nickle = 5, Dime = 10, Quarter = 25, Dollar = 100;
};

piggyBankContent readValueFromUser()
{
    piggyBankContent money;
    cout << "Enter The Pinny : ";
    cin >> money.Pinney;
    cout << "Enter The Nickles : ";
    cin >> money.Nickle;
    cout << "Enter The Dime : ";
    cin >> money.Dime;
    cout << "Enter The Quarter : ";
    cin >> money.Quarter;
    cout << "Enter The Dollar : ";
    cin >> money.Dollar;
    return money;
}

float calculatTheResult(piggyBankContent money)
{
    return money.Pinney * 1 + money.Nickle * 5 + money.Dime * 10 + money.Quarter * 25 + money.Dollar * 100;
}

void printResult(float recivingRes)
{
    cout << "You Have Got " << recivingRes << " Dollars \n";
    cout << "And " << float(recivingRes / 100) << " Pinnies";
}
int main()
{
    printResult(calculatTheResult(readValueFromUser()));
}