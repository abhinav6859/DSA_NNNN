
#include <iostream>
using namespace std;

int add(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + add(arr, n - 1);
}

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

int power (int base ,int exp){
    if(exp ==0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    int s;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum: " << add(arr, n) << endl;
    cout<< "Enter any number for factorial: "<< endl;
    cin >> s;
 cout << "Factorial: " << factorial(s) << endl;
 int base,pow;
 cout<< "Enter base and power: ";
 cin >> base >> pow;
 cout << "Power: " << power(base, pow) << endl;
  
    cout << "This is a test for recursion." << endl;

    return 0;
}