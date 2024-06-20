#include<iostream>
using namespace std;

void printsuff(){
    cout<<"This is my first function"<<endl;
}

int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}

int main(){

    printsuff();

    cout<<"Sum function : "<<sum(4,5);

    return 0;
}