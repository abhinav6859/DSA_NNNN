#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal)
{
  int a = s.length();
  int b = goal.length();
  if (a != b)  return false;
 string doubled =s+s;
    return doubled.find(goal) != string::npos;
    return false;   
}
int main()
{
  string a = "abcd";
  string b;
  cin>>b;
  cout << rotateString(a, b) << endl;
}

// leetcode solution 796
//  optimal solution
//   return (s.length() == goal.length()) &&
//     ((s + s).find(goal) != string::npos);
//   string::npos means "not found" or invalid position.
