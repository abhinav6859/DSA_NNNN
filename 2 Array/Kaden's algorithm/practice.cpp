
//Practice Question
//https://leetcode.com/problems/maximum-product-subarray/ 

// solution

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         if (n==1) return nums[0];
// int maximum=1;
// int ans=INT_MIN;
// for(int i=0;i<n;i++){
//     maximum *=nums[i];
//     ans=max(ans , maximum);

//     if(nums[i]==0)
//         maximum=1;
//     }
// maximum=1;
//     for(int i=n-1;i>=0;i--){
//     maximum *=nums[i];
//     ans=max(ans , maximum);

//     if(nums[i]==0)
//         maximum=1;
//     }
//      return ans;   
//     }
// };

// auto init = []() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return 'c';
// }();