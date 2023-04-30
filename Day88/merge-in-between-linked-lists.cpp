class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int c = 0;
        ListNode* temp = list1;
        ListNode* prev = NULL;
        while(temp!=NULL){
            if(c>=a && c<=b){
                if(temp==list1){
                    list1 = list1->next;
                    temp = list1;
                }
                else{
                    prev->next = temp->next; 
                    temp = temp->next;
                }
            }
            else if(b+1==c){
                break;
            }
            else{
                prev = temp; 
                temp = temp->next;
            }
            c++;
        }
        ListNode* temp1 = temp;
        if(prev == NULL){
            temp1->next=list2;
        }
        else{
            prev->next = list2;
            temp1 = prev;
        }
        while(temp1->next!=NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        return list1;
    }
};