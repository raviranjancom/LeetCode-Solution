/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA, *b=headB;
        int n=0,m=0;
        while(a){
            n++;
            a=a->next;
        }
        while(b){
            m++;
            b=b->next;
        }
        a=headA,b=headB;
        if(n>m){
            int x=n-m;
            while(x>0){
                a=a->next;
                x--;
            }
        }
        else if(m>n){
            int x=m-n;
            while(x>0){
                b=b->next;
                x--;
            }
        }
        else{
            a=a;
            b=b;
        }
        while(a && b){
            if(a==b) return a;
            if(a==b->next) return a;
            if(a->next==b) return b;
            if(a->next==b->next){
                return a->next;
            }
            a=a->next;
            b=b->next;
        }
        return NULL;
    }
};
