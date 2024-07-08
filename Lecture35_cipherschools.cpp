////#include<iostream>
////#include<stack>
////using namespace std;
////int main(){
////	stack<int> a;
////	a.push(5);
////	a.push(6);
////	a.push(7);
////	cout<<a.top();
////	a.pop();
////	cout<<a.top();
////	if(a.empty()==0){
////		cout<<"The stack is currently not empty"<<endl;
////	}
////	else{
////		cout<<"The stack is empty"<<endl;
////	}
////	a.pop();
////	a.pop();
////}
//#include<iostream>
//#include<map>
//using namespace std;
//int main(){
//	map<string,int> hash;
//	hash["rohit"]=1;
//	hash["programming"]=2;
//	hash["reddy"]=3;
//	cout<<"The value of rohit in the hashtable is "<<hash["rohit"];
//}#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Adding elements to the list
    myList.push_back(1);  // Add 1 to the end of the list
    myList.push_back(2);  // Add 2 to the end of the list
    myList.push_back(3);  // Add 3 to the end of the list
    myList.push_front(0); // Add 0 to the front of the list

    // Printing the list
    cout << "List elements after adding (using push_back and push_front): ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements from the list
    myList.pop_back();    // Remove the last element (3)
    myList.pop_front();   // Remove the first element (0)

    // Printing the list after removing elements
    cout << "List elements after removing (using pop_back and pop_front): ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Inserting an element at a specific position
    auto it = myList.begin();
    advance(it, 1);       // Move iterator to the second position
    myList.insert(it, 4); // Insert 4 before the second element

    // Printing the list after insertion
    cout << "List elements after inserting (4 at the second position): ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Removing a specific element (value 2)
    myList.remove(2);

    // Printing the list after removing element 2
    cout << "List elements after removing element (value 2): ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Clear the list
    myList.clear();

    // Check if the list is empty
    if (myList.empty()) {
        cout << "The list is now empty." << endl;
    }

    return 0;
}