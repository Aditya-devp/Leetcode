class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         ListNode* slow = head; 
        ListNode* fast = head;
		
        while(fast && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
        }
        return (slow);
    }
};
