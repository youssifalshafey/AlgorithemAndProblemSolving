#include <iostream>
using namespace std;

void readNumbers(int &A, int &B)
{
    cout << "Enter The First Number : ";
    cin >> A;
    cout << "Enter The Seocnd Number : ";
    cin >> B;
}
void swapNumbers(int &A, int &B)
{
    cout << "The First Number Is " << A << " And The Second IS " << B << endl;
    int C;
    C = A;
    A = B;
    B = C;
}
void printSwapedNumbers(int A, int B)
{
    cout << "After Swaping " << "First Number Is " << A << " And The Second Number Is " << B;
}
int main()
{
    int A, B;
    readNumbers(A, B);
    swapNumbers(A, B);
    printSwapedNumbers(A, B);
}