#include<iostream>
using namespace std;

class NewMod {
private:
    int num;
    int n1;

public:
    NewMod() {
        cout << "Enter the value of num: ";
        cin >> num;
        
        cout << "Enter the value of n1: ";
        cin >> n1;
    }

    void operator ++() {
        num += 2;
    }

    void operator -(int n2) {
        n1 -= n2;
    }

    void PrintNum() {
        cout << "The Count is: " << num << endl;
    }

    void PrintN1() {
        cout << "The value of n1 is: " << n1 << endl;
    }
};

int main() {
    int n2;
    NewMod n1;

    n1.PrintNum();

    ++n1;   // n1.operator++();
    
    n1.PrintNum();

    cout << "Enter the value of n2: ";
    cin >> n2;

    n1 - n2;  // n1.operator-(2);

    n1.PrintN1();

    return 0;
}


/*
We will perform a program to increment 2 values at a time instead of one using operator overloading.

we will use ++ operator to increment the values.

*/