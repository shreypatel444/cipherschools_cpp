#include<iostream>
using namespace std;
//class Student{
//	private:
//		int marks,attendence;
//		string name;
//	public:
//		void displaymarks(){
//			cout<<marks;
//		}
//};
class Vehicle{
	public:
		int number_tyers;
		string name;
		int capacity;
		int milage;
	public:
		void calculate_milage(){
			cout<<"The milage is "<<milage<<endl;
		}
};
class Bus: public Vehicle
{
	void print_School_name(){
			cout<<"The name of the school is"<<name<<endl;
		}
};
class Car{
	private:
		int number_airbags;
		int ac_consumption;
};
int main(){
	Bus a;
	a.milage=50;
	a.calculate_milage();
}