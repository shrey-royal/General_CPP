#include<iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int arr[row][col], i, j;

    //random elements
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            arr[i][j] = rand()%100;
        }
    }

    //print elements
    cout << "Original Array: " << endl;
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }


    return 0;
}

/*
(row, column)

(0, 0) (0, 1) (0, 2) (0, 3)
(1, 0) (1, 1) (1, 2) (1, 3)
(2, 0) (2, 1) (2, 2) (2, 3)
(3, 0) (3, 1) (3, 2) (3, 3)

*/