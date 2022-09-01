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
    int count=0;
    void countNodes(TreeNode* root,int value)
    {
        if(root==NULL)
            return;
        if(root->val>=value)
        {
            count++;
        }
        value=max(value,root->val);
        countNodes(root->left,value);
        countNodes(root->right,value);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        countNodes(root,root->val);
        return count;
    }
};