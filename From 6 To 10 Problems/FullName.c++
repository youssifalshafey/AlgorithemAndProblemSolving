#include <iostream>
using namespace std;
struct stFullName
{
    string FirstName;
    string LastName;
};
stFullName readFirstAndLastName()
{
    stFullName FullName;
    cout << "Enter Your First Name : ";
    cin >> FullName.FirstName;
    cout << "Enter Your Second Name : ";
    cin >> FullName.LastName;
    return FullName;
}
string getFullName(stFullName Info , bool reverced){
     string fullName = " ";
     if(reverced)
    fullName = Info.LastName + " " + Info.FirstName;
    else
    fullName = Info.FirstName + " " + Info.LastName;
    return fullName;
}
void PrintFullName(string fullName){
    cout<<"Welcome "<<fullName;
}
int main()
{
    PrintFullName(getFullName(readFirstAndLastName(), true));
}