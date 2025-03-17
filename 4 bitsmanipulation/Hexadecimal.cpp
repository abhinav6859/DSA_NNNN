//     https://cp-algorithms.com/algebra/bit-manipulation.html

#include <iostream>
#include <vector>
using namespace std;

void decimalToHexa(int n) {
    vector<int> Hexa;

    // Loop to calculate Hexa representation
    while (n > 0) {
        Hexa.push_back(n % 16);
        n /= 16;
    }

    // Print the Hexa representation in reverse order
    cout << "Hexa representation: ";
    for (int i = Hexa.size() - 1; i >= 0; i--) {
        if(Hexa[i]==10) cout<<"A";
       else if(Hexa[i]==11) cout<<"B";
       else if(Hexa[i]==12) cout<<"C";
       else if(Hexa[i]==13) cout<<"D";
       else if(Hexa[i]==14) cout<<"E";
       else if(Hexa[i]==15) cout<<"F";
       else cout << Hexa[i];
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
        decimalToHexa(number);
    }

    return 0;
}
