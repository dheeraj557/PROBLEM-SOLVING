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
    int result=0;
    int digits[10]={0};
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return result;
    }
    void dfs(TreeNode * root)
    {
        if(root==NULL)
            return;
        digits[root->val]++;
        if(root->left==NULL and root->right==NULL)
        {
            if(isPalindrome())
                result++;
        }
        else
        {
            dfs(root->left);
            dfs(root->right);
        }
        digits[root->val]--;
    }
    bool isPalindrome()
    {
        int odd=0;
        for(int i=1;i<=9;i++)
        {
            if(digits[i]%2!=0)
                odd++;
        }
        if(odd>1)
            return false;
        return true;
    }
};