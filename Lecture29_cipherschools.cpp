#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    string name;
    int creditNumber;

public:
    
    Customer(string n, int c) : name(n), creditNumber(c) {}
    void setCreditNumber(int c) {
        this->creditNumber = c;
    }

    int getCreditNumber() const {
        return this->creditNumber;
    }

    void printInfo() const {
        cout << "Name: " << this->name << endl;
        cout << "Credit Number: " << this->creditNumber << endl;
    }
};

int main() 
{
    Customer customer("John Doe", 123456789);

    customer.printInfo();

    customer.setCreditNumber(987654321);

    customer.printInfo();

    return 0;
}