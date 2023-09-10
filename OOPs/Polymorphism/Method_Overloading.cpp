#include<iostream>
using namespace std;

class Calculator {
public:
    int add() {
        return 0;
    }

    int add(int a) {
        return a;
    }

    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }


};

int main() {
    Calculator calc;

    cout << calc.add() << endl;
    cout << calc.add(10) << endl;
    cout << calc.add(10, 20) << endl;
    cout << calc.add(10, 20, 30) << endl;
    cout << calc.add(10.0f, 20.5f) << endl;
    
    return 0;
}

/*
Function Overloading is done using two ways:
1. By changing the number of arguments
2. By changing the type of arguments

Tasks:

1. Addition Overload: Create a C++ program that overloads a function to add two integers, two floats, and two doubles.

2. Maximum Overload: Implement a program that overloads a function to find the maximum of two integers, two floats, and two doubles.

3. Area Calculation Overload: Write a C++ program with a function that calculates the area of a square, rectangle, and circle using function overloading.

4. Display Overload: Develop a program that overloads a function to display the value of an integer, a float, and a string.

5. Sum of Arrays Overload: Create a program that overloads a function to find the sum of elements in an integer array, a float array, and a double array.

6. Factorial Overload: Implement a function that calculates the factorial of an integer and the factorial of a double using function overloading.

7. Power Calculation Overload: Write a C++ program that overloads a function to calculate the power of an integer and the power of a float.

8. Swap Overload: Develop a program that overloads a function to swap the values of two integers, two floats, and two doubles.

9. Greeting Overload: Create a program with a function that overloads to greet a person with their name and without a name.

10. Display Character Overload: Implement a program that overloads a function to display a character a specified number of times and to display it once.

*/