#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    string major;

public:
    Student(string n, int a, string m) : name(n), age(a), major(m) {}

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Major: " << major << endl;
    }
};

int main() {
    Student student1("Alice", 20, "Computer Science");
    Student student2("Bob", 22, "Mechanical Engineering");

    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInfo();

    return 0;
}