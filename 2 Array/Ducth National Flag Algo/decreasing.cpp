// Practice Question
// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/
// https://leetcode.com/problems/sort-colors 



#include <bits/stdc++.h>
using namespace std;

void sortDescending(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
      if(nums[mid]==0){
        swap(nums[mid],nums[high]);
        high--;
      }
      else if(nums[mid]== 1){
        mid++;
      }
      else{
         swap(nums[mid],nums[low]);
        low++;
        mid++;
      }
    }
}

int main() {
    vector<int> nums = {0, 1, 2, 0, 1, 2, 1, 0, 2, 1, 0, 2};
    
    sortDescending(nums);
    
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
