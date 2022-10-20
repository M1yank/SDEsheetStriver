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
        if(!headA or !headB) return nullptr;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        while(a!=b){
            a = (a == nullptr) ? headB : a->next;   //reset a to bHead if null
            b = (b == nullptr) ? headA : b->next;   //reset b to aHead if null
        }
        
        return a; //at some point if no intersection than also both will be same i.e. nullptr
    }
};
