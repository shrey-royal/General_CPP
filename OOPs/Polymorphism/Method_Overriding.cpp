#include<iostream>
using namespace std;

class Shape {
public:
    int area() {
        cout << "Parent class area: ";
        return 0;
    }

    int perimeter() {
        cout << "Parent class perimeter: ";
        return 0;
    }
};

class Rectangle: public Shape {
public:
    int area(int width, int height) {
        cout << "Rectangle class area: ";
        return width*height;
    }

    int perimeter(int width, int height) {
        cout << "Rectangle class perimeter: ";
        return 2*(width+height);
    }
};

class Triangle: public Shape {
public:
    int area(int width, int height) {
        cout << "Triangle class area: ";
        return (width*height)/2;
    }

    int perimeter(int width, int height) {
        cout << "Triangle class perimeter: ";
        return 2*(width+height);
    }
};

class Circle: public Shape {
public:
    int area(int radius) {
        cout << "Circle class area: ";
        return 3.14*radius*radius;
    }

    int perimeter(int radius) {
        cout << "Circle class perimeter: ";
        return 2*3.14*radius;
    }
};

int main() {
    Shape s;
    Rectangle r;
    Triangle t;
    Circle c;

    cout << s.area() << endl;
    cout << s.perimeter() << endl;

    cout << r.area(5, 6) << endl;
    cout << r.perimeter(5, 6) << endl;

    cout << t.area(5, 6) << endl;
    cout << t.perimeter(5, 6) << endl;

    cout << c.area(5) << endl;
    cout << c.perimeter(5) << endl;

    return 0;
}


/*
Area: It is the region covered by the shape.
Perimeter: It is the length of the outline of the shape.
*/

/*
Tasks:

1. Complex Number Arithmetic:
   Implement a C++ class for complex numbers. Overload the '+', '-', '*', and '/' operators to perform arithmetic operations on complex numbers. Additionally, override the '<<' operator to allow easy printing of complex numbers.

2. Polymorphic Shape Calculations:
   Create a base class called 'Shape' with virtual functions for calculating area and perimeter. Derive multiple classes (e.g., 'Circle', 'Rectangle', 'Triangle') from 'Shape' and override the area and perimeter calculation methods for each shape. Write a program that calculates and displays the area and perimeter of different shapes using polymorphism.

3. Matrix Multiplication:
   Implement a matrix class in C++. Overload the '*' operator to perform matrix multiplication. Ensure that the operator works correctly for multiplying matrices of different dimensions and provide an overridden method to display the result matrix.

4. Employee Management System:
   Create a class hierarchy for an employee management system. The base class is 'Employee', and it contains virtual functions for calculating the salary. Derive classes like 'HourlyEmployee', 'SalariedEmployee', and 'CommissionedEmployee'. Overload the equality ('==') operator to compare employees based on their unique identifiers. Also, override the 'toString' method to provide detailed information about each employee.

5. Inventory System:
   Develop a program for managing an inventory system. Create a class called 'Product' with overloaded operators for addition and subtraction, representing the addition and removal of items from the inventory. Derive a class called 'Inventory' that contains a collection of 'Product' objects. Override the addition and removal methods in the 'Inventory' class to update the inventory quantity and display the current inventory status.

*/