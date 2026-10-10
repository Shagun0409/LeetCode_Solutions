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
    ListNode* middle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;


    }

    ListNode* reverse(ListNode* head){
    ListNode*curr=head;
    ListNode*prev=nullptr;
    ListNode*forw=nullptr;

    while(curr){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    return prev;
}
    void reorderList(ListNode* head) {

        ListNode*mid = middle(head);
        ListNode*k = reverse(mid->next);
        mid->next = NULL;

        ListNode*curr=head;
        ListNode*rev=k;
    

        while(rev!=nullptr){
            ListNode*temp=curr->next;
            ListNode*temprev=rev->next;

            curr->next=rev;
            rev->next=temp;
            curr=temp;
            rev=temprev;
        }
        
    }
};