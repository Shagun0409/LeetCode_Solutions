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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next==nullptr || k==0){
            return head;
        }
int c=1;
ListNode *temp=head;
        while(temp->next!=nullptr){
           c++;
           temp=temp->next;
            

        }
        temp->next=head;

    k=k%c;
    k=c-k;
    while(k>0){
        temp=temp->next;
        k--;
    }
    head=temp->next;
    temp->next=nullptr;

    return head;

    }
};