class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(root == NULL)
            return false;
        targetSum = targetSum - root -> val;
        if(root -> left == NULL && root -> right == NULL)
        {
            if(targetSum == 0)
                return true;
            else
                return false;
        }
        bool x = hasPathSum(root->left,targetSum);
        if(x)
            return true;
        else
            return hasPathSum(root->right,targetSum);
    }
};