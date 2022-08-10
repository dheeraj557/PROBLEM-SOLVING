class Solution {
public:
    TreeNode* helper(vector<int>arr,int start,int end)
    {
        if(start>end)
            return NULL;
        int mid=(start+end)/2;
        TreeNode* root=new TreeNode(arr[mid]);
        root->left=helper(arr,start,mid-1);
        root->right=helper(arr,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode*result=helper(nums,0,nums.size()-1);
        return result;
    }
};