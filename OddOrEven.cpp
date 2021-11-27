#include "std_lib_facilities.h"

int main() {
    cout << "Enter a number to test if it's odd or even: ";
    int number;
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even.";
    }
    else {
        cout << "The number " << number << " is odd.";
    }
}