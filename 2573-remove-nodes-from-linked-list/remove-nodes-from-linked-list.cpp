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
    ListNode* removeNodes(ListNode* head) {
         if(head->next == nullptr) {
            return head;
        }
        ListNode* prevNode = head;
        ListNode* currentNode = head->next;

        while(currentNode != nullptr) {
            ListNode* nextNode = currentNode->next;
            currentNode->next = prevNode;
            prevNode = currentNode;
            currentNode = nextNode;
        }
        head->next = nullptr;
        head = prevNode;

        prevNode = head;
        currentNode = head->next;
        while(currentNode != nullptr) {
            if(currentNode->val < prevNode->val) {
                currentNode = currentNode->next;
            } else {
                ListNode* nextNode = currentNode->next;
                currentNode->next = prevNode;
                prevNode = currentNode;
                currentNode = nextNode;
            }   
        }
        head->next = nullptr;
        head = prevNode;
        return head;
    }
};