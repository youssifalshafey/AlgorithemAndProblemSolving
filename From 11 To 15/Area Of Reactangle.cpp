#include <iostream>
using namespace std;
struct LengthAndHieght
{
    int length;
    int height;
};
LengthAndHieght readLengthAndHeight()
{
    LengthAndHieght LH;
    cout << "Enter The Length : ";
    cin >> LH.length;
    cout << "Enter The Height : ";
    cin >> LH.height;
    return LH;
}

int AreaOfRectangle(LengthAndHieght LH)
{
    return (LH.height * LH.length);
}

void PrintResultOnScreen(LengthAndHieght LH)
{
    cout << "The Area Of Reactangle Is " << AreaOfRectangle(LH) << endl;
}
int main()
{
    PrintResultOnScreen(readLengthAndHeight());
}