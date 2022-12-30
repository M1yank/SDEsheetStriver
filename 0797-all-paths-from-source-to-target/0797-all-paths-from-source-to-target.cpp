class Solution {
public:

    void dfs(vector<vector<int>>& graph, int u, int target, vector<vector<int>> &res, vector<int> &temp){
        temp.push_back(u);
        if(u == target){
            res.push_back(temp);
        }
        else{
            for(auto &v:graph[u]){
                dfs(graph, v, target, res, temp);
            }
        }
        temp.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        int source = 0;
        int target = n-1;
        vector<vector<int>> res;
        vector<int> temp;
        dfs(graph, source, target, res, temp);
        return res;
    }
};