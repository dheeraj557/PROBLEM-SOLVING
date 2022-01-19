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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>m;
        ListNode*i=head;
        while(i!=NULL)
        {
            if(m.find(i)==m.end())
                m.insert(i);
            else
                return i;
            i=i->next;
        }
        return NULL;
    }
};