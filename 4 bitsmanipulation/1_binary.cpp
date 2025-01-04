//     https://cp-algorithms.com/algebra/bit-manipulation.html

#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int n) {
    vector<int> binary;

    // Loop to calculate binary representation
    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }

    // Print the binary representation in reverse order
    cout << "Binary representation: ";
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
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
        decimalToBinary(number);
    }

    return 0;
}
