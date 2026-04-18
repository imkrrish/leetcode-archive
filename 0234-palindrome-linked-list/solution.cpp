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
        if (!head || !head->next)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* reversed_half = NULL;

        while (slow) {
            ListNode* nextNode = slow->next;
            slow->next = reversed_half;
            reversed_half = slow;
            slow = nextNode;
        }

        ListNode* left = head;
        ListNode* right = reversed_half;

        while (reversed_half != NULL) {
            if (left->val != reversed_half->val)
                return false;
            left = left->next;
            reversed_half = reversed_half->next;
        }

        return true;
    }
};