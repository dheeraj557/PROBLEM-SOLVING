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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>v;
        ListNode*curr=head->next;
        int sum=0;
        while(curr->next!=NULL)
        {
            sum+=curr->val;
            if(curr->next->val==0)
            {
                v.push_back(sum);
                sum=0;
                curr=curr->next;
            }
            if(curr->next!=NULL) 
                curr=curr->next;
        }
        ListNode*result=new ListNode(v[0]);
        ListNode*res=result;
        for(int i=1;i<v.size();i++)
        {
            ListNode*temp=new ListNode(v[i]);
            result->next=temp;
            result=result->next;
        }
        return res;
    }
};