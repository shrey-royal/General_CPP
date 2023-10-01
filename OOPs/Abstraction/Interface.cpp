#include<iostream>
using namespace std;

class Shape {   // Abstract Class
public:
    virtual int getArea() = 0;
};

class Rectangle : public Shape {
private:
    int height;
    int width;
public:
    Rectangle(int h, int w) {
        height = h;
        width = w;
    }
    int getArea() {
        return height * width;
    }
};

class Triangle : public Shape {
private:
    int height;
    int width;
public:
    Triangle(int h, int w) {
        height = h;
        width = w;
    }
    int getArea() {
        return (height * width) / 2;
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(5, 10);

    cout << "Area of Rectangle: " << rect.getArea() << endl;
    cout << "Area of Triangle: " << tri.getArea() << endl;
    
    return 0;
}