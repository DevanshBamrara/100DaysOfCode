/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = temp;
        while(temp!=NULL){
            int c = 0;
            if(temp==head && temp->val==val){
                ListNode* t = head;
                head = head->next;
                //free(t);
            }
            else if(temp->val==val){
                ListNode* t = temp;
                prev->next = temp->next;
                //t->next=NULL;
                c = 1;
            }
            if(c==0)
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};