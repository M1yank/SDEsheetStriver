//https://leetcode.com/problems/maximum-subarray/submissions/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0], currSum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            currSum += nums[i];
            if(currSum>maxSum) maxSum=currSum;
            if(currSum<0) currSum=0;
        }
        return maxSum;
    }
};
