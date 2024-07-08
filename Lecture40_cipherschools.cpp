#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    string brand;
    string model;
    int year;

public:
    Vehicle(string b, string m, int y) : brand(b), model(m), year(y) {}

    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Vehicle vehicle1("Toyota", "Corolla", 2020);
    Vehicle vehicle2("Honda", "Civic", 2021);

    cout << "Vehicle 1 Information:" << endl;
    vehicle1.displayInfo();
    
    cout<<endl;

    cout << "Vehicle 2 Information:" << endl;
    vehicle2.displayInfo();

    return 0;
}