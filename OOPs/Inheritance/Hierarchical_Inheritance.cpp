#include<iostream>
using namespace std;

class Car {
    private:
        float horsePower;
        float engineDisplacement;
    public:
        Car() {
            horsePower = 0;
            engineDisplacement = 0;
        }

        Car(float hp, float cc) {
            horsePower = hp;
            engineDisplacement = cc;
        }

        void display() {
            cout << "Horse Power: " << horsePower << endl;
            cout << "Engine Displacement: " << engineDisplacement << endl;
        }

        ~Car() {
            cout << "Car Destructor" << endl;
        }
};

class SportsCar : public Car {
    private:
        float topSpeed;
    public:
        SportsCar() {
            topSpeed = 0;
        }

        // SportsCar(float hp, float cc, float ts) {
        //     Car(hp, cc);
        //     topSpeed = ts;
        // }

        SportsCar(float hp, float cc, float ts) : Car(hp, cc) {
            topSpeed = ts;
        }

        void display() {
            Car::display();
            cout << "Top Speed: " << topSpeed << endl;
        }

        ~SportsCar() {
            cout << "Sports Car Destructor" << endl;
        }
};

class LuxuryCar : public Car {
    private:
        float price;
    public:
        LuxuryCar() {
            price = 0;
        }

        LuxuryCar(float hp, float cc, float p) : Car(hp, cc) {
            price = p;
        }

        void display() {
            Car::display();
            cout << "Price: " << price << endl;
        }

        ~LuxuryCar() {
            cout << "Luxury Car Destructor" << endl;
        }
};

int main() {
    //SportsCar(hp, cc, topspeed)
    SportsCar s1(100, 200, 300);
    s1.display();

    //LuxuryCar(hp, cc, price)
    LuxuryCar l1(400, 500, 600);
    l1.display();

    return 0;
}

/*
Problem 1: Vehicle Hierarchy
Create a class 'Vehicle' with attributes like 'make', 'model', and 'year'. Derive two classes 'Car' and 'Motorcycle' from 'Vehicle'. Implement hierarchical inheritance where both 'Car' and 'Motorcycle' inherit from 'Vehicle'. Allow each derived class to have specific attributes like 'numDoors' for 'Car' and 'numCylinders' for 'Motorcycle'.

Problem 2: Shape Hierarchy
Design a class hierarchy for different geometric shapes. Start with a base class 'Shape', and then derive classes like 'Circle', 'Rectangle', and 'Triangle' from it. Each derived class should have its specific attributes (e.g., radius for 'Circle', length and width for 'Rectangle', base and height for 'Triangle').

Problem 3: Employee Hierarchy
Create a base class 'Employee' with attributes like 'name', 'employeeId', and 'salary'. Derive two classes 'Manager' and 'Worker' from 'Employee'. Add an additional class 'TemporaryWorker' derived from 'Worker'. Implement hierarchical inheritance where 'Manager' and 'TemporaryWorker' inherit from 'Employee', and 'TemporaryWorker' inherits from 'Worker'.

Problem 4: Animal Hierarchy
Construct a class hierarchy representing different types of animals. Begin with a base class 'Animal', and then derive classes like 'Mammal', 'Bird', and 'Reptile' from it. Each derived class should have specialized attributes (e.g., 'furColor' for 'Mammal', 'wingSpan' for 'Bird', 'scaleType' for 'Reptile').

Problem 5: Electronics Hierarchy
Build a class hierarchy for electronic devices. Start with a base class 'ElectronicDevice', and then derive classes like 'Phone', 'Laptop', and 'Tablet' from it. Each derived class should possess distinct attributes (e.g., 'screenSize' for 'Phone', 'keyboardType' for 'Laptop', 'batteryCapacity' for 'Tablet').

In each of these problem statements, you'll need to demonstrate an understanding of hierarchical inheritance in C++. Define appropriate classes and member functions, manage access specifiers, and ensure the derived classes inherit and extend the properties of the base class.

*/