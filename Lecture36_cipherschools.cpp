#include<iostream>
using namespace std;
int fib(int input){
	if (input<2)
	{
		return 1;
	}
	int FinalAnswer;
	FinalAnswer=fib(input-1) + fib(input-2);
}
int main(){
	int input;
	cout<<"Enter the number you want to find the fibonacci series to: "<<endl;
	cin>>input;
	cout<<fib(input);
	return 0;
}