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
        int size=0;
        ListNode*curr1=head;
        while(curr1!=nullptr){
            curr1=curr1->next;
            size++;
        }
        int k=size-n;
         if (k == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
ListNode* curr=head;
ListNode*prev=nullptr;
       while(k > 0 && curr != nullptr){
            prev=curr;
            curr=curr->next;
            k--;

        }
        prev->next=curr->next;
        delete curr;
        return head;
        
    }
    
};