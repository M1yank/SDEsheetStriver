//https://www.codingninjas.com/codestudio/problems/1115652

#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int, int> freq;
    int res = 0;
    int pre_xor = 0;
    
    for(auto it:arr){
        pre_xor = pre_xor ^ it;
        if(pre_xor == x) res++;
        if(freq.find(pre_xor ^ x) != freq.end()){
            res += freq[pre_xor ^ x];
        }
        freq[pre_xor]++;
    }
    return res;
}
