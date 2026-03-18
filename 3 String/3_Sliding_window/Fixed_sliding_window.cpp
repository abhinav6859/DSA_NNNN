#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSum(vector<int> &arr, int k, int n)
{
    int windowsum = 0;

    for (int i = 0; i < k; i++)
    {
        windowsum += arr[i];
    }
    int currentsum = windowsum;
    for (int i = 1; i <= n - k; i++)
    {

        currentsum += arr[k + i - 1];
        currentsum -= arr[i - 1];

        windowsum = max(currentsum, windowsum);
    }

    return windowsum;
}

int main()
{
    vector<int> arr = {1, 2, 9, 3, 4, 5, 5, 5, 12, 6, 1, 1, 2};
    int k = 4;
    int n = arr.size();

    if (n < k)
    {
        printf("Invalid input: k is larger than the array size.\n");
    } // edge case
    else
    {
        cout << "Maximum sum of a subarray of size " << k << " is: " << maxSum(arr, k, n) << endl;
    }
    return 0;
}
