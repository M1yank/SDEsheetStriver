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
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *fast = start;
        ListNode *slow = start;
        
        while(n){
            fast = fast->next;
            n--;
        }
        
        while(fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        
        return start->next;
    }
};


/*
        n = 5
        1   2   3   4   5   6   7
start
fast
slow

        1   2   3   4   5   6   7
start
                        f
slow

        1   2   3   4   5   6   7
start
                            f
        s

        1   2   3   4   5   6   7
start
                                f
            s
            
        1   2   3   4   5   6   7
start
                                    f
                s
    

*/












