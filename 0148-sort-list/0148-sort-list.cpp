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
    ListNode* sortList(ListNode* head) {
        vector<int> v;
        ListNode *h=head;
        if (h==NULL || h->next==NULL){
            return h;
        }
        while(h){
            v.push_back(h->val);
            h=h->next;
        }
        sort(v.begin(),v.end());
        ListNode *ans,*last;
        ans=new ListNode;
        last=ans;
        ans->val=v[0];
        int i=1;
        while(i<v.size()){
            ListNode *temp;
            temp=new ListNode;
            temp->val=v[i];
            last->next=temp;
            last=temp;
            i++;
        }
        return ans;
    }
};
