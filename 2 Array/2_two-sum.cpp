

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // optimal solution
//     int start, end,total;
//     start=0;

//     end=nums.size()-1;
//     vector<pair<int , int >> ans;
//    for(int i=0;i<=end ;i++){
// ans.push_back({nums[i], i });
//    }
//      sort(ans.begin(),ans.end());
//      while(start < end){
//         if(ans[start].first + ans[end].first < target) start++;
//         else if (ans[start].first + ans[end].first >target ) end--;
//         else return{ans[start].second, ans[end].second};
//      }
//      return{};



// brute force
    //   for (int i=0;i<nums.size();i++ ){
    //      for (int j=i+1;j<nums.size();j++ ){
    //         if(nums[i]+nums[j]==target){
    //             return{ i,j};
    //         }
    //      }
    //    }
    //    return {};
//     }
// };