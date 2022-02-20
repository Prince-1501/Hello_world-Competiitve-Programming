// https://leetcode.com/problems/time-needed-to-inform-all-employees/


class Solution {
public:
    
    unordered_map<int, vector<int>>umap;
    int ans =0 , mx= 0;
    
    void dfs(int manager, vector<int>& informTime){
        mx = max(mx, ans);
        for(auto employee : umap[manager]){
            ans += informTime[manager];
            
            dfs(employee, informTime);
            
            ans -= informTime[manager];
        }
        
    }
    
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        // Fill umap
        for(int i=0; i<n; i++){
            int val = manager[i];
            if(val != -1){
                umap[val].push_back(i);
            }
        }
        
        dfs(headID, informTime);
        return mx;
        
    }
};
