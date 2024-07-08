//#include<iostream>
//using namespace std;
////class Student{
////	private:
////		int marks,attendence;
////		string name;
////	public:
////		void displaymarks(){
////			cout<<marks;
////		}
////};
//class Vehicle{
//	public:
//		int number_tyers;
//		string name;
//		int capacity;
//		int milage;
//	public:
//		void calculate_milage(){
//			cout<<"The milage is "<<milage<<endl;
//		}
//};
//class Bus: public Vehicle
//{
//	void print_School_name(){
//			cout<<"The name of the school is"<<name<<endl;
//		}
//};
//class Car: private Vehicle
//{
//	private:
//		int number_airbags;
//		int ac_consumption;
//};
//int main(){
//	Bus a;
//	a.milage=50;
//	a.calculate_milage();
//}
#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    int year;

    void displayInfo() const {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

// Derived class Bus (public inheritance)
class Bus : public Vehicle {
public:
    int passengerCapacity;

    void displayBusInfo() const {
        displayInfo();
        cout << "Passenger Capacity: " << passengerCapacity << endl;
    }
};

// Derived class Car (private inheritance)
class Car : private Vehicle {
public:
    string model;

    void setVehicleInfo(const string &brand, int year) {
        this->brand = brand;
        this->year = year;
    }

    void displayCarInfo() const {
        displayInfo();
        cout << "Model: " << model << endl;
    }
};

// Derived class Bike (protected inheritance)
class Bike : protected Vehicle {
public:
    bool hasGear;

    void setBikeInfo(const string &brand, int year, bool hasGear) {
        this->brand = brand;
        this->year = year;
        this->hasGear = hasGear;
    }

    void displayBikeInfo() const {
        displayInfo();
        cout << "Has Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

int main() {
    // Create and display information about a Bus
    Bus bus;
    bus.brand = "Volvo";
    bus.year = 2022;
    bus.passengerCapacity = 50;
    bus.displayBusInfo();

    cout << endl;

    // Create and display information about a Car
    Car car;
    car.setVehicleInfo("Toyota", 2020);
    car.model = "Corolla";
    car.displayCarInfo();

    cout << endl;

    // Create and display information about a Bike
    Bike bike;
    bike.setBikeInfo("Yamaha", 2019, true);
    bike.displayBikeInfo();

    return 0;
}