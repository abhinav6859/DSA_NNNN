#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestSubstring(string s) {
    unordered_set<char> st;
    int left = 0, maxLen = 0;

    for(int right = 0; right < s.size(); right++) {

        while(st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " << longestSubstring(s) << endl;
    return 0;
}