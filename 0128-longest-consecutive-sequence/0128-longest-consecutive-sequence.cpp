class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Brute: sort, and loop O(N) + O(NlogN)
        //optimal: add elements in set
        //         iterate array to check if prev exists: if yes continue
        //                                                if no then store
        
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            if(s.find(nums[i]-1)==s.end()){
                int curr = nums[i];
                int streak = 1;
                
                while(s.find(curr+1)!=s.end()){
                    streak++;
                    curr++;
                }
                res = max(res, streak);
            }
        }
        return res;
    }
};