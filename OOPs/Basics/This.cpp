/*
This pointer: 

> it referes to the current object
> it is a pointer which holds the address of the current object
> it is used to differentiate between the local and global variables
*/

#include <iostream>
using namespace std;

class Child_Hospital {
    int childCount;         //it will count the number of children in the hospital
    int childCapacity;      //it will count the total capacity of the hospital
    int* childAges;         //it will store the ages of the children

    public:

    Child_Hospital(int childCount, int childCapacity, int* childAges) {
        this->childCount = childCount;
        this->childCapacity = childCapacity;
        this->childAges = childAges;
    }

    Child_Hospital(const Child_Hospital& obj) { // Copy Constructor
        childCount = obj.childCount;
        childCapacity = obj.childCapacity;
        childAges = new int[childCapacity];
        for(int i = 0; i < childCount; i++) {
            childAges[i] = obj.childAges[i];
        }
    }

    //Destructor
    ~Child_Hospital() {
        delete[] childAges;
        cout << "Destructor Called" << endl;
    }

    void display() {
        cout << "Child Count: " << childCount << endl;
        cout << "Child Capacity: " << childCapacity << endl;
        cout << "Child Ages: ";
        for(int i = 0; i < childCount; i++) {
            cout << childAges[i] << " ";
        }
        cout << endl;
    }

    void add_child(int age) {
        if(childCount < childCapacity) {
            childAges[childCount] = age;
            childCount++;
        }
        else {
            cout << "Child Hospital is Full" << endl;
        }
    }

    void remove_child() {
        if(childCount > 0) {
            childCount--;
        }
        else {
            cout << "Child Hospital is Empty" << endl;
        }
    }

    void update_child(int index, int age) {
        if(index >= 0 && index < childCount) {
            childAges[index] = age;
        }
        else {
            cout << "Invalid Index" << endl;
        }
    }
};

int main() {
    int childAges[5] = {1, 2, 3, 4, 5};
    Child_Hospital child(5, 10, childAges);
    child.display();

    Child_Hospital child2 = child; // Copy Constructor
    child2.display();

    child.add_child(6);
    child.display();

    child.remove_child();
    child.display();

    child.update_child(2, 10);
    child.display();
}

/*

This pointer: 
> It is a keyword which is used as a pointer which points to the current object.
> It is used to access the instance variables of the current object.
> It is used to access the methods of the current object.
> It is used to access the constructor of the current object.
> It is used to return the current object from the method.
> It is used to pass the current object as a parameter to the method.


TASSSK:

1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

2. "Design a class 'Car' to model different cars owned by individuals. Each car has a unique license plate number and a fuel level. Implement a member function 'refuel(double liters)' that takes the amount of fuel to be added and uses the 'this' pointer to update the fuel level of the current car."

3. "Develop a class 'BankCustomer' to represent a customer's account in a bank. Each customer has a name, account number, and current balance. Write a member function 'withdraw(double amount)' that takes an amount to be withdrawn and uses the 'this' pointer to deduct the specified amount from the customer's balance."

4. "Create a class 'Book' to represent a book in a library. Each book has a title, author, and availability status. Implement a member function 'borrowBook()' that uses the 'this' pointer to mark the current book as borrowed when a library user borrows it."

5. "Design a class 'MobilePhone' to model a mobile phone owned by a person. Each phone has a unique phone number and a contact list. Write a member function 'addContact(string name, string number)' that takes a name and phone number as parameters and uses the 'this' pointer to add the contact to the current phone's contact list."

*/