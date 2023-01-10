class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(q==nullptr&&p==nullptr){
            return 1;
        }
        if(q==nullptr||p==nullptr){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);  
    }
};