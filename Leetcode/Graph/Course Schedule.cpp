// https://leetcode.com/problems/course-schedule/

class Solution {
public:
    
    bool DFSRec(int s, vector<bool>&visited, vector<bool>&currVisited, vector<int>adj[]){
        visited[s] = true;
        currVisited[s] = true;
        
        vector<int>data = adj[s];
        for(auto x: data){
            if(!visited[x]){
                if(DFSRec(x, visited, currVisited, adj)){
                    return true;
                }
            }
            else if(visited[x] && currVisited[x]){
                return true;
            }
        }
        
        currVisited[s] = false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n = numCourses;
        vector<bool>visited(n, false), currVisited(n, false);
        
        vector<int>adj[n];
        for(auto x: prerequisites){
            vector<int>data = x;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                if(DFSRec(i, visited, currVisited, adj)){
                    return false;
                }
            }
        }
        
        return true;
    }
};
