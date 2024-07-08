#include<iostream>
using namespace std;
class Cordinate{
	public:
		float a,b;
	public:
		Cordinate operator+(Cordinate const & obj){
			Cordinate z;
			z.a=this->a + obj.a;
			z.b=this->b + obj.b;
			return z;
		}
		void SqDistanceFromCordinate(float a){
			float dist;
			dist=(this->a-a)*(this->a-a) + (this->b-a)*(this->b-a);
			cout<<dist;
		}
		void SqDistanceFromCordinate(float a,float b){
			float dist;
			dist=(this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);
			cout<<dist;
		}
};
int main(){
	Cordinate x;
	x.a=3;
	x.b=4;
	Cordinate y;
	x.a=5;
	x.b=6;
	Cordinate z;
	z=x+y;
	x.SqDistanceFromCordinate(0,0);
	cout<<"The cordinates after addition are "<<z.a<<" "<<z.b;
}