// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c : s){
            if(st.empty()){
                st.push(c);
            }
            else if( (st.top() == '(' && c == ')') || 
                     (st.top() == '[' && c == ']') || 
                     (st.top() == '{' && c == '}') ){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        
        if(st.size() == 0)
            return true;
        
        return false;
    }
};
