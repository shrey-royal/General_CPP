#include<iostream>
#include<string.h>
using namespace std;

//Getter and Setter Methods
class Person {
private:
    string name;
    int age;
    int married;    //it married assign 1 otherwise 0
public:
    Person() {
        this->name = nullptr;
        this->age = 0;
        this->married = 0;
    }

    Person(string name, int age, int married) {
        this->name = name;
        this->age = age;
        this->married = married;
    }

    //getter / setter methods
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return this->age;
    }

    void MarriedStatus(int married) {
        this->married = married;
    }
    
    int isMarried() {
        return married;
    }

    void DisplayPersonDetails() {
        cout << "\nName: " << this->name;
        cout << "\nAge: " << this->age;
        cout << "\nMarriage Status: " << this->married;        
    }
};

int main() {
    string name;
    int age;
    char married;

    cout << "\nEnter your name: ";
    // cin >> name;
    getline(cin, name);

    cout << "\nEnter your age: ";
    cin >> age;

    cout << "\nAre you Married(Y/N): ";
    cin >> married;
    married = (married == 'y' || married == 'Y')?1:0;

    Person p1(name, age, married);
    // p1.DisplayPersonDetails();
    cout << "\nName: " << p1.getName();
    cout << "\nAge: " << p1.getAge();
    cout << "\nMarriage Status: " << p1.isMarried();

    //Updation
    // p1.MarriedStatus(1);
    // p1.DisplayPersonDetails();
    
    return 0;
}


/*
class Dummy {
    int a;
    int b;
public:
    int solve(int input) {
        a = input;
        b = a/2;
        return b;
    }
};

int main() {
    int n;
    cin >> n;
    Dummy half;
    cout << half.solve(n) <<endl; 
    return 0;
}
*/




/*
Encapsulation: Getter and Setter Methods

Q. What is Encapsulation?
>  The wrapping up of the data and information in a single unit.

It consist of 2 important properties:
1. Data Protection
2. Information Hiding


*/

/*
You have to attach a switch case for inserting, viewing and updating the data, and it should run until user choose to exit.

The class member will be as follow:

    string name;
    int age;
    int married;
    string address;
    string email;
    string phone;
    double height; // Height in meters
    double weight; // Weight in kilograms

if my classmember is boolean than get and set words will not work.

*/