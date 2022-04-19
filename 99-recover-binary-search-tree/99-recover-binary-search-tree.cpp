class Solution {
    TreeNode *first=NULL,*second=NULL,*prev=NULL;   
public:
    void fix(TreeNode *root)
    {
        if(!root) return;
        fix(root->left);
    
        if(prev && root->val<prev->val)
        {
            if(first == NULL) 
                first = prev;
            
            second = root;
        }
    
        prev = root;
        fix(root->right);
    }

    void recoverTree(TreeNode *root) 
    {
        fix(root);
        swap(first->val,second->val);
    }
};