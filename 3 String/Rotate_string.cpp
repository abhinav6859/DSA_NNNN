 
 #include <iostream>
#include <string>
using namespace std;


 bool rotateString(string s, string goal) {
 
 int a=s.length();
        int b = goal.length();
        if (a != b) return false;
        for(int i=0;i<=s.length();i++){
            if(s == goal) return true;
             
             s.push_back(s[0]);
             s.erase(0, 1);
        }
        return false;

  }
int main()
{
 string a="abcd";
  string b="cdab";
cout<< rotateString(a,b) <<endl;


}

//leetcode solution 796
        // optimal solution  
        //  return (s.length() == goal.length()) && 
        //    ((s + s).find(goal) != string::npos);

