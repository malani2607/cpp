#include <iostream>
using namespace std;

int main() {
    int n, num;
    int sumEven = 0, sumOdd = 0;

    // Ask how many numbers to enter
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    // Loop to accept numbers and calculate sums
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num % 2 == 0)
            sumEven += num;
        else
            sumOdd += num;
    }

    // Output
    cout << "\n====== Result ======" << endl;
    cout << "Sum of Even Numbers: " << sumEven << endl;
    cout << "Sum of Odd Numbers : " << sumOdd << endl;

    return 0;
}

