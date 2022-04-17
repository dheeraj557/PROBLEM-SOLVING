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
    vector<int>s;
    void dfs(TreeNode* root)
    {
        if(root==NULL)
            return;
        s.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        dfs(root);
        sort(s.begin(),s.end());
        TreeNode* result=new TreeNode(s[0]);
        TreeNode *r=result;
        for(int i=1;i<s.size();i++)
        {
            TreeNode* temp=new TreeNode(s[i]);
            result->right=temp;
            result=result->right;
        }
        return r;
    }
};