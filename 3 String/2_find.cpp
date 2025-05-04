#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, this is a sample string.";
    string str2 = "sample";
    bool found = false;
    int position = -1;

    for (size_t i = 0; i <= str1.length() - str2.length(); ++i) {
        size_t j = 0;
        while (j < str2.length() && str1[i + j] == str2[j]) {
            ++j;
        }

        if (j == str2.length()) {
            found = true;
            position = i;
            break;
        }
    }

    if (found) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
