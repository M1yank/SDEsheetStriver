//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    
    pair<int,int> solve(int *arr, int n){
        int repeating = 0, missing = 0;
        for(int i=0; i<n; i++){
            int index = abs(arr[i])-1;
            if(arr[index]>0) arr[index] = -1*arr[index];
            else repeating = abs(arr[i]);
        }
        for(int i=0; i<n; i++){
            if(arr[i]>0) missing=i+1;
        }
        return {repeating, missing};
    }



    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int[2];
        pair<int, int> ans = solve(arr, n);
        res[0] = ans.first;
        res[1] = ans.second;
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
