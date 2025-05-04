#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "Hello world 123";
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}



//1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence

// class Solution {
// public:
//     int isPrefixOfWord(string sentence, string searchWord) {
//          vector<string> words;
//     string word;

    
//     stringstream ss(sentence); // Extract words one by one
//     while (ss >> word) {
//         words.push_back(word);
//     }
//     for(int i=0;i<words.size();i++){
//         if(searchWord == words[i].substr(0,searchWord.length()))
//         return i+1;
//     }
//     return -1;
//     }
// };