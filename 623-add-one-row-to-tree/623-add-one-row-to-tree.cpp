class Solution {
public:
    void solve(TreeNode* root, int val,int depth,int cur){
        if(!root)
        {
            return;
        }
        if(cur+1 == depth)
        {
            TreeNode* l=root->left;
            TreeNode* r=root->right;
            TreeNode* tl = new TreeNode(val);
            TreeNode* tr = new TreeNode(val);
            root->left = tl;
            tl->left = l;
            root->right = tr;
            tr->right = r;
            return;
        }
        solve(root->left,val,depth,cur+1);
        solve(root->right,val,depth,cur+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            TreeNode* dummy = new TreeNode();
            dummy->left = root;
            dummy->val = val;
            return dummy;
        }
        solve(root,val,depth,1);
        return root;
    }
};