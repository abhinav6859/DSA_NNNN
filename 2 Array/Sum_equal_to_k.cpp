//https://leetcode.com/problems/subarray-sum-equals-k

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int sum=0;
//         int count=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             sum=0;
//               for(int j=i;j<n;j++){
            
// sum += nums[j];
// if(sum == k)
// count++;
//         }

//         }
// return count;

// optimal solution
        int sum=0;
        int count=0;
       

     //   unordered_map<int,int>v;
      //  v[0]=1;
       //   for(int s: nums){
      //      sum += s;
//             count += v[sum-k];
//           v[sum]++;
//           }
        
// return count;

//     }
// };