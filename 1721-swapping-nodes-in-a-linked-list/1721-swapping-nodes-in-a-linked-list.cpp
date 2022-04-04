class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(k == 0 || !head) {
            return head;
        }
        
        ListNode *ptr1, *ptr2;
        ptr1 = ptr2 = head;
        int len = 1;
        
        while(ptr2->next) {
            ptr2 = ptr2->next;
            len++;
        }
        
        int right = len - k + 1;
        
        // moving to Kth element from left
        while(--k) {
            ptr1 = ptr1->next;
        }

        // moving to right element from left
        ptr2 = head;
        while(--right) {
            ptr2 = ptr2->next;
        }

        // swapping
        int temp = ptr1->val;
        ptr1->val = ptr2->val;
        ptr2->val = temp;
 
        return head;
    }
};