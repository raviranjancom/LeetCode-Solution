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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !(head->next) || !(head->next->next)) return head;
        ListNode *head1=new ListNode();
        ListNode *head2=new ListNode();
        ListNode *left=head1, *right=head2;
        ListNode* temp=head, *oddlast, *evenlast;
        left->val=temp->val;
        oddlast=left;
        temp=temp->next;
        right->val=temp->val;
        evenlast=right;
        temp=temp->next;
        int i=3;
        while(temp){
            if(i%2==1){
                ListNode *newNode=new ListNode(temp->val);
                oddlast->next=newNode;
                oddlast=newNode;
            }
            else{
                ListNode *newNode=new ListNode(temp->val);
                evenlast->next=newNode;
                evenlast=newNode;
            }
            i++;
            temp=temp->next;
        }
        oddlast->next=head2;
        return head1;
    }
};
