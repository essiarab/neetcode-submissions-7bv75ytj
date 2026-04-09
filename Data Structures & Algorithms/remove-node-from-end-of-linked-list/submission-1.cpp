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
        ListNode dummy(0, head);
        ListNode* l=&dummy;
        ListNode* r=head;
        int step=0;
        while(r && step<n){
            r=r->next;
            step++;
        }
        while(r){
            r=r->next;
            l=l->next;
        }
        ListNode* x=l->next;
        l->next=x->next;
        delete x;
        return dummy.next;
    }
};
