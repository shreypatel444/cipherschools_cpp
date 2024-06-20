#include<iostream>
using namespace std;

void printHii(){
    cout<<"This is my first function"<<endl;
}

int sum(int a, int b){
    int c;
    c=a+b;
    cout<<"The value of c is : "<<c<<endl;
    return c;
}

int main(){

    printHii();

    int c=66;

    // cout<<"Sum function : "<<sum(4,5)<<endl;

    cout<<"The value of c is : "<<c<<endl;

    return 0;
}