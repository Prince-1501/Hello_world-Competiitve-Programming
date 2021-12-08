// https://leetcode.com/problems/find-the-town-judge/

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>data(n+1, 0);
        for(auto x: trust)
        {
            data[x[0]]--;
            data[x[1]]++;
        }
        
        for(int i=1; i<=n; i++){
            int x = data[i];
            if(x == n-1)
                return i;
        }
        
        return -1;
    }
};
