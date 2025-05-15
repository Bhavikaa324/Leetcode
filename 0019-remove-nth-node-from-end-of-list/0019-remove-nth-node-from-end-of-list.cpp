class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* forward = new ListNode(0, head);
        ListNode* prev = forward;
        ListNode* curr = forward;

        for (int i = 0; i <= n; ++i) {
            curr = curr->next;
        }

        while (curr != nullptr) {
            curr = curr->next;
            prev = prev->next;
        }

        ListNode* nodeToDelete = prev->next;
        prev->next = nodeToDelete->next;
        delete nodeToDelete;

        ListNode* newHead = forward->next;
        delete forward;
        return newHead;
    }
};
