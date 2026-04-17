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
    ListNode* merge2Lists(ListNode* l1,ListNode* l2){
        ListNode* res;
        ListNode dummy(0);
        res=&dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                res->next =l1;
                l1=l1->next;
            }
            else {
                res->next =l2;
                l2=l2->next;
            }
            res =res->next;
            
        }
        if(!l1) {
            res->next =l2;
        }
        if(!l2) {
            res->next =l1;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!size(lists)) {
            return nullptr;
            };
        vector<ListNode*> res;
        res.reserve(size(lists)+1/2);
        do{
            
            res.clear();
            for(int i=0;i<size(lists) ;i=i+2){
                if (i + 1 < lists.size()) {
                res.push_back(merge2Lists(lists[i], lists[i + 1]));
                } else {
                    // Odd one out: just pass it to the next round
                    res.push_back(lists[i]);
                }
            }
            lists=res;
 
        }
        while(size(res)>1);
        return res[0];
    }
};
