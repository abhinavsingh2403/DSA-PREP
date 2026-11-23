class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode *prev = NULL;
        while (head != NULL) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;

        ListNode *fast = head, *slow = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondhead = reverse(slow->next);
        ListNode* first = head;
        ListNode* second = secondhead;
        bool ok = true;
        while (second != NULL) {
            if (second->val != first->val) { ok = false; break; }
            first = first->next;
            second = second->next;
        }

        slow->next = reverse(secondhead);  
        return ok;
    }
};