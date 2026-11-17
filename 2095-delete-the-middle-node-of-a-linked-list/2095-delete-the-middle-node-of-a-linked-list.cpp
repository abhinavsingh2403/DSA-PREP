class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head->next == NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head->next->next;   
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* del = slow->next;          
        slow->next = del->next;
        delete del;
        return head;
    }
};