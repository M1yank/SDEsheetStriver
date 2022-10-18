class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Brute: TC: O(N^2), SC: O(N) (set/map)
        //Better: start 2 pointers at 0, and put 
        //         char in a set while incrementing r
        //         if found char in set, remove the l char from set and l++
        //O(2N) as l, r
        
        //Best: use a map and decrease l++ moves
        //  
        
        int res = 0;
        vector<int> mp(256, -1);
        int left = 0, right = 0;
        while(right < s.size()){
            if(mp[s[right]] != -1) { 
                left = max(mp[s[right]] +1 , left);
            }
            mp[s[right]] = right;
            res = max(res, right - left + 1);
            right++;
            
        }
        return res;
    }
};