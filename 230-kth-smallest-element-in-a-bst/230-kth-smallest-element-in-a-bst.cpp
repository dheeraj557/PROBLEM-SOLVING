class Solution {
public:
    int cnt=0;
    int res;
    void inOrder(TreeNode* root,int k)
    {
        if(root==NULL) 
            return;
        inOrder(root->left,k);
        cnt++;
        if(k==cnt)
        {
            res=root->val;
            return;
        } 
        inOrder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inOrder(root,k);
        return res;
    }
};