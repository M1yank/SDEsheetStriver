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
    /*
        1   2   3   4   5
    p   c   f
        
    */
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 or !head or !head->next) return head;
        
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode *prev = dummy;
        ListNode *curr = dummy;
        ListNode *foll = dummy;
        
        int count = 0;
        while(curr->next){
            curr = curr->next;
            count++;
        }
        
        
        while(count>=k){
            curr = prev->next;
            foll = curr->next;
            for(int i=1; i<k; i++){
                curr->next = foll->next;;
                foll->next = prev->next;
                prev->next = foll;
                foll = curr->next;
            }
            prev = curr;
            count -= k;
        }
        
        return dummy->next;
    }
};