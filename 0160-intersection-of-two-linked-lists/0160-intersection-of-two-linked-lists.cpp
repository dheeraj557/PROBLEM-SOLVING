/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode *head)
    {
        int l=0;
        while(head)
        {
            l++;
            head=head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=length(headA);
        int lenB=length(headB);
        if(lenA>lenB)
        {
            while(lenA>lenB)
            {
                lenA--;
                headA=headA->next;
            }
        }
        if(lenA<lenB)
        {
            while(lenA<lenB)
            {
                lenB--;
                headB=headB->next;
            }
        }
        while(headA!=NULL and headB!=NULL)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};