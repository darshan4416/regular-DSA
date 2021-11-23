 ListNode* reverseList(ListNode* head) {
       
        ListNode *curr = head;
        ListNode *pre=NULL, *post=NULL;
        
        while(curr){
            
            post = curr->next;
            curr->next = pre;
            pre = curr;
            curr = post;
        }
        
        return pre;
        
 }
