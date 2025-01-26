#include <iostream>
using namespace std;

string readUserName(string name)
{
    cout << "Enter Your Name : ";
    getline(cin, name);
    return name;
}

void printUserName(string name)
{
    cout << "Welcome " << name;
}
int main()
{
    string name;
    printUserName(readUserName(name));
}