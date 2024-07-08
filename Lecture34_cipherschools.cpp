#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a;
    cout << "The size of the vector is " << a.size() << endl;
    for (int i = 0; i < 5; i++) {
        a.push_back(i + 1);
    }
    cout << "The size of the vector is " << a.size() << endl;
    a.pop_back();
    cout << "The size of the vector is " << a.size() << endl;
    cout<<"The first element of the vector is "<<a[0]<<endl;
    for(auto j=a.begin();j<a.end();j++){
    	cout<<*j;
	}
	cout<<endl<<a.capacity();
    return 0;
}