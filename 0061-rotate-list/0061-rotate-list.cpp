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
        ListNode* p=head;
        if(p==NULL) return p;
        ListNode* f,*t,*last;
        f=new ListNode;
        vector<int> v;
        while(p!=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        int n=size(v);
        k=k%n;
        for(int i=0;i<k;i++){
            int a=v[n-1];
            for(int i=n-1;i>0;i--){
                v[i]=v[i-1];
            }
            v[0]=a;
        }

        f->val=v[0];
        last=f;
        for(int i=1;i<n;i++){
            t=new ListNode;
            t->val=v[i];
            last->next=t;
            last=t;
        }
        return f;
    }
};
