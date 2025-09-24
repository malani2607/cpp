#include <iostream>
using namespace std;

int main() {
    int N, first = 0, second = 1, next;

    // Input
    cout << "Enter how many terms of the Fibonacci series to display: ";
    cin >> N;

    // Check for valid input
    if (N <= 0) {
        cout << "Please enter a positive number greater than 0." << endl;
        return 1;
    }

    cout << "\nFibonacci Series (" << N << " terms):\n";

    for (int i = 1; i <= N; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}

