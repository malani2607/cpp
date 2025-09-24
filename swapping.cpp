#include <iostream>
using namespace std;

// Swap using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

// Swap using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;

    // Call by value
    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl << endl;

    // Call by reference
    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}

