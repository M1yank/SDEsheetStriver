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
    ListNode *detectCycle(ListNode *head) {
        if(!head or !head->next) return nullptr;
        ListNode *slow = head, *fast = head;
        bool isCycle = false;
        
        while(slow and fast) {
            
            if (fast->next == nullptr) return nullptr;
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) { 
                isCycle = true; 
                break; 
            }
        }
        
        if(!isCycle) return nullptr;
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
        
    }
};