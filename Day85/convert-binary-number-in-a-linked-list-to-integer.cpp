class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* current = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next; 
        }
        head = prev;
        long long ans = 0, p = 0;
        while(head!=NULL){
            ans += head->val * pow(2,p++);
            head=head->next;
        }
        return ans;
    }
};