// https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return root;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            if( size == 0)
                return root;
            
            while(size>0){
                Node* temp;
                
                if(size>1){
                    temp = q.front();
                    q.pop();
                    
                    Node* nextAdd = q.front();
                    temp->next = nextAdd;
                    
                }
                else{
                    temp = q.front();
                    q.pop();
                }
                
                if(temp->left != NULL)
                    q.push(temp->left);
                if(temp->right != NULL)
                    q.push(temp->right);
                
                size--;
                
            }
        }
        
        return root;
    }
};
