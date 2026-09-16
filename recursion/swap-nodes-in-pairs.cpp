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
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* curr=head;
        ListNode* prev=dummy;
        while(curr!=NULL&&curr->next!=NULL)
        {
            ListNode* next=curr->next->next;
            prev->next=curr->next;
            curr->next->next=curr;
            
            curr->next=next;
            prev=curr;
            curr=next;
        }
        return dummy->next;
    }
};