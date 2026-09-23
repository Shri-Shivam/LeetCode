class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        // Empty list or only one node
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        // Find length and last node
        int len = 1;
        ListNode* tail = head;

        while (tail->next != NULL) {
            tail = tail->next;
            len++;
        }

        // Remove unnecessary rotations
        k = k % len;

        if (k == 0) {
            return head;
        }

        // Make the list circular
        tail->next = head;

        // Find the new tail
        int steps = len - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        // Node after newTail becomes the new head
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = NULL;

        return newHead;
    }
};