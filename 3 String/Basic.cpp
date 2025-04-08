#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Take any string
    string s1 = "Abhinav Vats";

    // Copy two characters of s1 starting
    // from index 3)
    string r = s1.substr(3, 6);

    // prints the result
    cout << "String is: " << r;


     // Declaring string
    string str;

    // Taking string input using getline()
    getline(cin, str);

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    // Inserting a character
    str.push_back('s');

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

string str1 = "There are two needles in this haystack with needles.";
string str2 = "needle";

// Find first occurrence of "needle"
size_t found = str1.find(str2);
  if (found != string::npos)
cout << "First 'needle' found at: " << found << '\n';

// Find next occurrence of "needle"
found = str1.find("needles are small", found + 1, 6);
 if (found != string::npos)
cout << "Second 'needle' found at: " << found << '\n';

    return 0;
}

// leetcode question 28
// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//        size_t found =haystack.find(needle); 
//        return found;
//     }
// };