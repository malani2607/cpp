#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Input
    cout << "Enter the value of N: ";
    cin >> N;

    // Calculate sum using loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Output
    cout << "\nSum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}

