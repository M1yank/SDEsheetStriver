class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        /* 
        -------------BRUTE--------------
        sort
        1 1 1 2 2 2 2 3 3 3 4 4 4  --->9
        i j k l                 r
              <--binary search-->
        O(N^3 * log n) + O(nlogn) + O(N)
        O(1) + O(n) 
        */
        
        /*
        -------------OPTIMAL-------------
        sort
        1 1 1 2 2 2 2 3 3 3 4 4 4  --->9
        i j l                   r
        i j   l                 r
        i j           l         r     ##FOUND (1 1 3 4) (skip duplicates)
        i j               r l 
        */
        vector<vector<int>> res;
        int n = num.size();
        if(n<4) return res;
        
        sort(num.begin(), num.end());
        
        for(int i=0; i<n-3; i++){
            
            long long target_3 = target - num[i];
            
            for(int j=i+1; j<n-2; j++){
                
                long long target_2 = target_3 - num[j];
                
                int left = j+1;
                int right = n-1;
                
                while(left<right){
                    
                    long long two_sum = num[left] + num[right];
                    if (two_sum < target_2) left++;
                    else if (two_sum > target_2) right--;
                    else{
                        
                        //found a quadruplet
                        vector<int> temp(4, 0);
                        temp[0] = num[i];
                        temp[1] = num[j];
                        temp[2] = num[left];
                        temp[3] = num[right];
                        res.push_back(temp);
                        
                        //skip duplicates of number 3
                        while(left < right && num[left] == temp[2]) ++left;
                        //skip duplicates of number 3
                        while(left < right && num[right] == temp[3]) --right;

                    }  

                }
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;  
 
            }
            
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        }
    
        return res;
        
    }
};