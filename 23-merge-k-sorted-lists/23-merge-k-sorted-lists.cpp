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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int> v;
        for(auto ll : lists){
            while(ll != NULL) v.push_back(ll->val), ll = ll->next;
        }
        sort(v.begin(), v.end());
        ListNode* h = new ListNode(0);
        ListNode* head = h;
        for(auto k : v){
            h -> next = new ListNode(k);
            h = h->next;
        }
        return head->next;
    }
};