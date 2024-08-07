class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL) return false;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
            }
            if(slow==fast) return true;
        }
        return false;
    }
};

