// https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/

class Solution {
public:
    vector<bool>visited;
    int dfs(vector<vector<int>>&adj, int node, int mycost, vector<bool>& hasApple){
        if(visited[node]) return 0;
        visited[node]= true;

        int childCost = 0;
        for(auto x: adj[node]){
            childCost += dfs(adj, x, 2, hasApple);
        }
        if(childCost == 0 && !hasApple[node]) return 0;
        return childCost + mycost;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>>adj(n, vector<int>(0, -1));
        for(auto x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        for(int i=0; i<n; i++){visited.push_back(false);}
        int time = 0;
        time = dfs(adj, 0, 0, hasApple);
        return time;
    }
};
