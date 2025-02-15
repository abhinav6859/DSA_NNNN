// Moore's Voting Algorithm is an efficient algorithm used to find the majority element in a sequence of elements. The majority element is defined as an element that appears more than n/2 times in a sequence of length n. If no such element exists, the algorithm can be modified to handle that case.

// practice question 
// https://leetcode.com/problems/majority-element
// https://leetcode.com/problems/majority-element-ii 




#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element
int findMajorityElement(vector<int>& nums) {
    int candidate = -1;
    int count = 0;

    // First pass: Find the candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Second pass: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) {
            count++;
        }
    }

    // Check if the candidate is the majority element
    if (count > nums.size() / 2) {
        return candidate;
    } else {
        return -1; // No majority element
    }
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    int majorityElement = findMajorityElement(arr);

    if (majorityElement != -1) {
        cout << "Majority element is: " << majorityElement << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}