#include <iostream>
using namespace std;

int main()
{

    int a[100];

    cout << "Enter inputs : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Your reversed array : ";
    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}