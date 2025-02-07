#include <iostream>
using namespace std;

int readAge()
{
    int age;
    cout << " Please Enter Age Between 18 And 45 : ";
    cin >> age;
    return age;
}
bool numberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

int UntilEnterValidNumber(int from , int to){
    int age = 0 ;
    do{
        age = readAge(); 
    }while(!numberInRange(age , from , to));
    return age;
}

void printResult(int age){
    cout<<"Valide Number Thanks For Subscribtion This Is Your Age "<<age;
}

int main(){
    printResult(UntilEnterValidNumber(18,45));
    
}