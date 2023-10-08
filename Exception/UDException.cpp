#include<iostream>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Division by zero is not possible";
    }
};

int main() {
    try {
        int x, y;
        cout << "Enter 2 numbers: " << endl;
        cin >> x >> y;

        if(y == 0) {
            MyException z;
            throw z;
        } else {
            cout << "x/y = " << x/y << endl;
        }
    } catch(exception& e) {
        cout << e.what() <<endl;
    }
}

/*
Tasks:

> Take an array of size 20 then ask the user to enter the size of the array. If the size is greater than 20 then throw an exception(ArrayLimitExceedsException).
> Now, ask user to fill the array then print the array.
> If user again choose to store the elements into the array then throw an exception(ArrayAlreadyFilledException).
> If user wants to print the array's elements that is not filled yet then throw an exception(ArrayIndexEmptyException).
> If user wants to print the array's elements that is out of the range then throw an exception(ArrayIndexOutOfRangeException).

*/