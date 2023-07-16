#include<iostream>
using namespace std;

int main() {
    int arr[10];

    //random elements
    for(int i=0; i<10; i++) {
        arr[i] = rand()%100;
    }

    //print elements
    cout << "Original Array: ";
    for(int i=0; i<10; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    //sort elements (bubble sort)
    for(int i=0; i<10; i++) {
        for(int j=0; j<10-i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //print elements
    cout << "\nSorted Array: ";
    for(int i=0; i<10; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    int key_element;

    cout << "\nEnter the element to be searched: ";
    cin >> key_element;

    //search element
    int flag = 0;
    for(int i=0; i<10; i++) {
        if(arr[i]==key_element) {
            cout << "\nElement " << key_element << " found at position: " << i+1 << endl;
            flag = 1;
            break;
        }
    }

    if(flag==0) {
        cout << "\nElement " << key_element << " not found in the array." << endl;
    }

    return 0;
}

/*
Original Array: 41 67 34 0 69 24 78 58 62 64

Sorted Array: 0 24 34 41 58 62 64 67 69 78

Logic of Bubble Sort : 

1. Compare the first two elements in the array.
2. If the first element is greater than the second element, swap them.
3. Compare the second and third elements. If the second element is greater than the third element, swap them.
4. Continue until the last element in the array.

*/