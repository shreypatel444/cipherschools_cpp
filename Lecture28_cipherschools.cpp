//#include<iostream>
//using namespace std;
//class student
//{
//	public:
//		string name;
//		int attendence;
//		float total_marks;
//		void calculate_percentage(){
//			cout<<total_marks<<"%";
//		}
//};
//int main(){
//	student a,b,c;
//	a.name="Harsh";
//	a.attendence=95;
//	a.total_marks=85;
//	a.calculate_percentage();
//	cout<<"Details of student a: "<<endl;
//	cout<<"Name: "<<a.name<<endl;
//	cout<<"Attendence: "<<a.attendence<<endl;
//	cout<<"Total Marks: "<<a.total_marks<<endl;
//	cout<<"Percentage: ";
//	a.calculate_percentage();
//	return 0;
//}
#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    string name;
    int creditNumber;

public:
    // Constructor to initialize name and credit number
    Customer(string n, int c) : name(n), creditNumber(c) {}

    // Public method to set the credit number
    void setCreditNumber(int c) {
        creditNumber = c;
    }

    // Public method to get the credit number
    int getCreditNumber() const {
        return creditNumber;
    }

    // Public method to print name and credit number
    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Credit Number: " << creditNumber << endl;
    }
};

int main() {
    // Create an object of the Customer class
    Customer customer("John Doe", 123456789);

    // Print initial information
    customer.printInfo();

    // Set a new credit number
    customer.setCreditNumber(987654321);

    // Print updated information
    customer.printInfo();

    return 0;
}