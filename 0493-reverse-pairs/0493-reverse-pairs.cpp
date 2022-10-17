
class Solution {
public:
    int res = 0;
    void merge(vector<int>& arr, int low, int mid, int high){
        int j = mid+1;
        for(int i = low; i<=mid; i++){
            while(j<=high && (long)arr[i] > (long)2 * arr[j]) j++;
            res += (j- (mid+1));
        }
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]) temp.push_back(arr[left++]);
            else temp.push_back(arr[right++]);
        }
        
        while(left<=mid) temp.push_back(arr[left++]);
        while(right<=high) temp.push_back(arr[right++]);
        
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }
    }
    
    // void merge(vector<int>& arr, int low, int mid, int high){
    //     int i = low, j=mid+1;
    //     while(i<=mid && j<=high){
    //         if((long)arr[i]>(long)2 * arr[j]){
    //             j++;
    //             res+=(mid-i+1);
    //         }
    //         else i++;
    //     }
    //     sort(arr.begin()+low, arr.begin()+high+1);
    //     return;
    // }
    
    void mergesort(vector<int>& arr, int low, int high){
        if(low<high){
            int mid = low + (high - low)/2;
            mergesort(arr, low, mid);
            mergesort(arr, mid+1, high);
            merge(arr, low, mid, high);
        }
    }
    
    int reversePairs(vector<int>& nums) {
        res = 0;
        mergesort(nums, 0, nums.size()-1);
        return res;
    }
};
