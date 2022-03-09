class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) 
            return NULL;
        if(head->next == NULL) 
            return head;
        ListNode* temp = head;
        map<int,int> map;
        while(temp!= NULL)
        {
            map[temp->val]++;
            temp = temp->next;
        }
        ListNode* NewHead = new ListNode(0);
        temp = NewHead;
        for(auto x:map)
        {
            if(x.second == 1)
            {
                temp->next = new ListNode(x.first);
                temp = temp->next;
            }
        }
        return NewHead->next;
    }
};