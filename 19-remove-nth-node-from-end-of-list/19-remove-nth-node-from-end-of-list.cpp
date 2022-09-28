class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int no=0;
        while(curr!=NULL)
{
curr=curr->next;
no++;
}
int m=no-n;
if(m==0)
{
return head->next;
}
curr=head;
for(int i=0;i<m-1;i++)
{
curr=curr->next;
}
curr->next=curr->next->next;
return head;
    }
};