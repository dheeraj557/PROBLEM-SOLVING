/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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