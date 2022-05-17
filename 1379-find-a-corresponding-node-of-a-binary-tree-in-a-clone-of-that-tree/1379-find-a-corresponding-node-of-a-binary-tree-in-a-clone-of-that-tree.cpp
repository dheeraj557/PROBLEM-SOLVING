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
    TreeNode* dfs(TreeNode*root,TreeNode*target)
    {
        if(root==NULL)
            return NULL;
        else if(root->val==target->val)
            return root;
        TreeNode*r1=dfs(root->left,target);
        TreeNode*r2=dfs(root->right,target);
        return r1==NULL?r2:r1;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*result=dfs(cloned,target);
        return result;
    }
};