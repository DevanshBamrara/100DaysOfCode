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
    ListNode* reverseList(ListNode* head) {
    ListNode *temp = head;
    ListNode *head2=NULL;
    while (temp != NULL)
    {
        ListNode *newNode = new ListNode();
        newNode->val = temp->val;
        newNode->next = head2;
        head2 = newNode;
        temp = temp->next;
    }
    return head2;
    }
};