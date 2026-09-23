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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessd= new ListNode();
       ListNode* gred= new ListNode();

       ListNode* less= lessd;
       ListNode* gret = gred;
       ListNode* temp = head;
       while(temp!= NULL)
       {
        if(temp->val>=x)
        {
             gret->next= temp;
             gret=gret->next;
        }
        else{
          less->next=temp;
          less=less->next;
        }
        temp=temp->next;
       }
       less->next=gred->next;
       gret->next= NULL;
       return lessd->next;
    }
};