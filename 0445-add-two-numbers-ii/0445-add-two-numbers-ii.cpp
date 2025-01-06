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
    ListNode* reverse_LL(ListNode* head){
        ListNode* last=NULL;
        while(head){
            ListNode* temp=head->next;
            head->next=last;
            last=head;
            head=temp;
        }
        return last;
    }
    ListNode* add(ListNode* l1, ListNode* l2) {
        ListNode *head=NULL,*last=head;
        int carry=0;
        ListNode *p=l1,*q=l2;
        while(p && q){
            int v=p->val + q->val;
            int x=(v+carry)%10;
            carry=(v+carry)/10;
            ListNode* temp=new ListNode;
            temp->val=x;
            temp->next=NULL;
            if(head==NULL){
                head=temp;
                last=head;
            }
            else{
                last->next=temp;
                last=temp;
            }
            p=p->next;
            q=q->next;
        }
        while(p){
            int v=p->val;
            int x=(v+carry)%10;
            carry=(v+carry)/10;
            ListNode * temp=new ListNode;
            temp->val=x;
            temp->next=NULL;
            last->next=temp;
            last=temp;
            p=p->next;
        }
        while(q){
            int v=q->val;
            int x=(v+carry)%10;
            carry=(v+carry)/10;
            ListNode * temp=new ListNode;
            temp->val=x;
            temp->next=NULL;
            last->next=temp;
            last=temp;
            q=q->next;
        }
        if(carry>0){
            ListNode * temp=new ListNode;
            temp->val=carry;
            temp->next=NULL;
            last->next=temp;
            last=temp;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1=l1,*head2=l2;
        head1=reverse_LL(head1);
        head2=reverse_LL(head2);
        ListNode* head=add(head1, head2);
        head=reverse_LL(head);
        return head;
    }
};
