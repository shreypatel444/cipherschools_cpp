#include<iostream>
using namespace std;

int main(){
    // int a=5;

    // int *x;
    // x=&a;

    // cout<<"The address of a , which is stored in the pointer is : "<<x<<" The value of x+1 is "<<x+1<<endl;

    int a[5];
    int *x;

    x=&a[0];

    int i;

    for(i=0;i<6;i++){
        cout<<&a[i]<<endl;
    }

    return 0;
}