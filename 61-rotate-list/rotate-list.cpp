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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Find length & tail
        ListNode* temp = head;
        int len = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }

        // Step 2: Connect tail to head (make loop)
        temp->next = head;

        // Step 3: Find new tail position
        k = k % len;
        int steps = len - k;  // number of steps from old head to new head

        ListNode* tail = temp;
        while (steps--) {
            tail = tail->next;
        }

        // Step 4: new head is next of tail
        ListNode* newHead = tail->next;

        // Step 5: Break the circle
        tail->next = NULL;

        return newHead;
    }
};
