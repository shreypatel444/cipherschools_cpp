//#include<iostream>
//using namespace std;
//int main(){
//	string name;
//	cin>>name;
//	for(int i=0;i<name.length();i++){
//		cout<<name[i]<<endl;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main(){
	string a,b,c;
	cin>>a>>b;
	cout<<"The strings which you have given as input are "<<a<<" "<<b<<endl;
	c=a+b;
	cout<<"Sum of a and b are: "<<c<<endl;
	cout<<"The length of combined a and b are: "<<c.length()<<endl;
	return 0;
}