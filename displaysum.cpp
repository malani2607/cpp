#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    // Input
    cout << "Enter the value of N: ";
    cin >> N;

    // Calculate the sum of (i + 1) from 1 to N
    for (int i = 1; i <= N; i++) {
        sum += (i + 1);
    }

    // Output the result
    cout << "\nSum of the series (1+1) + (2+1) + ... + (" << N << "+1) = " << sum << endl;

    return 0;
}

