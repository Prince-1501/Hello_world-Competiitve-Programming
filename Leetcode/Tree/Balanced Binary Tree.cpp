// https://leetcode.com/problems/balanced-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int height(TreeNode* root){
        if(root == NULL)
            return 0;
        else 
            return max( height(root->left), height(root->right) ) +1;
    }
    
    void inorderUtil(TreeNode* root, bool & ans){
        if(root!=NULL){
            inorderUtil(root->left, ans);
            
            int lh = height(root->left);
            int rh = height(root->right);
            
            if(abs(lh-rh) >1)
                ans = ans && false;
            
            inorderUtil(root->right, ans);
        }
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = true;
        inorderUtil(root, ans);
        return ans;
    }
};
