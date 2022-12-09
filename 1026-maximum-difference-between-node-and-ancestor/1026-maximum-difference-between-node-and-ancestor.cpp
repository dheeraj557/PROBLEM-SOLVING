class Solution {
    void dfs(TreeNode* root, int mn, int mx, int &ans) {
        if(!root) 
            return;
        mn = min(mn, root -> val);
        mx = max(mx, root -> val);
        dfs(root -> left, mn, mx, ans);
        dfs(root -> right, mn, mx, ans);
        ans = max(ans, max(abs(root -> val - mn), abs(root -> val - mx)));
    }
public:
    int maxAncestorDiff(TreeNode* root) 
    {
        int ans = 0;
        dfs(root, INT_MAX, INT_MIN, ans);
        return ans;
    }
};