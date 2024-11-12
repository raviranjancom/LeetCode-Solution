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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p=head;
        int c=1;
        while(p){
            p=p->next;
            c++;
        }
        n=c-n-1;
        if(n==0){
            head=head->next;
            return head;
        }
        int k=1;
        p=head;
        while(p && k<n){
            p=p->next;
            k++;
        }
        ListNode *a=p;
        ListNode *b;
        p->next ? b=p->next : b=NULL;
        b ? p->next=b->next : p->next=NULL;
        
        return head;
    }
};