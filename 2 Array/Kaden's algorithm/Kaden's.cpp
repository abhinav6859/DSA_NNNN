//  Step-by-Step Algorithm
//1. Initialize two variables:

//      * maxSum = INT_MIN — stores the overall maximum subarray sum.
//      * currSum = 0 — stores the current subarray sum as we iterate.

// 2. Loop through each element of the array:

//     * Add the current element to currSum.
//     * If currSum becomes less than the current element, start a new subarray from the current element.
//     * In code: currSum = max(num, currSum + num)
//     * Update maxSum if currSum is greater than maxSum.

// 3. After the loop, maxSum holds the result.


#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

int kadane(const vector<int>& arr) {
    int maxSum = INT_MIN;  // Step 1: Initialize max sum to smallest possible integer
    int currSum = 0;       // Step 1: Initialize current sum to 0

    for (int num : arr) {
        // Step 2a: Add current element to current sum
        currSum = max(num, currSum + num); // Step 2b: Start new subarray if needed

        // Step 2c: Update maxSum if current sum is greater
        maxSum = max(maxSum, currSum);
    }

    // Step 3: Return the maximum found subarray sum
    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = kadane(arr);

    cout << "Maximum subarray sum is: " << result << endl;

    return 0;
}
