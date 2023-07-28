#include <iostream>
using namespace std;

int getAverageFromArray(int*, int);

int main() {
    int row;

    cout << "Enter the number of rows: ";
    cin >> row;

    int arr[row];
    int length = sizeof(arr)/sizeof(arr[0]);


    //storing random numbers in the array
    for (int i=0; i<length; i++) {
        arr[i] = rand() % 1000;
    }

    //printing array
    for (int i : arr) {
        cout << i << ", ";
    }
    cout << endl;
    cout << "Average of the array is " << getAverageFromArray(arr, length) << endl;

    return 0;
}

int getAverageFromArray(int* arr, int len) {
    int sum = 0;
    for (int i=0 ; i< len; i++) {
        sum += arr[i];
    }
    return sum/len;
}