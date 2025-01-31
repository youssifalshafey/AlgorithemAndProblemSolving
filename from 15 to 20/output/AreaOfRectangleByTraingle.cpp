#include<iostream>
#include<math.h>
using namespace std;
void readDataFromUser(int& height , int& hypotenuse){
    cout<<"Enter The Height : ";
    cin >> height;
    cout<<"Enter The Hypotenuse : ";
    cin >> hypotenuse;
}

int clculateAreaOfRectangle(int height , int hypotenuse){
    return height * sqrt(pow(hypotenuse,2) - pow(height , 2) );
}

void printResultOnScreen (int height , int hypotenuse){
    cout<<"The Area Of This Treangle IS "<<clculateAreaOfRectangle(height,hypotenuse)
}
int main (){
    int height , hypotenuse;
    readDataFromUser(height , hypotenuse); 
    printResultOnScreen(height , hypotenuse)
}