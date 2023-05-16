class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
if(head==NULL)
return head;
if(head->next==NULL)
return head;
ListNode *i=head;
while(i!=NULL)
{
if(i->next==NULL)
break;
swap(i->val,i->next->val);
i=i->next->next;
}
return head;
}
};