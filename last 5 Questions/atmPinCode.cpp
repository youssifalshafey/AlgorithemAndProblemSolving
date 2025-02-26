#include <iostream>
using namespace std;
string readPINCode()
{
    string msg;
    cout << "Please Enter Your PIN Code \n **** \n ";
    cin >> msg;
    return msg;
}
bool checkPIN()
{
    string pinCode;
    int counter = 3;
    do
    {
        if (counter == 1)
        {
            cout << "Your Acount Has Been Locked ! ";
            system("Color F");
            break;
        }
        pinCode = readPINCode();
        if (pinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "wrong PIN Code you Have "<<counter <<" Tries "<<endl;
            system("color 4F");
        }
        counter--;
    } while (pinCode != "1234");
    return 0;
}

int main()
{
    if (checkPIN())
    {
        cout << "Login Successfully Your Balance IS : " << 7500;
        system("color 2F");
    }
}