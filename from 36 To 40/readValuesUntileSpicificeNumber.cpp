#include <iostream>
using namespace std;
int readNumber(string message)
{
    float number;
    cout << message;
    cin >> number;
    return number;
}
int checkNumber()
{
    int sum = 0  , counter = 1  ,  Number = 0;
    do{
        Number =readNumber("Please Enter Number " + to_string(counter) + " :") ;
        if(Number == -99){
            break;
        }
    counter ++;
    sum += Number;
    }while (Number != -99);
    return sum;
}
void printResult(int number)
{
    cout << "Congratulation You Enter The Right Number ";
    cout << number;
}
int main()
{
     printResult(checkNumber());  
}