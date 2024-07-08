#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int mids;
		float ends;
		float pre_abs;
		
		void display_calculate_marks(){
			float total_marks;
			total_marks=(mids*0.5)+(ends*0.75);
			cout<<"The marks of "<<name<<" is "<<total_marks<<endl;
		}
};
class Vehicle{
	public:
		string car_name;
		string tyre_name;
		int number_of_tyres;
		int number_of_seats;
};
int main(){
	Student a;
	a.name="Harsh";
	a.mids=50;
	a.ends=99.5;
	a.pre_abs=1;
	a.display_calculate_marks();
	Vehicle b;
	b.car_name="Verna";
	b.number_of_seats=4;
	b.number_of_tyres=4;
	b.tyre_name="Michellene";
	return 0;
}