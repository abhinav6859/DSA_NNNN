// Remove duplicate characters from a string
#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

string removeDuplicates(string str)
{
    // unordered_set<char> seen;
    // string result = "";
    // for (char c : str)
    // {
    //     if (seen.find(c) == seen.end())
    //     {
    //         seen.insert(c);
    //         result += c;
    //     }
    // }
    // return result;


vector<int>v(26,0);
string result = "";
for(char c : str){
   if( v[c-'a'] ==0){
    v[c-'a']++;
    result +=c;

   }
   

}
return result;

}

int main()
{
    string str = "programming";
    cout << "Original string: " << str << endl;
    cout << "String after removing duplicates: " << removeDuplicates(str) << endl;
    return 0;
}
