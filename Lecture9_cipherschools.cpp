#include <iostream>
using namespace std;

int main()
{

    int i = 0, j = 0, k = 0;
    cout << i << " " << j << " " << k << endl;
    j = i++;
    cout << i << " " << j << " " << k << endl;
    k = ++i;
    cout << i << " " << j << " " << k << endl;
    return 0;
}