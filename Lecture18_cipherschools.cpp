#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "The values of a and b after swapping inside the function is : " << a << " " << b << endl;
}

void fun(int &a, int b)
{
    a = 999;
    b = 999;

    cout << "The values of a and b inside fun function are : " << a << " " << b << endl;
}

int main()
{
    int a = 4;
    int b = 6;
    // swap(a, b);
    // cout << "The values of a and b after swapping outside the function is : " << a << " " << b << endl;

    cout<<"The values of a and b before passing into the fun function are : "<<a<<" "<<b<<endl;
    fun(a,b);
    cout<<"The values of a and b after passing into the fun function are : "<<a<<" "<<b<<endl;
}