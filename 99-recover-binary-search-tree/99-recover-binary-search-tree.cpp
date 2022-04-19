class Solution {
public:
    TreeNode* lft = nullptr, * rht = nullptr, * prev = nullptr;
    void inorder(TreeNode* r) {
        if (r && (!lft || !rht)) 
        {
            inorder(r->left);
            if (prev) 
            {
                if (!lft && r->val < prev->val) 
                    lft = prev;
                else if (lft && !rht && lft->val < r->val)  
                    rht = prev;
            }
            prev = r;
            inorder(r->right);
        }
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        if (!rht) 
            rht = prev;
        if (lft && rht) 
            swap(lft->val, rht->val);
    }
};