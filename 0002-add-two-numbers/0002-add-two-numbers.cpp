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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p=l1,*q=l2;
        int c=0;
        vector<int> v;
        while(l1!=NULL || l2!=NULL){    // int digit2 = (l2 != NULL) ? l2->val : 0;
            int d1 = (l1 != NULL) ? l1->val : 0;
            int d2=(l2!= NULL) ? l2->val : 0;
            int result = d1 + d2 + c;
            c = result / 10;
            v.push_back(result % 10);
            l1 ? l1=l1->next : NULL;
            l2 ? l2=l2->next : NULL;
        }
        if(c!=0) v.push_back(c);

        ListNode *ans,*last;
        ans=new ListNode;
        ans->val=v[0];
        ans->next=NULL;
        last=ans;
        int i=1;
        while(i<v.size()){
            ListNode * temp;
            temp=new ListNode;
            temp->val=v[i];
            last->next=temp;
            last=temp;
            i++;
        }
        return ans;
    }
};