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
        ListNode *p, *t;
        if(head==NULL) return head;
        while(head && head->val==val){
            head=head->next;
        }
        if(head==NULL) return head;
        p=head;
        while(p){
            if(p->val==val){
                t->next=p->next;
                p->next=NULL;
                p=t->next;
            }
            else{
                t=p;
                p=p->next;
            }
        }
        ListNode *b=head;
        if(b->val==val){
            return head;
        }
        return head;
    }
};