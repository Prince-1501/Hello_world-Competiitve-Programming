// https://leetcode.com/problems/maximum-depth-of-binary-tree/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else
            return max( maxDepth(root->left), maxDepth(root->right) ) + 1;
    }
};
