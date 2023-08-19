#include<iostream>
using namespace std;

class A {
    public:
        void printA() {
            cout<<"Class A"<<endl;
        }
};

class B : public A {
    public:
        void printB() {
            cout<<"Class B"<<endl;
        }
};

class C : public B {
    public:
        void printC() {
            cout<<"Class C"<<endl;
        }
};

int main() {
    C c;
    c.printA();
    c.printB();
    c.printC();

    return 0;
}

/*

Problem 1: Employee Hierarchy

Create a class `Person` with attributes like name and age. Derive a class `Employee` from `Person` with attributes like employee ID and salary. Further, derive a class `Manager` from `Employee` with attributes like number of subordinates and department. Implement methods to display the details of a person, employee, and manager.

Problem 2: Geometry Shapes

Design a class `Shape` with methods to calculate the area and perimeter of a shape. Derive classes `Circle` and `Rectangle` from `Shape`. Derive another class `Square` from `Rectangle` to represent a square. Implement methods to calculate area and perimeter for each shape and demonstrate their usage.

Problem 3: Vehicle Hierarchy

Create a class `Vehicle` with attributes like make, model, and year. Derive a class `Car` from `Vehicle` with attributes like fuel type and number of doors. Further, derive a class `ElectricCar` from `Car` with attributes like battery capacity and charging time. Implement methods to display the details of a vehicle, car, and electric car.

Problem 4: Academic Hierarchy

Develop a class `Person` with attributes like name and address. Derive a class `Student` from `Person` with attributes like roll number and average grade. Derive another class `GradStudent` from `Student` with attributes like thesis topic and advisor. Implement methods to display the details of a person, student, and graduate student.

Problem 5: Banking System

Create a class `Account` with attributes like account number and balance. Derive a class `SavingsAccount` from `Account` with attributes like interest rate and minimum balance. Further, derive a class `SpecialSavings` from `SavingsAccount` with additional attributes like withdrawal limit. Implement methods to manage account details, deposit, withdraw, and display information for each account type.


*/