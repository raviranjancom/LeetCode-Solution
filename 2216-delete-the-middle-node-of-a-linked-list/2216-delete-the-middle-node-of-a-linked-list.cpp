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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* t=slow;
        while(fast!=NULL && fast->next!=NULL){
            t=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        t->next=slow->next;
        slow->next=NULL;
        delete slow;
        return head;
    }
};
