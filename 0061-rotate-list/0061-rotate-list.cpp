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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        ListNode *temp=head;
        int n=1;
        while(temp->next){
            n++;
            temp=temp->next;
        }
        temp->next=head;
        k=k%n;
        int i=n-k;
        temp=head;
        while(i>1){
            temp=temp->next;
            i--;
        }
        ListNode * newhead=temp->next;
        temp->next=NULL;
        return newhead;
    }
};