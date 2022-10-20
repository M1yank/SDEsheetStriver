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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==nullptr || head->next==nullptr) return head;
//         ListNode *newhead = nullptr;
//         while(head != nullptr){
//             ListNode *next = head->next;
//             head->next = newhead;
//             newhead = head;
//             head = next;
//         }
//         return newhead;
//     }
// };
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         //iterative
//         if(!head || !head->next) return head;
        
//         ListNode *prev = nullptr;
//         ListNode *curr = head;
//         ListNode *newh = head->next;
        
//         while(curr){
//             curr->next = prev;
//             prev = curr;
//             curr = newh;
//             if(newh) newh = newh->next;
//         }
//        return prev;
//     }
// };

class Solution {
public:
    //recursive
    
    ListNode* reverse(ListNode* head) {
        
        if(!head->next) return head;
        
        ListNode* reverseHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return reverseHead;
    
    }
    ListNode* reverseList(ListNode* head) {
        if(!head) return head; 
        return reverse(head);
    }
};
















