class Solution 
{
public:
    TreeNode* func(ListNode*head,int n)
    {
        if(n<=0)
        {
            return nullptr;
        }
        if(n==1)
        {
            return new TreeNode(head->val);
        }
        int mid=n/2;
        ListNode*temp=head;
        while(mid--)
        {
            temp=temp->next;
        }
        TreeNode*ans=new TreeNode(temp->val,func(head,n/2),func(temp->next,n-n/2-1));
        return ans;
    }
    TreeNode* sortedListToBST(ListNode* head)
    {
        if(!head)
        {
            return nullptr;
        }
        int n=0;
        ListNode*temp=head;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        return func(head,n);
    }
};