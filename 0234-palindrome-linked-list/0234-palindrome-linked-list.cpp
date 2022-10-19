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
    
    ListNode * reverseList(ListNode *node){
        ListNode *dummy = nullptr;
        ListNode *next = nullptr;
        while(node){
            next = node->next;
            node->next = dummy;
            dummy = node;
            node = next;
        }
        return dummy;
    }
    
    
    bool isPalindrome(ListNode* head) {
        
        if(!head or !head->next) return true;
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast->next and fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        
        ListNode *dummy = head;
        slow = slow->next;
        
        while(slow){
            if(dummy->val != slow->val) return false;
            dummy = dummy->next;
            slow = slow->next;
        }
        
        return true;
        
    }
};




















