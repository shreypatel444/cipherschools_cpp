#include <iostream>
using namespace std;

int main()
{
    // first code...
    float f, a;
    cin >> f >> a;
    if (f > 0.5 && f > a)
    {
        cout << "If condition is true" << endl;
    }
    else
    {
        cout << "If condition is false" << endl;
    }

    // Second code...
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks > 90)
    {
        cout << "A" << endl;
    }
    else if (marks > 80)
    {
        cout << "B" << endl;
    }
    else if (marks > 70)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "Pass" << endl;
    }

    // Switch case...
    int r;
    cout << "Enter a integer : ";
    cin >> r;

    switch (r)
    {
    case 1:
        cout << "You select 1";
        break;
    case 2:
        cout << "You select 2";
        break;
    case 3:
        cout << "You select 3";
        break;
    case 4:
        cout << "You select 4";
        break;

    default:
        cout << "This is default";
        break;
    }
    return 0;
}
