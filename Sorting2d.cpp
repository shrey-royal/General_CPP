#include<iostream>
using namespace std;

static int row, col;

int main() {
    // int row = 0, col = 0;
    // int i = 78, j = 56;

    // cout << &row << ", " << &col << ", " << &i << ", " << &j << endl;



    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    int arr[row][col], i, j, temp;

    //generate random array
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    //print array
    cout << "Original Array: " << endl;
    for (auto &&i : arr) {
        for (auto &j : i) {
            cout << j << "\t";
        }
        cout << endl;
    }

    //sort array
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            for(int k = 0; k < row; k++) {
                for(int l = 0; l < col; l++) {
                    if(arr[i][j] < arr[k][l]) {
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }

    //print array
    cout << "Sorted Array: " << endl;
    for (auto &&i : arr) {
        for (auto &j : i) {
            cout << j << "\t";
        }
        cout << endl;
    }

    return 0;
}

/*
Storage classes:

auto -> automatic storage class
> Memory is allocated automatically when the block is entered and freed when the block is exited
> Default storage class for all local variables
> Cannot be used for global variables

register -> register storage class
> Memory is allocated in the CPU register instead of RAM
> Faster access
> Cannot be used for global variables
> Cannot be used with static storage class

static -> static storage class
> Memory is allocated in the data segment
> Value is stored in the data segment
> Value is retained between function calls
> Default value is 0
> Can be used for global variables
> Can be used with extern storage class


extern -> extern storage class
> Value is stored in the data segment
> Value is retained between function calls (reatined: preserved)
> Default value is 0
> Can be used for global variables
> Can be used with static storage class

*/