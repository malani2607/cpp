#include <iostream>
using namespace std;

int main() {
    int n, num;
    int maxVal, minVal;

    // Input count
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    // Check for valid input
    if (n <= 0) {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    // Input first number
    cout << "Enter number 1: ";
    cin >> num;
    maxVal = minVal = num;

    // Loop for remaining numbers
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > maxVal)
            maxVal = num;
        if (num < minVal)
            minVal = num;
    }

    // Output
    cout << "\n===== Result =====" << endl;
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;

    return 0;
}

