//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
#define ll long long int
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    ll res = 0;
    
    void merge(ll arr[], ll low, ll mid, ll high){
        ll n1 = mid - low + 1;
        ll n2 = high - mid;
        ll temp1[n1], temp2[n2];
        for(ll i=0; i<n1; i++) temp1[i] = arr[low+i];
        for(ll i=0; i<n2; i++) temp2[i] = arr[mid+1+i];
        
        ll i=0, j=0, k=low;
        while(i<n1 && j<n2){
            if(temp1[i]<=temp2[j]) {
                arr[k++] = temp1[i++];
            }
            else{
                res += n1-i;
                arr[k++] = temp2[j++];
            }
        }
        while(i<n1) arr[k++] = temp1[i++];
        while(i<n2) arr[k++] = temp2[j++];
        
    }
    
    void mergesort(ll arr[], ll low, ll high){
        if(low<high){
            ll mid = low + (high -low)/2;
            mergesort(arr, low, mid);
            mergesort(arr, mid+1, high);
            merge(arr, low, mid, high);
        }
    }
    
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        res = 0;
        mergesort(arr, 0, n-1);
        return res;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends
