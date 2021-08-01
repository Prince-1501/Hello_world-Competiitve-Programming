// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/


//                  METHOD - 01


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool findPath(TreeNode* root,  vector<TreeNode*> &path, TreeNode* n){
        if(root == NULL)
            return false;
        path.push_back(root);
        if(root == n) return true;
        
        if( findPath(root->left, path, n) || findPath(root->right, path, n) )
            return true;
        
        path.pop_back();
        return false;
    }
    

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        vector<TreeNode*> path1, path2;
        if( !findPath(root, path1, p) || !findPath(root, path2, q)  )
            return NULL;
        TreeNode* ans = NULL;
        for(int i=0; i<path1.size() && i<path2.size(); i++){
            if(path1[i] == path2[i])
                ans = path2[i];
        }
        return ans;
        
    }

};






//                  METHOD - 02



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      
        if(root == NULL)
            return NULL;
        if(root == p || root == q)
            return root;
        
        TreeNode* lca1 = lowestCommonAncestor(root->left, p, q);
        TreeNode* lca2 = lowestCommonAncestor(root->right, p, q);
        
        if(lca1 != NULL && lca2 != NULL)
            return root;
        if(lca1 != NULL)
            return lca1;
        else
            return lca2;
        
    }

};



