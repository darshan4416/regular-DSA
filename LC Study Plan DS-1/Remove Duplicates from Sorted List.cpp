ListNode* deleteDuplicates(ListNode* head) {
        /*
            1->1->1->2->3->3
            1->2->3
            1->1->1
        */
        if(head==NULL){
            return head;
        }
        
        ListNode *prev=head;
        ListNode *curr=head;
        
        while(curr){
            
            
            if(curr->val!=prev->val){
                prev->next = curr;
                prev=curr;
                curr=curr->next;
            }
            else{
                curr=curr->next;  
            }
            
        }
        
        prev->next = NULL;
        
        return head;
           
        
    }
