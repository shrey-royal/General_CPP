#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Before the try-catch block" << endl;

    try {
        if(b == 0) {
            throw "Division by zero is not possible";
        } else {
            cout << "a/b = " << a/b << endl;
        }
    } catch(const char* e) {
        cout << e << endl;
    }

    cout << "After the try-catch block" << endl;

    return 0;
}