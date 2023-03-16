class Solution {
public:
    TreeNode* getRoot(vector<int>&postorder, map<int, int>&mp, int& rootIdx, int low, int high)
    {
        if (low > high) 
            return NULL;
        int currRoot = postorder[rootIdx--];
        int inorderRootIdx = mp[currRoot];
        TreeNode* rootNode = new TreeNode(currRoot);
        rootNode->right = getRoot(postorder, mp, rootIdx, inorderRootIdx + 1, high);
        rootNode->left = getRoot(postorder, mp, rootIdx, low, inorderRootIdx - 1);
        return rootNode;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n = inorder.size();
        map<int, int>mp;
        for (int i = 0; i < n; i++) 
            mp[inorder[i]] = i;      
        int rootIdx = n - 1;
        TreeNode* root = getRoot(postorder, mp, rootIdx, 0, n - 1);
        return root;
    }
};