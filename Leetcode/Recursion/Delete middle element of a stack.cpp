// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1

class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void deleteMidHelper(stack<int>&st, int count, int &pos){
        if(st.empty()) return;
        if(count == pos) {st.pop(); return;}
        
        int top = st.top(); st.pop();
        deleteMidHelper(st, count+1, pos);
        
        st.push(top);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int pos = ceil((sizeOfStack+1)/2.0);
        deleteMidHelper(s, 1, pos);
        
    }
};
