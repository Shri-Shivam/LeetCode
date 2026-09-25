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
    int pairSum(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head->val;
        }
        ListNode* fast=head;
        ListNode* slow= head;
        while(fast!=NULL&&fast->next!= NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* curr= slow;
        ListNode* prev= NULL;
        while(curr!= NULL)
        {
           ListNode* next = curr->next;
           curr->next= prev;
           prev= curr;
           curr=next;
        }
        ListNode* first= head;
        ListNode* second = prev;
        int ans = 0;
        while(second!= NULL)
        {
            ans = max(ans, first->val+second->val);
            first=first->next;
            second=second->next;
        }
        return ans;
    }
};