// https://practice.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1



/*Structure of node of binary tree is as follows
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

unordered_set<int>st;

void inorderUtil(Node* root, int hd){
    if(root != NULL){
        inorderUtil(root->left, hd-1);
        st.insert(hd);
        inorderUtil(root->right, hd+1);
    }
}

//Function to find the vertical width of a Binary Tree.
int verticalWidth(Node* root)
{
    // Code here
    st.clear();
    inorderUtil(root, 0);
    return st.size();
    
}
