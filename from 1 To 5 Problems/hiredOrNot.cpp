#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
    int age;
    bool license;
    bool HasWasta;
};

strInfo readInfo()
{
    strInfo Info;
    cout << "Enter Your Age : ";
    cin >> Info.age;
    cout << "Do You Have A License ? (Y/N) : ";
    cin >> Info.license;
    cout << "Do You Have A Wasta ? (Y/N) : ";
    cin >> Info.HasWasta;
    return Info;
}
bool checkInfo(strInfo info){
   return ((info.age>21&&info.license) || info.HasWasta);
}
void printResult(strInfo result){
    if(checkInfo(result)){
        cout<<"Hiered \n";
    }else{
        cout<<"Reject \n";
    }
}
int main()
{
    printResult(readInfo());
}