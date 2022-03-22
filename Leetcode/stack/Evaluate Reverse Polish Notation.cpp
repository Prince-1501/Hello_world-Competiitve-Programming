// https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto x: tokens){
            if(x == "+" || x == "-" || x =="/" || x == "*"){
                int op2 = st.top(); st.pop();
                int op1 = st.top(); st.pop();
                
                if(x == "+"){
                    st.push(op1 + op2);
                }
                if(x == "-"){
                    st.push(op1 - op2);
                }
                if(x == "*"){
                    st.push(op1 * op2);
                }
                if(x == "/"){
                    st.push(op1 / op2);
                }
            }
            else{
                stringstream ss(x);
                int data;
                ss >> data;
                st.push(data);
            }
        }
        
        return st.top();
    }
};
