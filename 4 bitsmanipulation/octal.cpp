//     https://cp-algorithms.com/algebra/bit-manipulation.html

#include <iostream>
#include <vector>
using namespace std;

void decimalTooctal(int n) {
    vector<int> octal;

    // Loop to calculate octal representation
    while (n > 0) {
        octal.push_back(n % 8);
        n /= 8;
    }

    // Print the octal representation in reverse order
    cout << "octal representation: ";
    for (int i = octal.size() - 1; i >= 0; i--) {
        cout << octal[i];
    }

    cout << endl;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        decimalTooctal(number);
    }

    return 0;
}
