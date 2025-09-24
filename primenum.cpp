#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    cout << "\nPrime numbers between 1 and " << N << " are:\n";

    for (int i = 1; i <= N; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    cout << endl;
    return 0;
}

