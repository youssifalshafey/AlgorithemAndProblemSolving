#include <iostream>
using namespace std;
void readValues(int &n)
{
    cout << "Please enter number Larger than One : ";
    cin >> n;
}
void printNumberUsingForLoop(int n)
{
    for (int i = n; i > 1 ; i--)
    {
        cout << i << endl;
    }
}
void printNumberUsingWhileLoop(int n)
{
    int i = n + 1;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }
}
void printNumberUsingDoWhile(int n){
    int i = n + 1 ;
    do
    {
        cout<< i << endl;
        i--;
    } while (i >1);
    
}
int main()
{
    int n = 0;
    readValues(n);
    printNumberUsingForLoop(n);
    cout<<"**************************";
    printNumberUsingWhileLoop(n);
    cout<<"**************************";
    printNumberUsingDoWhile(n);
}