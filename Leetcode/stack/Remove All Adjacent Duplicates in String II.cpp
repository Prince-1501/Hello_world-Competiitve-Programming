// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<pair<char, int>>st;
        for(auto c : s){
            if(st.size() == 0 || st.back().first != c ){
                st.push_back({c, 1});
            }
            else{
                st.back().second++;
            }
            
            if(st.back().second == k){
                st.pop_back();
            }
        }
        
        string res ;
        for(auto x: st){
            res.append(x.second, x.first);
        }
            
        return res;
    }
};
