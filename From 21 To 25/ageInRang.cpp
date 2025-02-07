#include<iostream>
using namespace std;

int readAge(){
    int age ;
    cout<<" Please Enter Your Age : ";
    cin>>age;
    return age;
}
bool numberInRange(int number , int from , int to){
    return (number >= from && number<=to);
}
void printRes(){
    float res = numberInRange(readAge() , 20 , 45);
    if(res)
        cout<<"Valide Number ";
    else 
        cout<<"InValide Number ";    
}
int main(){
    printRes();
}