#include <iostream>
using namespace std;

int sum(int , int );

int main()
{
    cout << "Sum function : " << sum(4, 5);

    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}