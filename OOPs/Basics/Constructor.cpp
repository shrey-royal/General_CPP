/*
Constuctor is a special member function of a class which is used to initialize the objects of its class.

It is a special member function of the class.
> It has the same name as the class itself.
> It is used to initialize the objects of its class.
> It is automatically invoked whenever an object is created.
> It is always defined in the public section of the class.
> It does not have any return type, not even void.
> It can have default arguments.
> We cannot refer to their address.

Types of Constructors:

> Default Constructor: A constructor is called "default constructor" when it doesn't take any argument.

> Parameterized Constructor: A constructor is called "parameterized constructor" when it takes arguments.

Rules of defining a constructor:

> It should be declared in the public section of the class.
> It should have the same name as that of the class.
> They cannot be inherited, though a derived class can call the base class constructor.


syntax: 

class class_name {
    public:
        class_name (argument_list) {
            // body of the constructor
        }
};

*/

#include<iostream>
using namespace std;

/*
I want to create a class called naimish which is a student at GEC gandhinagar and he has 1 backlog in 3rd sem. Make a class on the basis of this information.
*/

class Naimish {
    public:
        string name;
        string college;
        int backlogs;

        Naimish() {
            name="Naimish";
            college="GEC Gandhinagar";
            backlogs=1;
            cout << "\nDefault Constructor called\n";
        }

        void printDetails() {
            cout << "Name: " << name << endl;
            cout << "College: " << college << endl;
            cout << "Backlogs: " << backlogs << endl;
        }

        void setDetails(string n, string c, int b) {
            name=n;
            college=c;
            backlogs=b;
        }
};

int main() {
    Naimish naimish;
    naimish.printDetails();

    naimish.setDetails("Naimish", "GEC Gandhinagar", 4);
    naimish.printDetails();

    return 0;
}

/*
Make a class called student which has the following properties:
> Name
> Roll Number
> Class
> Section

> Make a constructor which takes all the above arguments and sets them to their respective properties.
> Make a function called printDetails() which prints all the details of the student.
> Make a function called setDetails() which takes all the arguments and sets them to their respective properties.
> Make an array of object (at least 5) of the class student and print the details of all the students.


*/