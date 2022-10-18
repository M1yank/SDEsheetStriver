class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // if(k==0) return 0;
        unordered_map<int, int> mp;
        int presum = 0, count = 0;
        mp[presum] = 1;
        
        for(int i=0; i<nums.size(); i++){
            
            presum += nums[i];
            if(mp.find(presum - k) != mp.end()) count += mp[presum-k];
            mp[presum]++;
        }
        
        return count;
    }
};