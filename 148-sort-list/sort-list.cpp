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

    // Function to merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        if (l1) temp->next = l1;
        else temp->next = l2;

        return dummy->next;
    }

    // Function to get the middle of list
    ListNode* getMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;   // Important: fast starts at next

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        // 1. Split list into two halves
        ListNode* mid = getMiddle(head);
        ListNode* right = mid->next;
        mid->next = nullptr;

        // 2. Recursively sort both halves
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);

        // 3. Merge sorted halves
        return merge(leftSorted, rightSorted);
    }
};

