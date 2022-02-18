// https://leetcode.com/problems/keys-and-rooms/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<bool>visited(n, false);
        
        queue<int>q;
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int room = q.front();
            q.pop();
            
            for(auto key : rooms[room]){
                if(!visited[key]){
                    visited[key] = true;
                    q.push(key);
                }
            }
        }
        
        
        for(auto x: visited){
            if(!x)
                return x;
        }
        
        return true;
    }
};
