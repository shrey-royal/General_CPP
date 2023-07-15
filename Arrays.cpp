#include<iostream>
using namespace std;

/* we will see that how to pass an array to a function that checks whether the number is prime or not and return the new array of prime numbers */

bool isPrime(int);

int main() {
    const int size = 10;
    int arr[] = {7, 12, 13, 17, 81, 21, 30, 67, 9, 2}, i;
    bool foundPrime = false;

    //randomly filling the array
    // for(i=0; i<10; i++) {
    //     arr[i] = rand()%100;
    // }

    //printing the array
    for(i=0; i<10; i++) {
        cout<<arr[i]<<" ";
    }
    cout << endl;

    for(i=0; i<size; i++) {
        if(isPrime(arr[i])) {
            cout << arr[i] << ", ";
            foundPrime = true;
        }
    }

    if(!foundPrime) {
        cout << "No prime number found in the array" << endl;
    }
    cout << endl;
    return 0;
}

bool isPrime(int number) {
    int i;

    //checking for prime numbers (easiest way)
    if (number < 2) {
        return false;
    }

    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

/*

Tasks:
	> Scan an array from user of at least 10 random
		numbers then find the prime number from that array if any.

	> Take array from user (size 10) then make
		factorial of every element present in that array.

	> {1, 2, 6, 5, 4}
	> {1, 2, 720, 120, 24}



*/