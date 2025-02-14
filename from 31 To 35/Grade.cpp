#include <iostream>
using namespace std;

int readValue()
{
    int grade;
    cout << "Enter The Number : ";
    cin >> grade;
    return grade;
}

string checkGrade(int recievingGrade)
{
    if (recievingGrade >= 90 && recievingGrade <= 100)
    {
        return "A";
    }
    else if (recievingGrade >= 80 && recievingGrade < 90)
    {
        return "B";
    }
    else if (recievingGrade >= 70 && recievingGrade < 80)
    {
        return "C";
    }
    else if (recievingGrade >= 60 && recievingGrade < 70)
    {
        return "D";
    }
    else if (recievingGrade >= 50 && recievingGrade < 60)
    {
        return "E";
    }
    else if (recievingGrade < 50)
    {
        return "F";
    }
    else
    {
        return "Please Enter A Value Between (1 To 100)";
    }
}

void printGrade(string Grade)
{
    cout << "Your Grade Is " << Grade;
}

int main()
{

    printGrade(checkGrade(readValue()));
}