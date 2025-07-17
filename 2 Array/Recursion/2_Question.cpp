// leetcode Question 1545

#include <iostream>
#include <algorithm>
using namespace std;
//        char findKthBit(int n, int k) {
//         string s="0";
//         string str1;
// for(int i=2;i<=n;i++){
//      str1 = s+"1";
// std::reverse(s.begin(), s.end());
//   for (char ch : s) {
//         str1 += (ch == '0') ? '1' : '0';
//     }
// s=str1;
// if(k<=s.length()) return s[k-1];
// }      
// return s[0];
// }


// The below code is a recursive solution to find the k-th bit in the string S_n
// from recursion to iteration

char findKthBit(int n, int k) {
    if (n == 1) return '0';
    int len = (1 << n) - 1; // Length of S_n
    int mid = len / 2 + 1;
    if (k == mid) return '1';
    if (k < mid) return findKthBit(n - 1, k);
    // Mirror position and invert
    char bit = findKthBit(n - 1, len - k + 1);
    return (bit == '0') ? '1' : '0';
}

int main() {
    int n, k;
    cout << "Enter n and k: ";
    cin >> n >> k;
    cout << "The " << k << "th bit in the string for n = " << n << " is: " << findKthBit(n, k) << endl;
    return 0;
}