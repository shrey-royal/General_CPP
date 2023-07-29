#include<iostream>
using namespace std;

class Human {
    public:
    string name;
    int age;
    bool gender;    //male -> 1 & female -> 0
    float height;   //in feet
    float weight;   //in kgs

    void ScanDetails() {
        cout << "Enter Name: ";
        // cin >> name;    //this will not work for names with spaces
        getline(cin, name); //this will work for names with spaces

        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender (Press 1 for Male and 0 for Female): ";
        cin >> gender;
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Weight: ";
        cin >> weight;        
    }

    void printDetails() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << (gender == 1)?"Male":"Female";
        cout << endl;
        cout << "Height: " << height << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main() {
    //object of class Human
    //Class_Name Object_Name;
    //Class_Name Object_Name = Class_Name();    //default constructor

    // Human h1;

    // h1.name = "Naimish";
    // h1.age = 6;
    // h1.gender = 1;
    // h1.height = 2.5;    // 1 feet is equal to 0.3048 meters
    // h1.weight = 15.5;

    // cout << "Name: " << h1.name << endl;
    // cout << "Age: " << h1.age << endl;
    // string gender = (h1.gender == 1)?"Male":"Female";
    // cout << "Gender: " << gender << endl;
    // cout << "Height: " << h1.height << endl;
    // cout << "Weight: " << h1.weight << endl;


    Human h2, h3, h4, h5;
    h2.ScanDetails();
    h2.printDetails();

    return 0;
}



/*
Attributes of Human: 
    1. Name
    2. Age
    3. Gender
    4. Height
    5. Weight

boolean: true(1)/false(0)


*/