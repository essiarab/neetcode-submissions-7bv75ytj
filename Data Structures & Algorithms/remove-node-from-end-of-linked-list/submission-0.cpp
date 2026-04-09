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
        ListNode* p=head;
        int l=0;
        while(p){
            p=p->next;
            l++;
        }
        if(l==1) { 
            delete head;
            return nullptr;
        }
        if(l==n){
            ListNode* new_head = head->next;
            delete head;
            return new_head;
        }
        p=head;
        int i=0;
        while(i<l-n-1){
            p=p->next;
            i++;
        }
        ListNode* x=p->next;
        p->next=x->next;
        delete x;

        return head;
    }
};
