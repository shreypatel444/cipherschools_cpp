#include <iostream>
using namespace std;

int main()
{
    int password;
    cout << "Enter a password : ";
    cin >> password;

    while (password < 9999)
    {
        cout << "password does not match..." << endl;
        cin >> password;
    }

    cout << "The user has now entered a correct password";

    return 0;
}