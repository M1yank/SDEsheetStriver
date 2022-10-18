//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> m;
        int pre_sum=0, res =0;
        int SUM=0;                  //longest subarray with given SUM variation
        for(int i=0; i<n; i++){
            pre_sum+=A[i];
            if(pre_sum==SUM) res= i+1;
            if(m.find(pre_sum)==m.end()) m.insert({pre_sum, i});            //if prefix sum already exist, than dont insert
            if(m.find(pre_sum-SUM)!=m.end()) res=max( res, i-m[pre_sum-SUM]);
            
        }
        return res;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends