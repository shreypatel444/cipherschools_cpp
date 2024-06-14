#include<iostream>
using namespace std;

int main(){
    int i=1;
    while (i<10)
    {
        cout<<i<<" ";
        i++;
    }

    int i=100;
    int input;

    for (int i = 0; i < 101; i++)
    {
        cin >>input;
        if(input == 65){
            cout<<"You guessed correct!"<<endl;
            break;
        }
    }
    
    
}