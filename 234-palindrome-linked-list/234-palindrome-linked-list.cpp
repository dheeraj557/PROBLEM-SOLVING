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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        }
        if(v.size()==1)
        {
            return true;
        }
        int i=0;
        int j=v.size()-1;
        while(j>i)
        {
            if(v[j]==v[i])
            {
                j--;
                i++;
            }
            else return false;
        }
        return true;
    }
};