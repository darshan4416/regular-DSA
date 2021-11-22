bool hasCycle(ListNode *head) {
        
    if (!head) 
            return false;
        
        ListNode *slow = head, *fast = head;
        
        while (fast->next && fast->next->next) {
            
            //cout<<slow->val<<" "<<fast->val<<endl;
            slow = slow->next;
            fast = fast->next->next;
          
            if (slow == fast) 
                return true;
        }
        
        return false;
        
    }
