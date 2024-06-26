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
    ListNode* middleNode(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        if(fast->next==nullptr || fast==nullptr ) return head;

       while (fast != NULL && fast->next != NULL){
             slow = slow->next; 
         // Move fast two steps.
        fast = fast->next->next; 
        }
        return slow;
        
    }
};