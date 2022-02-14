// https://leetcode.com/problems/number-of-enclaves/

class Solution {
public:
    
    int count(vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1)
                    ans++;
            }
        }
        
        return ans;
    }
    
    bool isValid(int i, int j, int n, int m, vector<vector<int>>& grid){
        if(i>=0 && i<n && j>=0 && j<m && grid[i][j] == 1 ){
            return true;
        }
        return false;
    }
    
    void dfs(int i, int j, int n, int m, vector<vector<int>>& grid){
        grid[i][j] = 0;
        
        int ax[4] = {1, -1, 0, 0};
        int ay[4] = {0, 0, 1, -1};
        
        for(int k=0; k<4; k++){
            int nx = i + ax[k];
            int ny = j + ay[k];
            
            if(isValid(nx,ny, n, m, grid)){
                dfs(nx, ny, n, m, grid);
            }
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        
        // boundary travers
        for(int i=0; i<n; i++){
            
            int j = 0;
            if(grid[i][j] == 1){
                dfs(i, j, n, m, grid);
            }
            
            j = m-1;
            if(grid[i][j] == 1){
                dfs(i, j, n, m, grid);
            }
            
        }
        
        
        for(int j=0; j<m; j++){
            
            int i = 0;
            if(grid[i][j] == 1){
                dfs(i, j, n, m, grid);
            }
            
            i = n-1;
            if(grid[i][j] == 1){
                dfs(i, j, n, m, grid);
            }
            
        }
        
        return count(grid);
        
    }
};
