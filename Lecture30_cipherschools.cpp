#include<iostream>
using namespace std;
//class Complex{
//	private:
//		float real,img;
//	public:
//		void set_parameters(int real,int img){
//			this->real=real;
//			this->img=img;
//		}
//		void SqDistanceFromOrigin(){
//			float dist;
//			dist=real*real+img*img;
//			cout<<"The distance from origin is "<<dist;
//			return;
//		}
//};
class New_account{
	public:
		int amount,days;
		New_account(int amount,int days){
			days=0;
			amount=0;
			cout<<"The constructor is called now!!"<<endl;
		}
		~New_account(){
			cout<<"The use of object is over and object is getting destroyed now!!"<<endl;
		}
//		void initial(){
//			amount = 0;
//			day = 0;
//		}
};
int main()
{
//	Complex a,b;
//	a.set_parameters(3,4);
//	a.SqDistanceFromOrigin();
	New_account a(0,0);
	//a.initial();
	cout<<"This is the main function!!";
	return 0;
}