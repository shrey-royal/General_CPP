#include<iostream>
using namespace std;

class Shape {   // Abstract Class
public:
    virtual void draw() = 0;    // Pure Virtual Function

    static void display() {    //non-virtual function
        cout << "Displaying..." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle..." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle..." << endl;
    }
};

int main() {
    // Shape s;    // Error: Cannot create object of Abstract Class
    Rectangle r;
    Circle c;
    
    r.draw();
    c.draw();
    
    // r.display();
    // c.display();

    Shape::display();
    
    return 0;
}

/*
Abstraction is a process of hiding the implementation details from the user, only the functionality will be provided to the user. In other words, the user will have the information on what the object does instead of how it does it.

we can achieve Abstraction using Abstract Classes(0% to 100%) and Interfaces(100%).

Any class that contains at least one pure virtual function is considered an abstract class.

*/