class Solution {
public:
    
    struct comp {
        bool operator()(pair<string, int> &a, pair<string, int> &b){
            return (a.second > b.second) || (a.second == b.second && a.first < b.first);
        }  
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> res(k);
        unordered_map<string, int> mp;
        for(auto &it: words){
            mp[it]++;
        }
        
        //minheap
        priority_queue<pair<string, int>, vector<pair<string, int>>, comp> pq;
        for(auto &it: mp){
            pq.push({it.first, it.second});
            if(pq.size() > k)
                pq.pop();
        }
        
        int i = k-1;
        while(!pq.empty()) {
            res[i] = pq.top().first;
            pq.pop();
            i--;
        }
        
        return res;
        
        
    }
};