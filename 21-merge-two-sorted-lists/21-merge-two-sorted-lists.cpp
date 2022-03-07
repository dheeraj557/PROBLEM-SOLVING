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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1&&!list2)
            return NULL;
        if(!list1&&list2)
            return list2;
        if(list1&&!list2)
            return list1;
        ListNode* ans=new ListNode(-1);
        ListNode* g=ans;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        while(list1&&list2)
        {
            if(list1->val<=list2->val)
            {
                ans->next=new ListNode(list1->val);
                list1=list1->next;
            }
            else
            {   
                ans->next=new ListNode(list2->val);
                list2=list2->next;                
            }
            ans=ans->next;
        }
        if(list1)
            ans->next=list1;
        if(list2)
            ans->next=list2;
        return g->next;
    }
};