#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of rows (N): ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "*\n";
    }

    return 0;
}

