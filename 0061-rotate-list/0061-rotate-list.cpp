class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;      
        ListNode* temp=head;
        int len=1;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        temp->next=head;                           
        k=k%len;                                  
        if(k==0){ temp->next=NULL; return head; }   
        for(int i=0;i<len-k;i++)temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;                               
    }
};