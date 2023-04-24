class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cr = 0;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while(l1!=NULL || l2!=NULL || cr){
            int sum = 0;
            if(l1!=NULL){
                sum += l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2=l2->next;
            }
            sum+=cr;
            cr=sum/10;
            ListNode* t = new ListNode(sum%10);
            temp->next=t;
            temp=temp->next;
        }
        return ans->next;
    }
};