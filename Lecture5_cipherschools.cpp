#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Input a,b,c and d : ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    cout<<(a<b && c>d)<<endl;
    cout<<(a<b || c<d);
    return 0;
}
