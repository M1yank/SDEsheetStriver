//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
                /*
            1.    1                   - one times 1
            2.    1 1                 - two times 1 
            3.    2 1                 - one times 2, one times 1
            4.    1 2 1 1             - ....
            5.    1 1 1 2 2 1         - ....
            6.    3 1 2 2 1 1         -
            7.    1 3 1 1 2 2 2 1     -
        */
        if(n==1) return "1";
        
        string say = lookandsay(n-1);
        string result = "";
        for(int i=0; i<say.length(); i++){
            char ch = say[i];
            int count =1;
            while( i < say.length()-1 && say[i] == say[i+1]){
                count++;
                i++;
            }
            result += to_string(count) + string(1,ch);
        }
        return result;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends