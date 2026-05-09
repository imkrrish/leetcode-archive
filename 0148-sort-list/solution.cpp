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
    ListNode* Mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* mergeSortedList(ListNode* p1, ListNode* p2) {
        if (!p1 || !p2) {
            return !p1 ? p2 : p1;
        }

        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;

        while (p2 && p1) {
            if (p1->val < p2->val) {
                curr->next = p1;
                p1 = p1->next;
            } else {
                curr->next = p2;
                p2 = p2->next;
            }
            curr = curr->next;
        }

        if (p1 || p2) {
            curr->next = p1 ? p1 : p2;
        }

        return ans->next;
    }

    ListNode* sortList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* mid = Mid(head);
        ListNode* new_head = mid->next;
        mid->next = nullptr;

        ListNode* left_part = sortList(head);
        ListNode* right_part = sortList(new_head);

        return mergeSortedList(left_part, right_part);
    }
};