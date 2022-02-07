// https://leetcode.com/problems/surrounded-regions/

class Solution {
public:
    
    void convert(vector<vector<char>>& board){
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(board[i][j] == 'B'){
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
    
    bool isValid(int i , int j, int n, int m, vector<vector<char>>& board){
        if(i>=0 && i<n && j>=0 && j<m && board[i][j] == 'O'){
            return true;
        }
        return false;
    }
    
    void dfs(vector<vector<char>>& board, int i , int j, int n, int m){
        board[i][j] = 'B';
        
        if(isValid(i+1, j, n, m, board)){
            dfs(board, i+1, j, n, m);
        }
        if(isValid(i-1, j, n, m, board)){
            dfs(board, i-1, j, n, m);
        }
        if(isValid(i, j+1, n, m, board)){
            dfs(board, i, j+1, n, m);
        }
        if(isValid(i, j-1, n, m, board)){
            dfs(board, i, j-1, n, m);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        
        for(int i=0; i<n; i++){
            
            // left -> top bottom
            int j =0;
            if(board[i][j] == 'O'){
                dfs(board, i, j, n, m);
            }
            
            j = m-1;
            // right -> top bootm 
            if(board[i][j] == 'O'){
                dfs(board, i, j, n, m);
            }
        }
        
        for(int j=0; j<m; j++){
            
            // top -> left right
            int i =0;
            if(board[i][j] == 'O'){
                dfs(board, i, j, n, m);
            }
            
            i = n-1;
            // bottom -> left right
            if(board[i][j] == 'O'){
                dfs(board, i, j, n, m);
            }
        }
        
        convert(board);
    }
};
