// https://leetcode.com/problems/custom-sort-string/

class Solution {
public:
    string customSortString(string order, string str) {
        map<char, int>mp;
        string ans = "";
        
        for(auto x: str)
            mp[x]++;
        for(auto x: order){
            if(mp.find(x)!=mp.end()){
                auto temp = mp.find(x);
                int count = temp->second;
                // c-> 5  || ccccc
                string s(count, x);
                ans+=s;
                mp.erase(x);
            }
        }
        
        for(auto x: mp){
            string s(x.second, x.first);
            ans+=s;
        }
        return ans;
    }
};
