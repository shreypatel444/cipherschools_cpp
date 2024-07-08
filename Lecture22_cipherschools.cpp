#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int *p;
    p = &a;
    a = 2;
    b = 5;
    c = *p + *q;
    q + 1;
    p + 1;
    // cout << "The value of a is (from the actual variable type) " << a << endl;
    // cout << "The value of a from the pointer using *(astreix) " << *p << endl;
    cout << "The value of c is : " << c << endl;
    cout << "The address of a is " << &a << "The value of pointer is : " << p;
    return 0;
}