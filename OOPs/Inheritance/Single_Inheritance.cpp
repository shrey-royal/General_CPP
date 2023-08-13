#include<iostream>
using namespace std;

class School {
    public:
        int roll_no;
        string name;
        void get_data() {
            cout<<"Enter the name of the student: ";
            cin>>name;
            cout<<"Enter the roll number of the student: ";
            cin>>roll_no;
        }
        void display() {
            cout<<"Name of the student is: "<<name<<endl;
            cout<<"Roll number of the student is: "<<roll_no<<endl;
        }
};

class Student : public School {
    public:
        int marks;
        void get_marks() {
            cout<<"Enter the marks of the student: ";
            cin>>marks;
        }
        void display_marks() {
            cout<<"Marks of the student is: "<<marks<<endl;
        }
};

int main() {
    Student s;
    s.get_data();
    s.get_marks();
    s.display();
    s.display_marks();
    return 0;
}

/*
Tasks:

Problem Statement 1: Student and Exam Management System

You are required to design a Student and Exam Management System using single inheritance in C++. The system should have classes for `Person` and `Student`, where `Person` contains attributes like name, age, and address, and `Student` inherits from `Person` and additionally contains attributes like roll number, subjects, and grades. Implement functions to add, update, and display student information along with their exam results. The system should allow users to calculate the average grade for a student, display the highest scoring student, and sort students based on their grades.

Problem Statement 2: Library Catalog and Membership System

Create a Library Catalog and Membership System using single inheritance in C++. Design a base class `Publication` that stores information about books, including title, author, publication year, and ISBN. Derive a class `Book` from `Publication`, which includes additional attributes like genre and number of pages. Implement a `Member` class with details like name, contact information, and membership status, inheriting from `Person`. The `Member` class should also include a list of borrowed books, and functions to borrow and return books. Develop functions to search for books by title, author, or genre, and display member details along with their borrowed books.

Problem Statement 3: Banking Management System

Develop a Banking Management System in C++ using single inheritance. Create a base class `AccountHolder` with attributes like name, address, and contact details. Derive a class `SavingsAccount` from `AccountHolder` with attributes like account number, balance, and interest rate. Implement functions to deposit, withdraw, and calculate interest for the `SavingsAccount`. Additionally, create a `LoanAccount` class inheriting from `AccountHolder` with attributes like loan number, loan amount, interest rate, and tenure. Provide methods to calculate the EMI (Equated Monthly Installment) for the loan and display account details.

Problem Statement 4: Online Shopping System

Design an Online Shopping System using single inheritance in C++. Create a base class `Product` with attributes like name, description, price, and stock. Derive a class `Electronics` from `Product`, including attributes like brand, specifications, and warranty period. Develop a `Customer` class inheriting from `Person`, with details such as name, shipping address, and order history. Implement functions to add products to the shopping cart, place an order, and calculate the total bill. Allow customers to view their order history and track the delivery status of their orders.

Problem Statement 5: Vehicle Rental System

Build a Vehicle Rental System using single inheritance in C++. Create a base class `Vehicle` with properties like make, model, year, rental rate, and availability status. Derive classes `Car` and `Bike` from `Vehicle`, including attributes specific to each type of vehicle, such as number of seats for cars and type of bike for bikes. Implement a `Customer` class inheriting from `Person` with attributes like name, contact information, and rental history. Develop functions to rent vehicles, return vehicles, and calculate rental charges based on rental duration. Provide options to display available vehicles, filter by type, and view customer rental history.

*/