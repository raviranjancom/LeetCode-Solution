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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *front=head->next, *back=NULL;
        if(!head->next->next){
            ListNode* a=head;
            ListNode* b=head->next;
            b->next=a;
            a->next=NULL;
            head=b;
            return head;
        }
        while(front!=NULL && front->next){
            if(back==NULL){
                back=head;
                ListNode* temp=front->next;
                front->next=back;
                back->next=temp;
                head=front;
                front=temp;
            }
            else{
                ListNode* a=back;
                back=front;
                front=front->next;
                ListNode* temp=front->next;
                front->next=back;
                back->next=temp;
                a->next=front;
                front=temp;
            }
        }
        return head;
    }
};
