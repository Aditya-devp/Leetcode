class Solution {
public:
    bool isPalindrome(ListNode* head) {
           stack<int> s;
        if(head==NULL)
            return true;
        s.push(head->val);
        ListNode* t=head;
        while(t->next!=NULL){
            t=t->next;
            s.push(t->val);
        }
        t=head;
        while(t!=NULL)
        {
            if(t->val==s.top())
            {
                s.pop();
                t=t->next;
            }
            else
                return false;
        }
        return true;
    }
};
