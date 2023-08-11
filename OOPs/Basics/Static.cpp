#include<iostream>
using namespace std;

class Demo {
    public:
        static int count;

        Demo() {
            count++;
        }

        static void printCount() {
            cout << "The value of count is: " << count << endl;
        }
};

// Initialize static variable
int Demo::count = 0;   //scope resolution operator -> it will tell the compiler that count is a static variable of class Demo

int main() {
    
    // Demo d, d1, d2, d3, d4, d5;
    // cout << d.count << endl;
    // cout << Demo::count << endl;
    Demo::printCount();
    
    return 0;
}







/*
class Sample {
    public:
        int a;
        string b;
        static int var;
};

// initialize static variable
int Sample::var = 10;

int main() {
    // Static variable
    Sample s1, s2;
    
    cout << "Memory of s1.a: " << &s1.a << endl;
    cout << "Memory of s2.a: " << &s2.a << endl;

    cout << "Memory of s1.b: " << &s1.b << endl;
    cout << "Memory of s2.b: " << &s2.b << endl;

    cout << "var is static" << endl;
    cout << "Memory of s1.var: " << &s1.var << endl;
    cout << "Memory of s2.var: " << &s2.var << endl;

    cout << "The value of var is: " << s1.var << endl;
    s1.var = 20;    // changing the value of static variable
    cout << "The value of var is: " << s2.var << endl;



}
*/

/*
Static Keywords:
    1. Static variable: Static variable is a variable that is shared by all the objects of the class. All the objects share the same copy of the static variable. A static variable can be accessed directly by the class name and doesn’t need any object.

    2. Static function
    3. Static class
    4. Static object

static members have same memory location for all the objects of the class.

whenever an object is created all the attributes are created in the memory. But static variables are created only once in the memory and shared by all the objects.


*/


/*
Tasks:

Problem 1: Counter with Static Variable
Create a class called 'Counter' with a static variable 'count' that keeps track of the number of instances created. Implement a static function 'getCount()' that returns the current count of instances.

Problem 2: Singleton Design Pattern
Implement a singleton class 'Logger' using a static member function that returns the same instance of the class every time it is called. The class should have a static variable to hold the instance and a member function to log messages.

Problem 3: Math Operations with Static Functions
Create a class 'MathUtil' with static functions 'add', 'subtract', 'multiply', and 'divide' that take two arguments each and perform the respective operations.

Problem 4: Student Class with Static Function
Design a class 'Student' with attributes like name, roll number, and marks. Implement a static function 'calculateAverage' that calculates the average marks of all the students created.

Problem 5: Password Generator
Create a class 'PasswordGenerator' with a static function 'generatePassword' that generates a random password based on certain criteria (e.g., length, inclusion of numbers and special characters). The class should use a static variable to keep track of the number of passwords generated.

Remember, these problem statements are meant to demonstrate the use of static variables and static functions in different scenarios. You'll need to write the corresponding C++ code to implement each problem.


*/