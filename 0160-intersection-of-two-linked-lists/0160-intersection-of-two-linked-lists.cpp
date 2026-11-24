class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        int n1=0;
        int n2=0;
        while(t1!=NULL){
            n1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            n2++;
            t2=t2->next;
        }
        if(n1>n2){
            return reqnode(headA,headB,n1-n2);
        }
        else{
            return reqnode(headB,headA,n2-n1);
        }
    }
    ListNode* reqnode(ListNode* t1,ListNode* t2,int d){
        while(d){
            d--;
            t1=t1->next;
        }
        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
        }
        return t1;
    }
};