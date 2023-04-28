class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* current = slow;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next; 
        }
        ListNode* head1 = prev;
        while(head!=NULL && head1!=NULL){
            if(head->val!=head1->val)
                return false;
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
};